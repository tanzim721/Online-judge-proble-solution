#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0;
    int arr[12] = {4,7,44,77,47,74,444,777,447,744,477,774};
    cin>>n;
    for(int i=0;i<12;i++){
        if(n % arr[i]==0){
            cnt++;
            break;
        }
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
