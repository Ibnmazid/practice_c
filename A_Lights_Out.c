#include <stdio.h>

int main() {
    int press[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &press[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            
            int totalToggles = press[i][j];
            
            if (i - 1 >= 0) {
                totalToggles += press[i - 1][j];
            }
            
            if (i + 1 < 3) {
                totalToggles += press[i + 1][j];
            }
            
            if (j - 1 >= 0) {
                totalToggles += press[i][j - 1];
            }
            
            if (j + 1 < 3) {
                totalToggles += press[i][j + 1];
            }

            if (totalToggles % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
