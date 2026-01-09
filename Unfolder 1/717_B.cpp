#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n+3]={0};
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int pre[n+3] = {0};
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]^a[i];
    }

    int ans = 0;
    for(int i=1; i<n; i++){
        int a = pre[i];
        int b = pre[i]^pre[n];
        if(a==b){
            ans = 1;
            break;
        }
    }
    for(int i=1; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int a = pre[i];
            int b = pre[j]^pre[i];
            int c = pre[n]^pre[j];
            if(a==b && b==c){
                ans = 1;
                break;
            }
        }
        if(ans==1)break;
    }
    if(ans==1)cout << "YES\n";
    else cout << "NO\n";

}


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
