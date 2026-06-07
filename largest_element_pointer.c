#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", arr+i);
    }

    int max = *arr;

    for(int i=1; i<5; i++)
    {
        if(*(arr+i) > max)
        {
            max = *(arr+i);
        }
    }

    printf("Largest = %d", max);

    return 0;
}
