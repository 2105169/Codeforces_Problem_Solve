#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;
 
const int N=2e5+10;

int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1], s[n+1];

for(int i=1;i<=n;i++){
    cin>>a[i];
    s[i]=s[i-1]+a[i];
}
int l=1,r=n;
while(l<r){
int mid=(l+r)/2, x;
cout<<"? "<<mid-l+1<<" ";
for(int j=l;j<=mid;j++)cout<<j<<" ";
cout<<endl;
cin>>x;
if(s[mid]-s[l-1]==x)l=mid+1;
else r=mid;
}
cout<<"! "<<l<<endl;
}
return 0;
}