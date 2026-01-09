#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string s;
    cin>>s;
    map<ll,ll>m;
    int z=0;
    
    int a[10];
    for(int i = 0; i<10; i++){
        a[i] = s[i] - '0';
    }
    int ans[10];

    for(int i=0; i<10; i++){
        int x = 10-i-1;
        int ind = -1, mn ;
        for(int j=0; j<10; j++){
            if(a[j]>=x){
                mn = a[j];
                ind = j;
                break;
            }
        }

        for(int j=0; j<10; j++){
            if(a[j]<mn && a[j] >=x){
                ind = j;
                mn = a[j];
            }
        }
        ans[i] = mn;
        a[ind] = -1;
    }
    for(int i=0; i<10; i++)cout << ans[i];
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}