#include <stdio.h>
int main() {
    char s[100];
    int a;
    char c[100];
    scanf("%s %i",&s,&a);
    scanf("%s",&c);
    printf("Name: %s\n",s);
    printf("Age: %i\n",a);
    printf("Hobby: %s",c);
    return 0;
}