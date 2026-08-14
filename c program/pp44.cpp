#include<stdio.h>
#include<stdlib.h>
int main() {
    int *num, *freq;
    int i, size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    num = (int*)malloc(size * sizeof(int));
    printf("Enter the numbers (0 - 4 only):\n");
    for(i = 0; i < size; i++) {
        printf("Enter num[%d]: ", i);
        scanf("%d", &num[i]);
        if(num[i] < 0 || num[i] > 4) {
            printf("Number should be in range (0 - 4)\n");
            i--;
        }
    }
    freq = (int*)calloc(5, sizeof(int));
    for(i = 0; i < size; i++) {
        freq[num[i]]++;
    }
    printf("\nThe frequencies of the numbers are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d occurs %d times\n", i, freq[i]);
    }
    free(num);
    free(freq);
    return 0;
}
