#include <stdio.h>
#include<conio.h>

int main()
{
    int n, = 0,x,y;

    printf("Enter a value: ");
    scanf("%d", &n);

    while(n != 0)
    {
        y= n%10;
        x= x*10 +y;
        n /= 10;
    }

    printf("reversed number = %d",x);

    return 0;
}

