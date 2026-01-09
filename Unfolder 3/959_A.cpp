#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;

    int a[n][m], b[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }

    int t=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x=0;
            if(a[i][j]==b[i][j])
            {
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<m; l++)
                    {
                        if(i==k && j==l)
                        {
                            t++;
                        }
                        else
                        {
                            if(a[k][l] != b[i][j] && a[i][j] !=b[k][l])
                            {
                                swap(a[k][l], a[i][j]);
                                x=1;
                                break;
                            }
                        }
                    }
                    if(x==1)break;
                }
            }
        }
    }

    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==b[i][j])c++;

        }
    }
    if(c>0)cout << -1 << endl;
    else {
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
