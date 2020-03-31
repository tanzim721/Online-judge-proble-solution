#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str1,str;
    cin>>str>>str1;
    for(int i=0;i<str.length();i++){
        if(str[i]==str1[i]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
    return 0;
}
