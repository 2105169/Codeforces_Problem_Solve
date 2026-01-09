#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    int a[26]={0}, b[26]={0};

    for(int i=0; i<t.size()-1; i++){
        int x = t[i]-'a';
        a[x] = 1;
        b[x] = i;
    }

    int len = 10000000;
    vector<int> vt, l, r;
    for(int i=1; i<s.size(); i++){
        int x = s[i] - 'a';
        if(a[x]){
            int n = i + t.size() - b[x];
            vt.push_back(n);
            l.push_back(i);
            r.push_back(b[x]+1);
            len = min(len, n);
        }
    }

    if(vt.size()==0){
        cout << -1 << endl;
    }
    else{

    for(int i=0; i<vt.size(); i++){
        if(vt[i] == len){
            for(int j=0; j<=l[i]; j++)cout << s[j];
            
            for(int j=r[i]; j<t.size(); j++)cout << t[j];
            cout << endl;
            break;

        }
    }
    }



}