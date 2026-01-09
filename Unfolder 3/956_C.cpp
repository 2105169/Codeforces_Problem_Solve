#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll ceiling(ll a, ll b)
{
    ll t = a/b;
    if(t*b==a)return t;
    else return t+1;
}


void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1], c[n+1], as[n+1], bs[n+1], cs[n+1];
    as[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        as[i]=as[i-1]+a[i];
    }
    bs[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>b[i];
        bs[i]=bs[i-1]+b[i];
    }
    cs[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>c[i];
        cs[i]=cs[i-1]+c[i];
    }
    ll tot = as[n];
//cout << as[n] << " " << bs[n] << " " << cs[n] << endl;
    ll tar = ceiling(tot, 3);


    //for a array
    ll la = -1, ra=-1, lb=-1,rb=-1, lc=-1, rc=-1;
    for(ll i=1; i<=n; i++){
        if(as[i]>=tar){
            for(ll j=i+1; j<=n; j++){
                ll r = bs[j]-bs[i];
                if(r>=tar){
                    if(cs[n]-cs[j]>=tar){
                        la=1, ra=i, lb=i+1, rb=j, lc=j+1, rc=n;
                    }
                    break;
                }

            }
            if(la==-1){
            for(ll j=i+1; j<=n; j++){
                ll r=cs[j]-cs[i];
                if(r>=tar){
                    if(bs[n]-bs[j]>=tar){
                        la=1, ra=i, lc = i+1, rc=j, lb=j+1, rb=n;
                    }
                    break;
                }
            }
            }
            break;
        }
    }


    //for b
    if(la==-1){
        for(ll i=1; i<=n; i++){
            if(bs[i]>=tar){
                for(ll j=i+1; j<=n; j++){
                    ll r = as[j]-as[i];
                    if(r>=tar){
                        if(tot-cs[j]>=tar){
                            lb=1, rb=i, la=i+1, ra=j, lc = j+1, rc=n;
                        }
                        break;
                    }
                }
                if(la==-1){
                    for(ll j=i+1; j<=n; j++){
                        ll r = cs[j]-cs[i];
                        if(r>=tar){
                            if(tot-as[j]>=tar){
                                lb=1, rb=i, lc=i+1, rc=j, la=j+1, ra=n;
                            }
                            break;
                        }
                    }
                }
                break;
            }

        }
    }


    //for c

    if(la==-1){
        for(ll i=1; i<=n; i++){
            if(cs[i]>=tar){
                for(ll j=i+1; j<=n; j++){
                    ll r = as[j]-as[i];
                    if(r>=tar){
                        if(tot-bs[j]>=tar){
                            lc=1, rc=i, la=i+1, ra=j, lb=j+1, rb=n;
                        }
                        break;
                    }
                }
                if(la==-1){
                    for(ll j=i+1; j<=n; j++){
                        ll r=bs[j]-bs[i];
                        if(r>=tar){
                            if(tot-as[j]>=tar){
                                lc=1, rc=i, lb=i+1, rb=j, la=j+1, ra=n;
                            }
                            break;
                        }
                    }
                }
                break;
            }
        }
    }



    if(la==-1)cout << -1 << endl;
    else{
        cout << la << " " << ra << " " << lb<< " " << rb<< " " << lc << " " << rc << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
