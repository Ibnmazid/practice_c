#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> find_missing_element(const vector<long long>& b, int n) {
    long long S = 0;
    for (int i = 0; i < 2 * n; ++i) {
        if (i % 2 == 0) {
            S += b[i];
        } else {
            S -= b[i];
        }
    }

    for (int i = 0; i < 2 * n; ++i) {
        long long x = b[i];
        long long a1 = S + x;
        vector<long long> a = b;
        a.push_back(a1);
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        if (a.size() == 2 * n + 1) {
            long long sum = a1;
            for (int j = 1; j < 2 * n + 1; ++j) {
                if (j % 2 == 1) {
                    sum -= a[j];
                } else {
                    sum += a[j];
                }
            }
            if (sum == 0) {
                return a;
            }
        }
    }

    return {};
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> b[i];
        }

        vector<long long> a = find_missing_element(b, n);
        for (int i = 0; i < 2 * n + 1; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}