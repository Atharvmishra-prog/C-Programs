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
    int i,j,c=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(b[i][j]!=1 &&b[j][i]!=0)
            {
                c=0;
                break;
            }       
        }       
    }

    if(c==1)
    printf("Above matrice is identity\n");
    else if(c=2)
    printf("Not identity matrix\n");
}
