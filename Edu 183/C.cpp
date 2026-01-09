#include<bits/stdc++.h>
using namespace std;
int t,n,m,i,q[200005];

string s;
map<int,int>f;

int main(){
    //cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n>>s;
		s=" "+s;
        

		for(i=1;i<=n;i++) q[i]=q[i-1]+(s[i]=='a')-(s[i]=='b');
       
		f.clear();
		f[0]=0;
		m=INT_MAX;

		for(i=1;i<=n;i++){
			f[q[i]]=i;
            int g = q[i] - q[n];
         
			if(f.count(q[i]-q[n])){m=min(m,i-f[q[i]-q[n]]);
               
            }
           

            
		}
        
		if(m==n)m=-1;
		cout<<m<<'\n';
	}
}