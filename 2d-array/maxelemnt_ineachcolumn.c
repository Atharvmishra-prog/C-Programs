#include<stdio.h>
int r,c;
void max(int b[r][c]);
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
    max(arr);  
}
void max(int b[r][c])
{
    int i,j,max=0;
    for(i=0;i<c;i++)
    {
        max=b[0][i];
        for(j=1;j<r;j++)
        {
          if(b[j][i]>max)
          {
            max=b[j][i];
          }
        }
        printf("Maximun element in coulumn %d is:%d\n",i+1,max);
    }    
}
