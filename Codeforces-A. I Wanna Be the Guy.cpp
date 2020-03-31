#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    set<int > l;
    cin>>n;
    int p,a;
    for(int i=0;i<n;i++){
        cin>>p;
        l.insert(p);
    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>a;
        l.insert(a);
    }
    if(l.size() == n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
