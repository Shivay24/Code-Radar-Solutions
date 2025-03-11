#include <stdio.h>
int main()
{
     char str[1];
    gets(str);
    if(str>='a' && str<='z')
    printf("Lowercase");
    else
    printf("Uppercase");
}