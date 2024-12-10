#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x1, x2, y1, y2, del_x, del_y, distance;

    printf("Enter x1 and y1 value: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2 value: ");
    scanf("%f %f", &x2, &y2);

    del_x = fabs(x1 - x2);
    del_y = fabs(y1 - y2);

    distance = sqrt(pow(del_x, 2) + pow(del_y, 2));

    printf("Distance between the said points: %.2f", distance);

    return 0;
}
