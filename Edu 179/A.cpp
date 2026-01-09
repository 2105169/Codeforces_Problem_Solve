#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll x;
    cin>>x;
    ll a = 0, b = 0, c = 0, t = 0;
    while(true){
        if(a==x && b==x && c == x){
            break;
        }

        if(a==x){
            a = x;
        }
        else if(b*2+1>=x){
            a = x;
            t++;
        }
        else {
            t++;
            a = b*2+1;
        }

        if(b==x){
            b = x;
        }
        else if(c*2+1>=x){
            b = x;
            t++;
        }
        else{
            b = c*2+1;
            t++;
        }
       

        if(c==x){
            c = x;
        }
        else if(a*2+1>=x){
            c = x;
            t++;
        }
        else{
            c = a*2+1;
            t++;
        }

        //cout << a << " " << b << " " << c <<  endl;
    }
    cout << t << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}