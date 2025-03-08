#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int vec[n][3];  

    
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &vec[i][0], &vec[i][1], &vec[i][2]);  
    }

    int x = 0, y = 0, z = 0;

    
    for (int i = 0; i < n; i++) {
        x += vec[i][0];
        y += vec[i][1];
        z += vec[i][2];
    }

    
    if (x == 0 && y == 0 && z == 0) {  
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
