#include <stdio.h>

#define MAX_POINTS 200


typedef struct {
    int x, y;
} Point;

int main() {
    int n;
    scanf("%d", &n);
    
    Point points[MAX_POINTS]; 

    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    int supercentral_count = 0;

    
    for (int i = 0; i < n; i++) {
        int hasLeft = 0, hasRight = 0, hasUpper = 0, hasLower = 0;

        for (int j = 0; j < n; j++) {
            if (i == j) continue; 
            if (points[j].x > points[i].x && points[j].y == points[i].y) hasRight = 1;
            if (points[j].x < points[i].x && points[j].y == points[i].y) hasLeft = 1;
            if (points[j].x == points[i].x && points[j].y > points[i].y) hasUpper = 1;
            if (points[j].x == points[i].x && points[j].y < points[i].y) hasLower = 1;
        }

       
        if (hasLeft==1 && hasRight==1 && hasUpper==1 && hasLower==1) {
            supercentral_count++;
        }
    }

    printf("%d\n", supercentral_count);
}
