#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll s=0;
    ll a[n][n];

    if(n%2==0){
        ll i=n/2-1;
        for(ll k=0; k<=i; k++){
            if(k==0){
                a[i][i] = s++;
                a[i][i+1] = s++;
                a[i+1][i] = s++;
                a[i+1][i+1] = s++;
            }
            else if(k==1){
                a[i][i+2]=s++;
                a[i+1][i+2]=s++;
                a[i+2][i] = s++;
                a[i+2][i+1] =s++;
                a[i+2][i+2] = s++;
                a[i-1][i] = s++;
                a[i-1][i+1] = s++;
                a[i-1][i+2] = s++;
                a[i][i-1]=s++;
                a[i+1][i-1]=s++;
                a[i+2][i-1]=s++;
                a[i-1][i-1]=s++;
            }
            else{
                for(ll x=i-k+1; x<=i+k; x++){
                    a[x][i+k+1] = s++;
                }

                for(ll x=i-k+1; x<=i+k+1; x++){
                    a[i+k+1][x] = s++;
                }

                for(ll x=i-k+1; x<=i+k+1; x++){
                    a[i-k][x] = s++;
                }

                for(ll x=i-k+1; x<=i+k+1; x++){
                    a[x][i-k] = s++;
                }
                a[i-k][i-k] =  s++;
            }
        }


    }
    else{
        ll i=n/2, j=n/2, t = n/2;
        for(ll k=0; k<=t; k++){
            for(ll x = i-k+1; x<i+k; x++){
                a[x][i+k] = s++;
            }

            for(ll x=i-k+1; x<i+k; x++){
                a[i+k][x] = s++;
            }

            a[i+k][i+k] = s++;

            for(ll x=i-k+1; x<=i+k; x++){
                a[i-k][x] = s++;
            }
            

            for(ll x=i-k+1; x<=i+k; x++){
                a[x][i-k] = s++;
            }
            a[i-k][i-k] = s++;
        }

    }


    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(n%2==1)
                cout << a[i][j]-1 << " ";
            else
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}