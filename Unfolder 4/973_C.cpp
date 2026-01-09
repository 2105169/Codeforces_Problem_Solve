#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s="";
    while(s.size() != n){
        cout << "? " << s+'0' <<endl;
        int f;
        cin>>f;
        if(f){
            s = s + '0';
        }
        else{
            cout << "? " << s+'1' << endl;
            cin>>f;
            if(f){
                s = s + '1';
            }
            else{
                break;
            }
        }
    }
    while(s.size()!=n){
        cout << "? " << '0'+s << endl;
        int t;
        cin>>t;
        if(t){
            s = '0' + s;
        }
        else{
            s = '1' + s;
        }
    }
    cout << "! " << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
