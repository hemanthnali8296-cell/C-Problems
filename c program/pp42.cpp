#include<stdio.h>
int main() {
    char *name = "DeLHI";
    int len;
    char *cptr = name;
    printf("%s\n", name);
    while (*cptr != '\0') {
        printf("%c is stored at address %p\n", *cptr, (void *)cptr);
        cptr++;
    }
    len = cptr - name;
    printf("\nLength of the string = %d\n", len);
    return 0;
}
