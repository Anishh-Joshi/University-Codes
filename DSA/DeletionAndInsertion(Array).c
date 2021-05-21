//Value Insertion in array C
#include<stdio.h>

void displayArray(int arr[],int size){

    for(int i = 0;i< size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int insertInTheArray(int arr[], int sz, int whereto, int number, int tSize){
    if(sz>=tSize){
        return -1;
    }
    for (int i = sz -1; i >= whereto; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[whereto] = number;
    return 1;
}

int deletionInTheArray(int arr[],int sz, int tSize, int index){
    for(int i = index;i<sz ;i++){
        arr[i]=arr[i+1];
    }
    return 0;

}

int main(){
    int arr[100] = {1,2,4,5};
    int size= 4;
    int insertionIndex = 2, insertionNumber = 3;
    displayArray(arr,size);
    insertInTheArray(arr,size,insertionIndex,insertionNumber,100);
    displayArray(arr,size+1);
    //1,2,3,4,5
    int deletionIndex = 1;
    deletionInTheArray(arr,size,100,deletionIndex);
    displayArray(arr,size);
    return 0;
}