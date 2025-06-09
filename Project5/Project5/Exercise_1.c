#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void star()
{
    int i = 0;
    for (i = 0; i <= 20; i++)
        printf("*");
    printf("\n");
}
void hi() {
    printf("Hello World!\n");
}
int main(void) {
    star();
    hi();
    star();
    return 0;


}