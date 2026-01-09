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
    ll a[n];
    set<ll>st;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    vector<ll> ans;
    ll k=0, f=0;

    for(ll i=0; i<40; i++){

        if(st.size()==1 && (*st.begin()==0)){
            break;
        }
        else if(st.size()==1 && (*st.begin()>0)){
            k++;
            ans.push_back((*st.begin()));
            break;
        }
        else{
            ll mn=(*st.begin()), mx=(*st.rbegin());
            if((mn+mx)%2==0){
                ll x=(mn+mx)/2;
                set<ll> newst;
                for(auto it=(st.begin()); it != (st.end()); it++){
                    newst.insert(abs((*it)-x));
                }
                k++;
                ans.push_back(x);
                st=newst;
            }
            else{
                f=1;
                break;
            }
        }
    }

    if(f==1)cout <<-1 << endl;
    else{
        cout << ans.size() << endl;
        for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
        cout << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
