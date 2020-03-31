#include<bits/stdc++.h>
using namespace std;
int main()
{

    int rem,cnt=0;
    long long int n;
    cin>>n;

    while(n!=0){
        rem = n%10;
        n = n/10;

        if(rem==4 || rem==7){
            cnt++;
        }

    }
        if(cnt==4 || cnt==7){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;

}
