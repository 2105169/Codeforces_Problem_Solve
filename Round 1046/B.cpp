#include<iostream>
using namespace std;
#define ll long long
const int N=105;
int tt,n;
ll x[N],y[N],d1,d2,d3,d4;
ll query(char s){
	ll ret;
	cout<<"? "<<s<<" 1000000000\n";
	cin>>ret;
	return ret;
}
void solve(){
	d3=d4=-2e9;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>x[i]>>y[i];
		if(x[i]+y[i]>d3)d3=x[i]+y[i];
		if(y[i]-x[i]>d4)d4=y[i]-x[i];
	}
	query('U');
	query('U');
	query('L');
	d1=query('L');
	
	query('R');
	query('R');
	query('R');
	d2=query('R');
	d1+=d4-4e9;
	d2+=d3-4e9;
	cout<<"! "<<(d2-d1)/2<<" "<<(d2+d1)/2<<endl;
}
int main(){
	cin>>tt;
	while(tt--)solve();
	return 0;
}