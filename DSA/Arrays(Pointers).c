//Working with Array datatype in C

#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a,int tSize, int uSize){

    a->totalSize = tSize;
    a->usedSize = uSize;
    a->ptr = (int*)malloc(tSize *sizeof(int));

}

void setValue(struct myArray *a){
    int n;
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("Enter the value you would like to set at index [%d]\t",i);
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}
void showValue(struct myArray *a){
    for (int i = 0; i < a->usedSize; i++)
    {
        printf(" The value at index [%d] is %d\n",i,a->ptr[i]);
    }
}

int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    setValue(&marks);
    showValue(&marks);
    return 0;

}