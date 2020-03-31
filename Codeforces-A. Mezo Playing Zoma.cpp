#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,left,right;
    left=-1;
    right=0;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i]=='L'){
            left--;
        }
        else{
            right++;
        }
    }
    cout<<right - left <<endl;

    return 0;

}
