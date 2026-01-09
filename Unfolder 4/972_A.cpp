#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    char a[n];
    char b[5];
    b[0] = 'a';
    b[1] = 'e';
    b[2] = 'i';
    b[3] = 'o';
    b[4] = 'u';
    ll k=n/5;
    ll t = n%5;
    for(ll i=0; i<5; i++){
        ll r;
        if(t>0)r=1;
        else r=0;
        for(ll j=0; j<k+r; j++){
            cout << b[i];
        }
        t--;
    }
cout << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
