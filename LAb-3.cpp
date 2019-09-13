#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[10][10],b[10][10];

    int i,k,j,n,m,l;
    int cnt1=0,cnt2=0;

    cout<<"Enter the size R1 and R2:";

    cin>>n;
    cout<<"Enter the first matrix:"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"R1 = {";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                cout<<"("<<i<<","<<j<<"),";
                cnt1++;
            }
        }
    }
    cout<<"\b}"<<endl;

    cout<<"Count R1:"<<cnt1<<endl;


    cout<<"Enter the second matrix : "<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }


     cout<<"R2 = {";
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(b[i][j]==1)
             {
                 cout<<"("<<i<<","<<j<<"),";
                 cnt2++;
             }
         }
     }
     cout<<"\b}"<<endl;
     cout<<"Count R2:"<<cnt2<<endl;


     cout<<"Relation R1 union R2 ={";
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(a[i][j]==1 || b[i][j]==1)
             {
                 cout<<"("<<i<<","<<j<<"),";
             }
         }
     }
     cout<<"\b}"<<endl;


     cout<<"Relation R1 intersection R2 = {";
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(a[i][j]==1 && b[i][j]==1)
             {
                 cout<<"("<<i<<","<<j<<"),";
             }
         }
     }
     cout<<"\b}"<<endl;


     cout<<"First and second matrix union : "<<endl;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(a[i][j]==0 && b[i][j]==0)
             {
                 cout<<"\t0";
             }
             else
             {
                 cout<<"\t1";
             }
         }
         cout<<endl;
     }
     cout<<endl;


     cout<<"First and second matrix intersection :"<<endl;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(a[i][j]==1 && b[i][j]==1)
             {
                 cout<<"\t1";
             }
             else
             {
                 cout<<"\t0";
             }
         }
         cout<<endl;
     }
     cout<<endl;

   return 0;
}
