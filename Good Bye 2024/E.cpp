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


int fast_power(int base, int p, int mode){
    int res = 1;
    while(p){
        if(p%2==1){
            res = (res * base) ;
            p--;
        }
        else{
            base = (base * base) ;
            p = p/2;
        }

    }

    return res ;
}

void solve()
{
    ll a[10] = {1,1,2,2,3,3,4,4,5,5};
    ll s = upper_bound(a, a+10, 5)-a-1;    
    ll r = lower_bound(a, a+10, 5)-a;
    cout << r << " " << s << endl;
}


int main()
{
    int t;
    t = 1;
    while(t--)solve();
}