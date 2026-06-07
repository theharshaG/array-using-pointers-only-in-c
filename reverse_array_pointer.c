#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", arr+i);
    }

    int *p = arr + 4;

    while(p >= arr)
    {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
