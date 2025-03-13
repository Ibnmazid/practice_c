#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define PI 3.141592653589793238462643383279502884197169399375105820974944
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <typename T>
void _print(T t) { cerr << t; }
template <typename T, typename V>
void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template <typename T>
void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <typename T>
void _print(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <typename T, typename V>
void _print(map<T, V> v) { cerr << "{ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "}"; }

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while(t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if(l == r && l == d && d == u){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}