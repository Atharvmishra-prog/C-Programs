#include<stdio.h>
#include<string.h>
void spc(char []);
int main()
{
    char str[100];
    printf("\t\t*****INPUT*****\n");
    puts("Enter the String");
    fgets(str,100,stdin);
    spc(str);
}
void spc(char str[])
{   int i,j=0,temp;
    temp=strlen(str);
    for(i=0;i<temp;i++)
    {
        if(str[i]==' ')
        {   
            str[i]='\n';
        }
    }
    printf("\t\t*****OUTPUT*****\n");
    printf("Strings or word after split by spaces are:\n%s",str);

}