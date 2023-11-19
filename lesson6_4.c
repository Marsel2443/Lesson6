#include <stdio.h>

int is_happy_number(int n)
{   
int multi, sum;
    multi = n%10;
    multi *= (n/10)%10;
    multi *= (n/100)%10;    
    sum = n%10;
    sum += (n/10)%10;
    sum += (n/100)%10;       
    return multi==sum;
}

int main()
{
int a; 
    printf("Input number:\n");
    scanf("%d", &a);     
    is_happy_number(a) ? printf("YES") : printf("NO");        
    return 0;    
}   
