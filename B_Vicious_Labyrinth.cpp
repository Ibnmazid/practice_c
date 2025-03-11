#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        if (k % 2 == 1) {
            for (int i = 0; i < n; ++i) {
                if (i < n - 1) {
                    a[i] = i + 2; // Teleport to the next cell
                } else {
                    a[i] = 1; // Teleport to the first cell
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                if (i < n - 1) {
                    a[i] = i + 2; // Teleport to the next cell
                } else {
                    a[i] = n - 1; // Teleport to the second last cell
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}