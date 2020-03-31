#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,r;

    cin>>n>>k;

    for(int i=0;i<k;i++)
    {
        if(n%10==0){
            r = n/10;
        }
        else{
            r = n-1;
        }
        n = r;
    }
    cout<<r<<endl;
    return 0;


}
