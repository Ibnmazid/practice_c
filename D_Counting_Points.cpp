#include <bits/stdc++.h>
using namespace std;


struct Interval {
    int y;           
    long long L, R;  
};


long long mergeAndCount(const vector<pair<long long,long long>> &v) {
    long long total = 0;
    if (v.empty()) return 0;

    long long curL = v[0].first, curR = v[0].second;
    for (int i = 1; i < (int)v.size(); i++) {
        long long L = v[i].first, R = v[i].second;
        if (L <= curR + 1) {
            
            curR = max(curR, R);
        } else {
           
            total += (curR - curL + 1);
            curL = L;
            curR = R;
        }
    }
    
    total += (curR - curL + 1);
    return total;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> X(n);
        vector<int> R(n);

        for(int i = 0; i < n; i++){
            cin >> X[i];
        }
        for(int i = 0; i < n; i++){
            cin >> R[i];
        }

        
        vector<pair<long long,long long>> zeroIntervals;
        zeroIntervals.reserve(n);
        for(int i = 0; i < n; i++){
            long long L = X[i] - R[i];
            long long U = X[i] + R[i];
            zeroIntervals.push_back({L, U});
        }
        sort(zeroIntervals.begin(), zeroIntervals.end());
        long long coverage0 = mergeAndCount(zeroIntervals);

        
        vector<Interval> intervals;
        intervals.reserve(m); 

        
        for(int i = 0; i < n; i++){
            int rr = R[i];
            long long cx = X[i];
            
            for(int y = 1; y <= rr; y++){
                long long left = (long long)rr*rr - (long long)y*y;
                if(left < 0) break; 
                
                long long d = (long long) floor( sqrt((long double) left ) );
                long long L = cx - d;
                long long R_ = cx + d;
                intervals.push_back({y, L, R_});
            }
        }

        
        sort(intervals.begin(), intervals.end(), 
             [](const Interval &a, const Interval &b){
                 if(a.y != b.y) return a.y < b.y;
                 return a.L < b.L;
             }
        );

        
        long long totalAbove = 0; 
        
        int i = 0;
        while(i < (int)intervals.size()){
            int curY = intervals[i].y;
            
            vector<pair<long long,long long>> row;
            while(i < (int)intervals.size() && intervals[i].y == curY){
                row.push_back({intervals[i].L, intervals[i].R});
                i++;
            }
            
            sort(row.begin(), row.end()); 
            long long countRow = mergeAndCount(row);
            totalAbove += countRow;
        }

        
        long long answer = coverage0 + 2LL * totalAbove;
        cout << answer << "\n";
    }
    return 0;
}
