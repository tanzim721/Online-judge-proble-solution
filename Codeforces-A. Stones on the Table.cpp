#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0;
    char ch[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ch[i]==ch[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;

}
