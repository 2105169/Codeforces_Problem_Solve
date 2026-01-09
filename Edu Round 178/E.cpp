#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


int main()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a[n+1], pos[n+1];
    vector<vector<int>> vt(27);

    for(int i=1; i<=n; i++){
        a[i] = s[i-1] - 'a' + 1;
        vt[a[i]].push_back(i);
    }

    int one=0;
    map<int, int> chk;
    for(int i=1; i<=26; i++){
        if(vt[i].size() > 0){
            one++;
            chk[i]++;
        }
    }

    if(k>one){
        int q;
        cin>>q;
        for(int i=0; i<q; i++){
            string t;
            cin>>t;
            int fff=0;
            for(int i=0; i<t.size(); i++){
                int rrr = t[i] - 'a' + 1;
                if(chk[rrr]==0){
                    cout << 0 << endl;
                    fff=1;
                    break;
                }
            }
            if(fff==0)cout << 1 << endl;
        }
    }
    else{


    int x=0, y=1, rs[n+1]={0};
    map<int, int> mp;
    for(int i=n; i>=1; i--){
        if(x==k){
            y++;
            x=0;
            mp.clear();
        }
        rs[i] = y;
        if(mp[a[i]]==0){
            mp[a[i]]++;
            x++;
        }
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        string t;
        int l=0, fl=0;
        cin>>t;
        int mm[27] = {0};
        for(int i=0; i<t.size(); i++){
            int x = t[i] - 'a' + 1, flg=0;
            int rr = mm[x];
            for(int f=rr; f<vt[x].size(); f++){
                if(vt[x][f]>l){
                    l = vt[x][f];
                    mm[x] = f+1;
                    flg = 1;
                    break;
                }
            }
            if(flg == 0){
                cout << 0 << endl;
                fl=1;
                break;
            }
        }
        if(fl==0){
            cout << rs[l] << endl;
        }
    }
    }
    return 0;
}
