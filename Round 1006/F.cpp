#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //cout << t << endl;
    while(t--){
        int n, k;
        cin>>n>>k;
        n--;


        for(int i=0;i<=n;i++){
                int t = ~n&i;
                int x = ~n;
                x = x&i;

        if(x)cout << 0 << " ";
        else cout << k << " ";

        }
        cout << endl;
    }
}

