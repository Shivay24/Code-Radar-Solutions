#include <stdio.h>
int main() {
    char str[2120];
    gets(str);
    printf("You entered: %c",str);
    return 0;
}