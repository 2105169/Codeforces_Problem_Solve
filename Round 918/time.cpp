#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int>mp;
		vector<int>v;
 
		for(int i=1; i<=n; i++){
			int a, b;
			cin >> a >> b;
			v.push_back(b);
			mp[a]=b;
		}
		sort(v.begin(), v.end());
		long long ans=0;
		for(auto& it : mp){
            //cout << it.second << " ";
			auto pos=lower_bound(v.begin(), v.end(),it.second);
            
			ans+=pos-v.begin();
			v.erase(pos);
            
			
		}
		//cout<<ans<<endl;
	}
}