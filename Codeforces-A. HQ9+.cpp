#include<bits/stdc++.h>
using namespace std;
int main()
{

    string ch;
    cin>>ch;
    for(int i=0;i<ch.size();i++){
        if(ch[0]=='H' || ch[0]=='Q' || ch[0]=='9' || ch[0]=='+' ){
            cout<<"YES";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
    }

    return 0;
}
