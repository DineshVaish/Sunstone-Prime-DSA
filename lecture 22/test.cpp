#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=2;k<=j;k++)
            {
                for(int l=0;l<=k;l++)
                {
                    cout<<"*"<<"   ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}