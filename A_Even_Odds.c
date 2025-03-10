#include <stdio.h>

int main() {
    int n, c;
   
    scanf("%d %d", &n, &c);

    int num[n];  
    int index = 0;

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  
            num[index++] = i;
        }
    }

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {  
            num[index++] = i;
        }
    }

    
    printf("%d\n", num[c - 1]); 

    return 0;
}
#include <stdio.h>

int main() {
    int n, c;
    printf("Enter number: ");
    scanf("%d %d", &n, &c);

    int num[n];  
    int index = 0;

    
    for (int i = 1; i <= n; i += 2) {
        num[index++] = i;
    }

    
    for (int i = 2; i <= n; i += 2) {
        num[index++] = i;
    }

   
    printf("%d\n", num[c - 1]);  

    return 0;
}
