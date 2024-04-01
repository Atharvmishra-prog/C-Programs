#include<stdio.h>
void asce(int*[] ,int);
int main()
{
    int sz,*p;
    printf("Enter the size \n");
    scanf("%d",&sz);
    int a[sz];
    p=&a[0];
    printf("Enter the values in array\n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",(p+i));
    } 
     printf("The original Array\n");
    for(int i=0;i<sz;i++)
    {
        printf("%d\t",*(p+i));
    } 
    asce(a,sz);

}
void asce(int *p[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("Array after sorting\n");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",*(p+k));
    }

}

