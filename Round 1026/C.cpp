#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    int n;
    cin>>n;
    ll d[n+1], l[n+1], r[n+1];
    for(ll i=1; i<=n; i++)cin>>d[i];
    for(ll i=1; i<=n; i++){
        cin>>l[i]>>r[i];
    }

    ll s=0;
    stack<ll> st;
    for(ll i=1; i<=n; i++){
        if(d[i]>=0){
            s+=d[i];
        }
        else{
            st.push(i);
            d[i] = 0;
        }

            while(s<l[i] && !st.empty()){
                ll t = st.top();
                d[t] = 1;
                s++;
                st.pop();
            }

            if(s<l[i]){
                cout << -1 << endl;
                return;
            }
    }
    s=0;
    for(ll i=1; i<=n; i++){
        s += d[i];
        if(r[i]<s){
            cout << -1 << endl;
            return;
        }
    }
    for(ll i=1; i<=n; i++)cout << d[i] << " ";
    cout << "\n";


}

int main()
{
    int t;cin>>t;while(t--)solve();
}