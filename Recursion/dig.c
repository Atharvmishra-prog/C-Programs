#include <stdio.h>
int dig(int);
int main()
{
    int num,s=0;
    printf("Enter the numner\n");
    scanf("%d",&num);
    s=dig(num);
    printf("The sum of digit is %d",s);

}
int dig(int a)
{
    if (a==0)
    return 0;
    else
    return a%10+dig(a/10);
}