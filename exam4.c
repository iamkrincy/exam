#include <stdio.h>

void find_squares(int *arr, int size)
{  
    int i;
    for (i=0; i<size; i++)
    {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main(void)
{   
    int i;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    find_squares(arr, size);

    for (i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}