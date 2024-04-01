#include<stdio.h>
int r,c;
void min(int b[r][c]);
int main()
{
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
     printf("the original matrix is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    min(arr);  
}
void min(int b[r][c])
{
    int i,j,min=0;
    for(i=0;i<r;i++)
    {
        min=b[i][0];
        for(j=1;j<c;j++)
        {
          if(b[i][j]<min)
          {
            min=b[i][j];
          }
        }
        printf("Minimum element in each row %d is:%d\n",i+1,min);
    }    
}
