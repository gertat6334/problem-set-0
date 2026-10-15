#include <stdio.h>

int main(void){
    char name[60];
    printf("Введите имя:");
    scanf("%59s", &name);
    printf("привет, %s\n",name);
    return 0;
}
