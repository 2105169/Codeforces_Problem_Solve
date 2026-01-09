#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int l=0, r=0;
    a[0]='(';
    for(int i=n-2; i>0; i-=2)
    {
        if(r==0)
        {
            if(a[i+1]==')')r=2;
            else r=1;
        }

        if(r==2 && a[i-1]=='(')
        {
            a[i] = ')';
        }
        else if(r==2 && a[i-1]==')'){
            a[i] = '(';
            r=0;
        }
    }

    int op=0, cl=0;
    for(int i=0; i<n; i++){
        if(a[i]=='(')op+=(i+1);
        else cl +=(i+1);
    }
    cout << cl-op << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
