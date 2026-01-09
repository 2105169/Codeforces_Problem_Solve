#include<bits/stdc++.h>
using namespace std;
const int N=2e5+2;
int T,n,l[N],r[N],dp[N];
#define ll long long

long long ans;
vector<ll> edge[N];
void dfs(int u,int fa){
	dp[u]=l[u];
	for(int v:edge[u]) {
        if(v!=fa){
            dfs(v,u);
            if(dp[v]>dp[u]){
                if(dp[v]>r[u]) dp[u]=r[u],ans+=dp[v]-r[u];
                else dp[u]=dp[v];
            }
        }
    }
}


int main(){
	
    ll t;
    cin>>t;
    while(t--){
		cin>>n;
        ans = 0;
		for(int i=1;i<=n;++i) edge[i].clear();
		for(int i=1;i<=n;++i) cin>>l[i]>>r[i];
		for(int i=1,u,v;i<n;++i){
			cin>>u>>v;
			edge[u].push_back(v),edge[v].push_back(u);
		}
		dfs(1,0);
		cout<<dp[1]+ans<<'\n';
    }
	return 0;
}