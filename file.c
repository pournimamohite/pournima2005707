#include <stdio.h>
int main() 
{
    int a, i;
    unsigned long long fact = 1;
    printf("Enter a value : ");
    scanf("%d", &a);
    if (a < 0)
        printf("Factorial of a negative number doesn't exist");
    else 
    {
        for (i = 1; i <= a; ++i) 
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu", a, fact);
    }
 return 0;
}
