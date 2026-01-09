#include<bits/stdc++.h>
using namespace std;




int main()
{
    int N=6000000;
   

    vector<int> pr, p(N, 1);

    for(int i=2; i<N; i++){
        if(p[i]==1){
            pr.push_back(i);
            for(int j=i; j<N; j+=i){
                p[j] = 0;
            }
        }
    }

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        long long ans=0, sa=0, sp=0;
        for(int i=0; i<n; i++){
            sa += a[i];
            sp += pr[i];
            if(sa>=sp)ans = i+1;
        }
        cout << n-ans << endl;
    }
    return 0;
}