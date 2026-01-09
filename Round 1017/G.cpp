#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


void solve()
{
    ll ans1=0, ans2=0, sum=0, fl = 1;
    ll q;
    cin>>q;
    deque<ll> vt1, vt2;

    for(ll i=0; i<q; i++){
        ll s;
        cin>>s;
        if(s==3){
            ll x;
            cin>>x;

            if(fl==1){
                vt1.push_back(x);
                ans1 += (x*(vt1.size()));

                vt2.push_front(x);
                ans2 += sum;
                ans2 += x;
            }
            else{
                vt2.push_back(x);
                ans2 += (x*(vt2.size()));

                vt1.push_front(x);
                ans1 += sum;
                ans1 += x;
            }
            sum += x;

            if(fl==1){
                cout << ans1 << endl;
            }
            else{
                cout << ans2 << endl;
            }
        }
        else if(s==2){
            if(fl==1){
                cout << ans2 << endl;
                fl=2;
            }
            else{
                cout << ans1 << endl;
                fl = 1;
            }
        }
        else{
            if(fl==1){
                ll t1 = vt1.back();
                ll sm1 = sum - t1;
                ans1 += sm1;
                ans1 -= (t1*(vt1.size()-1));
                vt1.push_front(vt1.back());
                vt1.pop_back();

                ll t2 = vt2.front();
                ll sm2 = sum - t2;
                ans2 -= sm2;
                ans2 += (t2*(vt2.size()-1));
                vt2.push_back(vt2.front());
                vt2.pop_front();

            }
            else{
                ll sm1 = sum - vt1.front();
                ans1 -= sm1;
                ans1 += (vt1.front() * (vt1.size()-1));
                vt1.push_back(vt1.front());
                vt1.pop_front();

                ll sm2 = sum - vt2.back();
                ans2 += sm2;
                ans2 -= (vt2.back() * (vt2.size()-1));
                vt2.push_front(vt2.back());
                vt2.pop_back();
            }

            if(fl==1)cout << ans1 << endl;
            else cout << ans2 << endl;



        }


    }
}



int main()
{
    int t;cin>>t;while(t--)solve();
}
