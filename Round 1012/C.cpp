
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
const ll N = 50010;
vector<pair<int, pair<int, int>>> vt, table;
map<pair<int, int>, int> mp;



ll cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>>b){
    if(a.first < b.first)return 1;
    else if(a.first>b.first)return 0;
    else{
        if(a.second.first<b.second.first)return 1;
        else if(a.second.first > b.second.first) return 0;
        else{
            if(a.second.second<=b.second.second)return 1;
            else return 0;
        }
    }
}


void solve(){
    mp.clear();
    int n;
    cin>>n;
    int t[n];
    int x = 0, y=0;
    for(int i=0; i<n; i++)cin>>t[i];
    for(int i=0; i<n; i++){
        if(t[i]==0){
            while(true){
                pair<int, int> f = table[x++].second;
                if(mp[f]==0){
                    mp[f]++;
                    cout << f.first<< " " << f.second << endl;
                    break;
                }

            }
        }
        else{
            while(true){
                pair<int, int> f = vt[y++].second;
                if(mp[f]==0){
                    mp[f]++;
                    cout << f.first << " " << f.second << endl;
                    break;
                }
            }
        }
    }
}

int main()
{
    ll cnt = 0, l=1, r=-2, val = 2;
    while(cnt<=N){
        l = 1, r = r + 3;
        ll rr = r;
        while(rr>=1){
            vt.push_back({val, {l, rr}});
            table.push_back({val, {l, rr}});
            vt.push_back({val+1, {l, rr+1}});
            vt.push_back({val+1, {l+1, rr}});
            vt.push_back({val + 4, {l+1, rr+1}});

            l += 3;
            rr -= 3;
            cnt++;
            if(cnt>N)break;
        }
        val += 3;

    }

    sort(vt.begin(), vt.end(), cmp);

    int t;
    cin>>t;
    while(t--)solve();
}
