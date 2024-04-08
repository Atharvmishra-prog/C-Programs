#include<stdio.h>
#include<string.h>
void remove_spc(char []);
int main()
{
    char str[100];
    printf("\t\t*****INPUT*****\n");
    puts("Enter the String");
    gets(str);
    remove_spc(str);
}
void remove_spc(char str[])
{   int i,j=0;   
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("\t\t*****OUTPUT*****\n");
    puts(str);
}
