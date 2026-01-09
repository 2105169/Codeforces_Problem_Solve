#include <bits/stdc++.h>
using namespace std;
int n,q,T,a[200020],dp[200020][25];
int main() {
	cin>>T;
	while(T--) {
		cin>>n>>q;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1; i<n; i++) dp[i][0]=abs(a[i]-a[i+1]);
		for(int j=1; j<=20; j++) {
			for(int i=1; i+(1<<j)-1<=n-1; i++) {
				dp[i][j]=__gcd(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
			}
		}
		while(q--) {
			int l,r;
			cin>>l>>r;
		// 	if(l==r) {
		// 		cout<<"0 ";
		// 	} else {
		// 		int k=log2(r-l);
		// 		cout<<__gcd(dp[l][k],dp[r-(1<<k)][k])<<" ";
		}
		// }
		// cout<<'\n';
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
	}
}