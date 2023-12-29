#include<stdio.h>
#define SIZE 5
int main(void)
{
    //int arr[5];
    //               0
    int arr[ SIZE ]={11}; // int arr[ 5 ];
    //               10
    //int arr[]; // error
    //          0   1  2  3  4    index subscript
    //int arr[]= {11,22,33,44,55}; 
 //             10 14 18 22 26     address
    int index;
    printf("\n Enter Element of array \n");
    for( index=0; index< SIZE ; index++)
    {
        printf("\n Enter arr[%d] = ", index);
        scanf("%d", &arr[index]);
    }
    

    printf("\n Element of array \n");
    for( index=0; index< SIZE ; index++)
    {
        printf("\n arr[%d] %5d [%u]", index, arr[index], &arr[index]);
    }
    printf("\n no of elements in array=%d", SIZE);  // 5
    printf("\n sizeof Array int bytes=%d", SIZE * sizeof(int)); // 5* 4=20 bytes
       return 0;
}
