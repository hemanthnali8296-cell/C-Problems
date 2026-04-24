#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) 
    return 0;
    int codes[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&codes[i]);
    }
    int isUnique = 1;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (codes[i] == codes[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique==0) break;
    }
    if (isUnique) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}