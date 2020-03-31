#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n+5];
    string t[m+5];
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=m;i++){
        cin>>t[i];
    }
    int q,y;
    cin>>q;
    string ans;
    int first,second;
    while(q--){
        cin>>y;
        ans = "";
        first = (y % n);
        second  = (y % m);
        if(first == 0){
            ans += s[n];
        }
        else{
            ans += s[first];
        }
        if(second == 0){
            ans += t[m];
        }
        else{
            ans += t[second];
        }
        cout<<ans<<endl;
    }
    return 0;
}
