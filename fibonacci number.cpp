#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, c, first =0,second =1,next ;
    cout<< "Enter the number of fibonacci series you want"<<endl;
    cin>>n;
    cout<< "First "<<n<< "terms of fibonacci series are:-"<<endl;

    for(c=0;c<n;c++)
    {

        if(c<=1)
            next = c;
        else
        {
            next = first + second;
            first = second ;
            second = next;

        }
        cout <<next << endl;

    }
    return 0;
}

