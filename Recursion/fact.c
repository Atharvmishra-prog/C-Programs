#include <stdio.h>
int fact(int);
int main()
{
 int a;
 printf("Enter the number \n");
 scanf("%d",&a);
 int f=fact(a);
 printf("Factorial is %d",f);
}
int fact(int num)
{
    if(num==0 || num==1)
    return 1;
    else
    return num * fact(num-1);
    
}
