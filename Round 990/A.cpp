#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];

    int mx = -99999999;
    int sum = 0;
    for(int i=0; i<n; i++)sum += max(a[i], b[i]);
    for(int i=0; i<n; i++)mx = max(mx, min(a[i], b[i]));
    cout << sum+mx << endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}