#include<stdio.h>
int r,c;
void replace(int [r][c]);
void main()
{    
    int i,j;
    printf("Enter the row and column\n");
    scanf("%d \n %d",&r,&c);
    int a[r][c];
    printf("Enter the values in array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("The original array is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    replace(a);
}
void replace(int b[r][c])
{
    int rrp,rwp,i;
    printf("enter the column to replace\n");
    scanf("%d",&rrp);
    printf("enter the column to replace with \n");
    scanf("%d",&rwp);
    if((rrp>=0&&rrp<r)&&(rwp>=0&&rwp<r))
    {
        for(i=0;i<r;i++)
        {
            int temp=b[i][rrp];
            b[i][rrp]=b[i][rwp];
            b[i][rwp]=temp;
        }
     printf("The array after replace \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    }
    else
    printf("Invalid row indices\n");
}