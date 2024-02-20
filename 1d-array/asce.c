#include<stdio.h>
void asce(int[],int);
int main()
{
    int sz;
    printf("Enter the size \n");
    scanf("%d",&sz);
    int a[sz];
    printf("Enter the values in array\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    } 
     printf("The original Array\n");
    for(int i=0;i<sz;i++)
    {
        printf("%d\t",a[i]);
    } 
    asce(a,sz);

}
void asce(int b[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("Array after sorting\n");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",b[k]);
    }

}

