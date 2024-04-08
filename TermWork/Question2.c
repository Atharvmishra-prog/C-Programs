#include<stdio.h>
void odd_even(int [],int);
int main()
{
    int a[100],n,i;
    printf("\t\t*****INPUT*****\n");
    printf("Input the number of element to be stored in the array:");
    scanf("%d",&n);
    printf("Enter the %d elements in the array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element-%d:",i);
        scanf("%d",&a[i]);
    }
    printf("\t\t*****OUTPUT*****\n");
    odd_even(a,n);
}
void odd_even(int b[],int n)
{
    int o[100],e[100],i,ec=0,oc=0;
    for(i=0;i<n;i++)
    {
        if(b[i]%2==0)
        {
            e[ec++]=b[i];
        }
        else
        {
            o[oc++]=b[i];
        }
    }
    printf("The even elements are:");
    for(i=0;i<ec;i++)
    {
        printf("%d ",e[i]);
    }
    printf("\nThe odd elements are:");
    for(i=0;i<oc;i++)
    {
        printf("%d ",o[i]);
    }
}
