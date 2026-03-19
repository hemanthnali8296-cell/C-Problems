#include <stdio.h>
int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);
    int burn[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &burn[i]);
    }
    int i = 0;
    int emergencyStage = -1;
    int wastedFuel = 0;
    while(i < N) {
        fuel -= burn[i];
        if(fuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1;  
            wastedFuel = -fuel;  
        }

        i++;
    }
    if(emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d\n", wastedFuel);
    }

    return 0;
}