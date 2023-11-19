#include <stdio.h>

int sumN(int n)
{
 int sum;
    for (int i = 1; i <= n; i++) 
         sum+= i;
    return sum;  
}    

int main()
{
    int n; 
    printf("Input number:\n");
    scanf("%d", &n); 
    printf("%d", sumN(n));
    return 0; 
}
