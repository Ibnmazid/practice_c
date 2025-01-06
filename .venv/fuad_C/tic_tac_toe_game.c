#include <stdio.h>

int main() {
    int i = 1, j = 2, k = 3;
        int a = 4, b = 5, c = 6;
        int x = 7, y = 8, z = 9;

    for(int i=0; i<9;i++){
        
        
        printf("%d | %d | %d\n", i, j, k);
        printf("---------\n");
        printf("%d | %d | %d\n", a, b, c);
        printf("---------\n");
        printf("%d | %d | %d\n", x, y, z);

        
        int p1, p2;
        printf("Player 1, enter your position: ");
        scanf("%d", &p1);

        printf("Player 2, enter your position: ");
        scanf("%d", &p2);

        
        if(p1 == 1) {
            i = 0;
        } else if(p1 == 2) {
            j = 0;
        } else if(p1 == 3) {
            k = 0;
        } else if(p1 == 4) {
            a = 0;
        } else if(p1 == 5) {
            b = 0;
        } else if(p1 == 6) {
            c = 0;
        } else if(p1 == 7) {
            x = 0;
        } else if(p1 == 8) {
            y = 0;
        } else if(p1 == 9) {
            z = 0;
        }

        // Update the board for Player 2
        if(p2 == 1) {
            i = 10;
        } else if(p2 == 2) {
            j = 10;
        } else if(p2 == 3) {
            k = 10;
        } else if(p2 == 4) {
            a = 10;
        } else if(p2 == 5) {
            b = 10;
        } else if(p2 == 6) {
            c = 10;
        } else if(p2 == 7) {
            x = 10;
        } else if(p2 == 8) {
            y = 10;
        } else if(p2 == 9) {
            z = 10;
        }

        // Add a break condition to exit the infinite loop after a few moves or based on game rules (optional)
    }
    return 0;
}
