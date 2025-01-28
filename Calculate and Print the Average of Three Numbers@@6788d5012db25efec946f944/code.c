#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    float x=a+b+c;
    printf("Average: %.2f",x/3);
    return 0;
}