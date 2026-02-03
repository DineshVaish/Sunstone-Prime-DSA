#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    {
        cout<<"number is't prime";
    }
    else
    {
        cout<<"number is prime";
    }
}