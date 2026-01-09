#include<bits/stdc++.h>
#include<algorithm>
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
    string s;
    cin>>s;
    if(n%2==1)cout << "NO\n";
    else if(n==2 && s[0] != s[1])
    {
        cout << "NO\n";
    }
    else
    {
        ll N=0, W=0, E=0, S=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='N')N++;
            else if(s[i]=='W')W++;
            else if(s[i]=='E')E++;
            else S++;
        }
        if((S%2 != N%2) || (E%2 != W%2))
        {
            cout << "NO\n";
        }
        else
        {
            char ans[n];
            ll NN=N%2, EE=E%2, WW=W%2, SS=S%2;
            if(N%2==1)N--;
            if(E%2==1)E--;
            if(W%2==1)W--;
            if(S%2==1)S--;

            ll k=0, t=0;
            while(N)
            {
                if(s[k]=='N')
                {
                    if(t==0)
                    {
                        t=1;
                        ans[k] = 'H';
                    }
                    else
                    {
                        t=0;
                        ans[k]='R';
                    }
                    N--;
                }
                k++;
            }

            t=0;
            k=0;
            while(S)
            {
                if(s[k]=='S')
                {
                    if(t==0)
                    {
                        t=1;
                        ans[k] = 'H';
                    }
                    else
                    {
                        t=0;
                        ans[k]='R';
                    }
                    S--;
                }
                k++;
            }

            t=0, k=0;
            while(E)
            {
                if(s[k]=='E')
                {
                    if(t==0)
                    {
                        t=1;
                        ans[k] = 'H';
                    }
                    else
                    {
                        t=0;
                        ans[k]='R';
                    }
                    E--;
                }
                k++;
            }

            t=0, k=0;
            while(W)
            {
                if(s[k]=='W')
                {
                    if(t==0)
                    {
                        t=1;
                        ans[k] = 'H';
                    }
                    else
                    {
                        t=0;
                        ans[k]='R';
                    }
                    W--;
                }
                k++;
            }

            if(NN){
                for(ll i=n-1; i>=0; i--){
                    if(s[i]=='N'){
                        ans[i] = 'H';
                        break;
                    }
                }
                for(ll i=n-1; i>=0; i--){
                if(s[i]=='S'){
                    ans[i] = 'H';
                    break;
                }
                }
            }

            if(EE){
                for(ll i=n-1; i>=0; i--){
                    if(s[i]=='E'){
                        ans[i] = 'R';
                        break;
                    }
                }
                for(ll i=n-1; i>=0; i--){
                    if(s[i]=='W'){
                        ans[i] = 'R';
                        break;
                    }
                }
            }

            for(ll i=0; i<n; i++)cout << ans[i];
            cout << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
