
#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
int a, b, c;
cin>>a>>b>>c;
int ans=0;
if(a==b+c)ans++;
if(b==a+c)ans++;
if(c==a+b)ans++;
if(ans>0)cout << "YES\n";
else cout << "NO\n";
}

}
