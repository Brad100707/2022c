#include <stdio.h>

int main()
{
    FILE * f = fopen("檔案輸出.txt", "w+");

    fprintf(f, "Hello 我在這裡\n");

    printf("Hello world\n");
}
