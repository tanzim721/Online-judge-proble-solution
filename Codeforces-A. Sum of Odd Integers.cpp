#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    cin>>t;
    for(int i=1;i<=t;i++){
            cin>>n>>k;
        if(n >= k*k && (n & 1)==(k & 1)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }

    return 0;
}
