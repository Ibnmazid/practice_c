#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char s[1001];
    int freq[ALPHABET_SIZE] = {0};
    
    scanf("%s", s);
    int len = strlen(s);
    
    
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    int odd_count = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }
    
    
    if (odd_count == 0 || odd_count % 2 == 1) {
        printf("First\n");
    } else {
        printf("Second\n");
    }
    
    return 0;
}
