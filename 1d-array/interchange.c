#include<stdio.h>
void inter(int*[],int);
void main()
{
    int i,a[100],n,*p;
    printf("Enter the Size of Array");
    scanf("%d",&n);
    printf("enter the values in array\n");
    p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("The original array\n");
     for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    inter(a,n);

}
void inter(int* p[],int n)
{   int temp;
    for(int i=0;i<n;i+=2)
    {
       temp= *(p+i);
       *(p+i)=*(p+i+1);
       *(p+i+1)=temp;
    }
     printf("The array after interchanging odd index by even \n");
     for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }

}

