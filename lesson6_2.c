#include <stdio.h>

unsigned long long power( int p)
{
unsigned long long res;
    res = 1;    
    if (p<=64)
    {            
        for (int i = 2; i <= p; i++)
        res *= 2;        
        return res;
    }        
    return 0;    
}

int main()
{
int a; 
    printf("Input number:\n");
    scanf("%d", &a);
    while (a>64){
        printf("Enter number smaller than 65 \n");
    return 0;
    }        
    printf("%I64u", power(a)); 
    return 0; 
}
    

