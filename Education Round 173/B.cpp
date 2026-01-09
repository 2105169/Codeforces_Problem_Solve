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

void solve()
{
    ll n, d;
    cin>>n>>d;
    cout << 1 << " ";

    if(n==2){
        if(d==3 || d==6 || d==9)cout << 3 << " ";
    }
    else{
        cout << 3 << " ";
    }

    if(d==5)cout << 5 << " ";

    if(n==2){
        if(d==7)cout << 7 << " ";
    }
    else{
        cout << 7 << " ";
    }

    if(n==2){
        if(d==9)cout << 9 ;
    }
    else if(n==3){
        if(d==3 || d==6 ||d == 9)cout << 9;
    }
    else if(n==4){
        if(d==3 || d== 6 || d== 9)cout << 9;
    }
    else if(n==5){
        if(d==3 || d== 6 || d== 9)cout << 9;
    }
    else{
        cout << 9;
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}