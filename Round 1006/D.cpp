#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    int best = 0, l = 1, r = 1;
    for(int i=1; i<=n; i++){
        int d = 0;
        for(int j=i+1; j<=n; j++){
            if(a[i]>a[j])d++;
            if(a[i]<a[j])d--;
            if(best<d){
                best = d;
                l = i;
                r = j;
            }
        }
    }
    cout << l << " " << r << endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}