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
    ll n;
    cin>>n;
    if(n==1)cout << -1 << endl;
    else if(n==2)cout << 66 << endl;
    else if(n==3)cout << -1 << endl;
    else{
        if(n%2==0){
            for(ll i=0; i<n-2; i++)cout << 3;
             cout << 66<<endl;
        }
        else{
            for(ll i=0; i<n-5; i++){
                cout << 3;
            }
            cout << 36366 << endl;
        }
       
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
