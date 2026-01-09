#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll square(ll a)
{
    ll t = sqrt(a);
    if(t*t==a)return 1;
    else return 0;
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)a[i]=i;

    ll b[n];
    ll i=n-1;
    while(i>=0){
        for(ll j=i; j>=0; j--){
            if(square(i+j)==1){
                for(ll k=i, l=j; k>=j; k--, l++){
                    b[l] = k;
                }
                i = j-1;
                break;
            }
        }
    }

    for(ll j=0; j<n; j++)cout << b[j] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
