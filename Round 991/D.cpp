#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int a[n];
    for(int i=0; i<n; i++)a[i] = s[i]-48;

    for(int i=0; i<n; i++){
        int b = a[i], ind = i;
        for(int j=i+1; j<min(i+9, n); j++){
            int c = a[j] - j+i;
            if(c>b){
                b = c;
                ind = j;
            }
        }
        for(int j=ind; j>i; j--){
            a[j] = a[j-1];
        }
        a[i] = b;
    }
    for(int i=0; i<n; i++)cout << a[i];
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}