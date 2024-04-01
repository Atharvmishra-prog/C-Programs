#include<stdio.h>
#include<string.h>
void remove_spc(char []);
int main()
{
    char str[100];
    puts("Enter the String");
    gets(str);
    remove_spc(str);
}
void remove_spc(char str[])
{   int i,j=0,temp;
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {   
            for(j=i;str[j]!='\0';j++)
            {
                 str[j]=str[j+1];
            }
        }
    }
    
    puts("New String ");
    puts(str);

}