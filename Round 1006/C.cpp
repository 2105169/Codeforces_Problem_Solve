#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;
    int a[30];
    int m = x;
    for(int i=0; i<30; i++){
        if(m %2 == 1)a[i] = 1;
        else a[i] = 0;
        m /= 2;
    }

    int b[30]={0};
    vector<int> vt;
    vt.push_back(0);

    int size = 1;
    for(int i=1; i<n; i++){
        int c[30] = {0}, r = i, f = 0;
        for(int j=0; j<30; j++){
             c[j] = r % 2;
            r /= 2;
            if(c[j]==1 && a[j]==0){
                f++;
                break;
            }
        }
        if(f>0)break;
        else{
            for(int j=0; j<30; j++){
                if(c[j]==1)b[j] = 1;
            }
            vt.push_back(i);
            size++;
        }
    }

   

    int f = 0;
    for(int i=0; i<30; i++){
        if(a[i] != b[i])f++;
    }
    
    
    if(f>0) {
        cout << x << " ";
        n--;
    }

    int l=0;
    while(n>0 && vt.size()>l){
        cout << vt[l] << " ";
        l++;
        n--; 
    }
    while(n--)cout << 0 << " ";
    cout << endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}