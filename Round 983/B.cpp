#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    if(n==1){
        cout << 1 <<endl;
        cout << 1 <<endl;
    }
    else{
        if(k==1 || k>=n){
            cout << -1 << endl;
        }
        else{
            cout << 3 << endl;
            if(k%2==0){
                cout << 1 << " " << k << " " << k+1 << endl;
            }
            else{
                cout << 1 << " " << k-1 << " " << k+2<<endl;
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}