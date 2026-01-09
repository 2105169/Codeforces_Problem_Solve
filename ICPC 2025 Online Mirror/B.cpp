#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=500000;

ll i,j,k,n,m,t,ed;
ll mx=-1;
vector<tuple<ll,ll,ll> > v;
double res[N+50],sb,vx,vy;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cout << fixed << std::setprecision(20) ;
	cin>>n>>m>>ed>>vx>>vy;
	for(i=1;i<=n;i++){
		cin>>j>>k;
		v.push_back({j,-1,k});
	}
	for(i=1;i<=m;i++){
		cin>>k;
		v.push_back({k,i,-1});
	}
	sort(v.begin(),v.end());
	
	sb=1e18;
    ll l, id, r;
	for(i=0; i<v.size(); i++){
        l = v[i][0];
        id = v[i][1];
        r = v[i][2];
		if(id==-1){
			sb=min(sb,(ed-r)/vy+(r-l)/vx);
		}
		else{
			res[id]=min((ed-l)/vy,sb);
		}
	}
	
	for(i=1;i<=m;i++){
		cout<<res[i]<<'\n';
	}
}