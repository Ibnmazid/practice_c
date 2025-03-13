#include <stdio.h>
#include <stdbool.h>
#include <math.h>
 
 
int distance_squared(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
 
 
bool is_square(int l, int r, int d, int u) {
    
    
    
    int d1 = distance_squared(-l, 0, r, 0);     // L to R
    int d2 = distance_squared(-l, 0, 0, -d);    // L to D
    int d3 = distance_squared(-l, 0, 0, u);     // L to U
    int d4 = distance_squared(r, 0, 0, -d);     // R to D
    int d5 = distance_squared(r, 0, 0, u);      // R to U
    int d6 = distance_squared(0, -d, 0, u);     // D to U
    
    
    
    
    int distances[6] = {d1, d2, d3, d4, d5, d6};
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (distances[i] > distances[j]) {
                int temp = distances[i];
                distances[i] = distances[j];
                distances[j] = temp;
            }
        }
    }
    
    
    if (distances[0] != distances[1] || distances[1] != distances[2] || distances[2] != distances[3]) {
        return false;
    }
    
    
    if (distances[4] != distances[5]) {
        return false;
    }
    
    
    if (distances[4] != 2 * distances[0]) {
        return false;
    }
    
    return true;
}
 
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u);
        
        if (is_square(l, r, d, u)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}