#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int b;
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++)
    cin>>a[i];
    sort(a,a+b);
    
    cout<<"Case "<<i<<": "<<a[b/2]<<endl;
    }
}
