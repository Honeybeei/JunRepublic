#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr1[20];
    char *arr2;

    printf("arr1 size : %lu\n", sizeof(arr1));
    printf("ptr  size : %lu\n", sizeof(char *));
    printf("arr2 size : %lu\n", sizeof(arr2));
    arr2 = malloc(sizeof(char) * 10);
    printf("arr2 size : %lu\n", sizeof(arr2));
    free(arr2);
    return 0;
}