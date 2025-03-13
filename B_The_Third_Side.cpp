#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; ++_) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << a[0] << endl;
            continue;
        }
        long long sum = 0;
        for (int num : a) {
            sum += num;
        }
        cout << sum - (n - 1) << endl;
    }
    return 0;
}