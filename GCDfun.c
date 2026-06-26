#include<stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("GCD = %d", gcd(x, y));

    return 0;
}