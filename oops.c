#include <stdio.h>
void main()
{
    int arr1[1000];
    getArray(arr1);
    displayArray(arr1);
}

int getArray(int arr1[])
{
    int limit, i;
    printf("Enter the size of an array:");
    scanf("%d", &limit);
    printf("Enter the array elements");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr1[i]);

    }

}

