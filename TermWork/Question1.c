#include <stdio.h>
void Unique(int [], int);
int main()
{
    int arr[100],i, n;
    printf("\t\t*****INPUT*****\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\t\t*****OUTPUT*****\n");
    Unique(arr,n);
}
void Unique(int b[], int n)
{
    int i,j,t;
    for (i = 0; i < n; i++)
    {
        for (j =0; j < n-(i+1); j++)
        {
            if (b[j]>b[j+1])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("The unique element found in the array are: ");
    for(i=0;i<n;i++)
    {
        if(b[i]!=b[i+1])
        printf("%d ",b[i]);
        else
        {
            i++;
        }
    }
}
