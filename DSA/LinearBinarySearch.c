#include<stdio.h>
#include<stdlib.h>


int linearSearch(int arr[],int size,int element){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;

}
int binarySearch(int arrSorted[],int size, int element){

    int low, high,mid;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (low+high)/2;

        if(arrSorted[mid]==element){
            return mid;
        }

        if(arrSorted[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={1,10,45,32,67,23,41,23,65,23};
    int arrSorted[] = {1,2,3,4,5,6,7,8,9,10};
    int element = 3;
    int size = 10;
    int searchIndex = binarySearch(arrSorted,size,element);
    printf("The element was found at index number : %d",searchIndex);
    return 0;
    
}