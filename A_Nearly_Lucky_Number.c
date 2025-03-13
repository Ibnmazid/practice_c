#include <stdio.h>

int main() {
    char n[20];  
    scanf("%s", n);  

    int lucky_count = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '4' || n[i] == '7') {
            lucky_count++;
        }
    }

   
    if (lucky_count == 4 || lucky_count == 7) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}
