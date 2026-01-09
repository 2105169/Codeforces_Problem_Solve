#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

ll row[5] = {0, 0, 1, 1, 0};
ll col[5] = {0, 0, 1, 0, 1};

void solve()
{
    ll n, q;
    cin>>n>>q;
    for(ll i=0; i<q; i++){
        string s;
        int x, y, m;
        cin>>s;
        if(s == "<-"){
            cin>>m;
            int r=1, c=1, be = 1, en = pow(2, 2*n);
            while(true){
                int mid = (en - be + 1)/4, fl=0;
                ll mid1 = sqrt(mid);
                for(ll j = 1; j<=4; j++){
                    if(m<=mid*j){
                        if(en - be ==3){
                            r += row[j];
                            c += col[j];
                            fl = 1;
                            cout << r << " " << c << endl;
                            break;
                        }
                        else{
                        r += (row[j]*mid1);
                        c += (col[j]*mid1);
                        be = 1;
                        en = mid;
                        m -= ((j-1)*mid);
                        break;
                    }
                    }
                    
                }

                if(fl==1){
                    
                    break;
                }
            }
        }
        else{
            cin>>x>>y;
            ll ans = 1, be = 1, en = pow(2, 2*n);
            map<pair<ll,ll>,ll>mp;
            mp[make_pair(0,0)] =0;
            mp[make_pair(1, 1)] = 1;
            mp[make_pair(1, 0)] = 2;
            mp[make_pair(0, 1)] = 3;

            while(true){
                ll mid = (en - be + 1)/4, fl = 0;
                ll dim = sqrt(mid);
                ll g, h;
                if(x>dim){
                    x = x-dim;
                    g = 1;
                }
                else g = 0;

                if(y>dim) {
                    y = y - dim;
                    h = 1;
                }
                else h = 0;

                ll t = mp[make_pair(g, h)];
                ans += (t*mid);
                if(en-be==3){
                    cout << ans << endl;
                    break;
                }
                be = 1, en = mid;

            } 
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}