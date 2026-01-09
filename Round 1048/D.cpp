#include <bits/stdc++.h>
using namespace std;using ll=long long;




void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll>a(n+1),mx(n+2),l(n+2),r(n+2);
    for(int i=1;i<=n;i++)cin>>a[i];
    stack<int>st;
    for(int i=1;i<=n;i++){
        while(!st.empty()&&a[i]>=a[st.top()])
            st.pop();
        l[i]=st.empty()?0:st.top();
        st.push(i);
    }
    
    while(!st.empty())st.pop();
    for(int i=n;i;i--){
        while(!st.empty()&&a[i]<=a[st.top()])st.pop();
        r[i]=st.empty()?n+5:st.top();
        st.push(i);
    }
    
    for(int i=1;i<=n;i++)mx[r[i]]=max(mx[r[i]],l[i]);
    for(int i=1;i<=n;i++)mx[i]=max(mx[i],mx[i-1]);
    while(q--){
        int L,R;
        cin>>L>>R;
        cout<<(mx[R]>=L?"NO\n":"YES\n");
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
}
