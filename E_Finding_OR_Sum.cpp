#include <iostream>
#include <cstdio>

using namespace std;

void solve() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int x, y, m;
        cin >> x >> y >> m; // Read x, y, m for each test case
        
        // First query: n = 0
        cout << 0 << endl;
        cout.flush();
        int response_1 = x + y;
        
        // Second query: n = 1
        cout << 1 << endl;
        cout.flush();
        int response_2 = (1 + x) + (1 + y);
        
        // Now calculate (m | x) + (m | y)
        int result = (m | x) + (m | y);
        
        // Output the final result
        cout << result << endl;
        cout.flush();
    }
}

int main() {
    solve();
    return 0;
}
