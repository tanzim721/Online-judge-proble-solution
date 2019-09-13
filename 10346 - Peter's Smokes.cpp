#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,rem,sum;

    while(1)
    {
        cin>>n>>k;
        sum = n;
        while(n>=k){
        rem = n/k;
        sum = sum + rem;
        n = rem + (n%k);
        }
        cout<<sum<<endl;
    }

    return 0;
}
