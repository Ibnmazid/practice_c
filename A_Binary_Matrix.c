#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        
       
        char matrix[110][110]; 
        for (int i = 0; i < n; i++){
            scanf("%s", matrix[i]);
        }
        
        int oddRows = 0, oddCols = 0;
        
        
        for (int i = 0; i < n; i++){
            int sum = 0;
            for (int j = 0; j < m; j++){
                sum += matrix[i][j] - '0';
            }
            if (sum % 2 == 1) oddRows++;
        }
        
        
        for (int j = 0; j < m; j++){
            int sum = 0;
            for (int i = 0; i < n; i++){
                sum += matrix[i][j] - '0';
            }
            if (sum % 2 == 1) oddCols++;
        }
        
        
        int answer = oddRows > oddCols ? oddRows : oddCols;
        printf("%d\n", answer);
    }
    
    return 0;
}
