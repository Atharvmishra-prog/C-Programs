#include<stdio.h>
void main(){
   int arr[100],i,a,j,b,count=0;
   printf("Enter size of an array:");
   scanf("%d",&a);
   printf("Enter array elements:");
   for (i=0;i<a;i++){
       scanf("%d",&arr[i]);
   }
   printf("All prime list is:");
   for(i=0;i<a;i++){
      b=0;
      for(j=1;j<arr[i];j++){
       
           if(arr[i]%j==0){
               b++;
               
           }
       }
       if(b==1||arr[i]==1){
           count=count+1;
        printf("%d ",arr[i]);
       }
   }
    printf("\nthe total prime number is %d ",count);
}