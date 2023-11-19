#include <stdio.h>

int nod(int a, int b);

int main()
{
int a, b; 
    printf("Input number:\n");            
    scanf("%d%d", &a, &b);         
    printf("%d\n", nod(a,b));
    return 0; 
}   
    
int nod(int a, int b)
{
int m;   
    while (b != 0) 
    {
        m = b;
        b = a % b;
        a = m;
    }
    return a;
}
