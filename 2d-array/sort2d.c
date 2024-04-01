#include<stdio.h>
int r,c;
void bod(int b[r][c]);
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
    bod(arr);  
}
void bod(int b[r][c])
{
    int i,j,ind;
    printf("Enter the index\n");
    scanf("%d",&ind);
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(b[i][ind]>b[j][ind])
            {
              int t=b[i][ind];
              b[i][ind]=b[j][ind];
              b[j][ind]=t;
            }       
        }       
    }
       printf("after sorting %d row\n",ind);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("%d",b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
   
