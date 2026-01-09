#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

int a, b, c;

int func(int x){
    int t=0;
    if(x==1){
        int a = 0;
        t = 1;
    }
    return t;
}

void solve()
{
   int x = 2;
   func(x);
   return;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}