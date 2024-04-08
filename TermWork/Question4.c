#include<stdio.h>
int r,c;
void max(int b[r][c]);
int main()
{
    printf("\t\t*****INPUT*****\n");
    printf("Enter the row and colummn\n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the value in array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
     printf("The given array is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\t\t*****OUTPUT*****\n");
    max(arr);  
}
void max(int b[r][c])
{
    int i,j,max=0;
    for(i=0;i<r;i++)
    {
        max=b[i][0];
        for(j=1;j<c;j++)
        {
          if(b[i][j]>max)
          {
            max=b[i][j];
          }
        }
        printf("Maximun element in row %d is:%d\n",i+1,max);
    }    
}