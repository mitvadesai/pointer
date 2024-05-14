#include<stdio.h>

void swap(int *ptr1, int *ptr2) 
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() 
{
    int var1, var2;

    printf("Enter the value of variable X: ");
    scanf("%d", &var1);

    printf("Enter the value of variable Y: ");
    scanf("%d", &var2);

    printf("Before swapping:\n X = %d,\n Y = %d\n", var1, var2);

    swap(&var1, &var2);

    printf("After swapping:\n X = %d,\n Y = %d\n", var1, var2);
}