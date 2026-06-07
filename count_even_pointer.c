#include<stdio.h>

int main()
{
    int arr[5];
    int count = 0;

    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", arr+i);
    }

    for(int i=0; i<5; i++)
    {
        if(*(arr+i) % 2 == 0)
        {
            count++;
        }
    }

    printf("Even Count = %d", count);

    return 0;
}
