#include<bits/stdc++.h>
using namespace std;
int arr[10][10];
int main()
{

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                arr[i][j]=1;
            }
            else if(j==0)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    cout<<arr[n-1][n-1];
    return 0;

}
