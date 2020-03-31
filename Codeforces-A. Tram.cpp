#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum,max=0;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sum = a[0];
    for(int i=0;i<n;i++){
            sum = sum + (b[i]-a[i]);
            if(sum>max){
                max = sum;
            }
    }
    cout<<max<<endl;

    return 0;
}
