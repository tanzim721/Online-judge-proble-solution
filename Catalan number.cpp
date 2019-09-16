#include<bits/stdc++.h>
using namespace std;
int binomialC(int n,int k)
{

    int ans=1;
    if(k > n-k)
        k = n-k;
    for(int i=1;i<=k;i++){
        ans = ans*(n-i);
        ans = ans/(i+1);
    }
    return ans;
}
void catalan(int n)
{

    long int result,b;
    b = binomialC(2*n,n);
    result = b/(n+1);
    cout<<"Binomial number"<<result;

}
