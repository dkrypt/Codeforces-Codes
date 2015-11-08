#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,in,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in;
        sum=sum+in;
    }
    if(sum%4==0)
    cout<<sum/4;
    else
        cout<<(sum/4) + 1;
return 0;
}

