#include <stdio.h>
int main()
{
    int n, a= 0, r,i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    i= n;

    
    while( n!=0 )
    {
        r= n%10;
        a= a*10 + r;
        n /= 10;
    }

        if(i== r)
        printf("%d is a palindrome.",i);
    else
        printf("%d is not a palindrome.",i);
    
    return 0;
}
