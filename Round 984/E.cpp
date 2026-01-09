#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ui unsigned int
 
void solve() {
    ui n, k, q;
    cin >> n >> k >> q;
 
    vector<vector<ui>> a(n + 1, vector<ui>(k + 1));
    for (ui i = 1; i <= n; i++) {
        for (ui j = 1; j <= k; j++) {
            cin >> a[i][j];
        }
    }
 
    // Perform bitwise OR operation
    for (ui i = 2; i <= n; i++) {
        for (ui j = 1; j <= k; j++) {
            a[i][j] = a[i-1][j] | a[i][j];
        }
    }
 
    for (ui i = 0; i < q; i++) {
        ui m;
        ui ans=1;
        ui f=1;
        cin >> m;
        vector<ui> w,z;
        vector<char> cc;
        for(ui j=0; j<m; j++){
            ui x, v, t=0;
            char c;
            cin>>x>>c>>v;
            w.push_back(x);
            z.push_back(v);
            cc.push_back(c);
            if(c=='<'){
                if(a[ans][x]>=v){
                    t=0;
                }
                else t=1;
 
                f=f*t;
            }
            else{
                ui left = ans, right = n;
                while(left<=right){
                    ui mid = (left+right)/2;
                    if(a[mid][x]>v){
                        t = 1;
                        ans = mid;
                        right = mid-1;
                    }
                    else{
                        left = mid+1;
                    }
                }
                f = f*t;
            }
        }
        if(f==0){
            cout << -1 << endl;
        }
        else {
            ui h=0;
            for(ui j=0; j<m; j++){
                if(cc[j]=='<'){
                    if(a[ans][w[j]]>= z[j])h++;
                }
                else{
                    if(a[ans][w[j]]<=z[j])h++;
                }
            }
            if(h>0)cout << -1 << endl;
            else cout << ans << endl;
        }
    }
}
 
int main() {
    int t;
    t=1;
    while (t--) solve();
}