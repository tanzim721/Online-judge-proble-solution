#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,cnt;
    cin>>a>>b;

        cnt=0;
        while(a<=b)
        {

            a=a*3;
            b=b*2;
            cnt++;
        }

    cout<<cnt<<endl;
    return 0;
}
