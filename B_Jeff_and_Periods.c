#include <stdio.h>

#define MAX 100001

int last_pos[MAX] = {0};  
int common_diff[MAX] = {0};  
int invalid[MAX] = {0};  
int n, a, i, valid_count = 0;

int main() {
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%d", &a);

        if (invalid[a]) continue;  

        if (last_pos[a]) {  
            if (!common_diff[a]) {
                common_diff[a] = i - last_pos[a]; 
            } else if (common_diff[a] != i - last_pos[a]) {
                invalid[a] = 1;  
                valid_count--;
            }
        } else {
            valid_count++;  
        }
        last_pos[a] = i;  
    }

    printf("%d\n", valid_count);
    
    for (i = 1; i < MAX; i++) {
        if (last_pos[i] && !invalid[i]) {
            printf("%d %d\n", i, common_diff[i]);
        }
    }
    
    return 0;
}
