#include <stdio.h>
int main() {
    int maxCapacity, n;
    scanf("%d %d",&maxCapacity,&n);
    int i = 0;
    int patients;
    int treated = 0,rejected=0;
    while(i<n){
        scanf("%d",&patients);
        if (treated+patients<=maxCapacity) {
            treated+=patients;
        } 
        else {
            int remaining=maxCapacity-treated;
            if (remaining>0) {
                treated+=remaining;
                rejected+=patients-remaining;
            } else {
                rejected+=patients;
            }
        }
        i++;
    }
    printf("Treated Patients: %d\n",treated);
    printf("Rejected Patients: %d",rejected);
    return 0;
}