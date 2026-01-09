#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

ll query(ll a, ll b)
{
    if(a==b)return 0LL;
    else{
        ll k;
        cin>>k;
        return k;
    }
}
void solve()
{
    ll n;
    cin>>n;
    string s="";
    cout<< "? 1 "<< n << endl;
    ll res;
    cin>>res;
    if(res==0){
        cout << "! IMPOSSIBLE" << endl;
    }
    else{
        for(ll i=2; i<=n; i++){
            ll curr;
            cout << "? " << i << " " << n << endl;
            curr = query(i, n);
            if(res==curr){
                s+='1';
            }
            else{
                s+='0';
                if(curr==0){
                    break;
                }
            }
            res = curr;
        }
        while(res--)s+='1';
        while(s.size()<n)s+='0';
        cout << "! " << s << endl;
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}