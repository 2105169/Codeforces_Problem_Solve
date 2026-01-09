#include<cstdio>
#include<iostream>
using namespace std;

void solve()
{
    int l=2, r=999, ans=0;
    while(l<=r){
        int mid=(l+r+1)/2;
        cout << "? "<<  1 << " " << mid<<endl;
        int x;
        cin>>x;
        if(mid+1==x){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout << "! "<< ans << endl;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)solve();
}

