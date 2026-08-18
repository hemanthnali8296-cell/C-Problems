#include <stdio.h>
int main() {
    FILE *fl;
    char c;
    printf("data input\n\n");
    fl = fopen("INPUT.txt", "w");
    while ((c = getchar()) != EOF)
        putc(c, fl);
    fclose(fl);
    printf("\nData output\n\n");
    fl = fopen("INPUT.txt", "r");
    while ((c = getc(fl)) != EOF)
    printf("%c",c);
    fclose(fl);
    return 0;
}
