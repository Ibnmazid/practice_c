#include <stdio.h>
int main() {
    float number[5];
    int i;
    float odd_sum = 0;  

    printf("Enter 5 numbers: ");
    
    for(i = 0; i < 5; i++) {
        scanf("%f", &number[i]);
    }

    for(i = 0; i < 5; i++) {
        
        if((int)number[i] % 2 != 0) {
            odd_sum += number[i];
        }
    }

    printf("Sum of odd numbers: %.2f", odd_sum); 
    
    return 0;
}
