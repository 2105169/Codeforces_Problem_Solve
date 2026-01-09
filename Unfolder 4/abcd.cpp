#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin>>n;
    int sum=1;
    for(int i=1; i<=n; i++){
        sum = sum *i;
    }
    cout << sum << endl;
}
