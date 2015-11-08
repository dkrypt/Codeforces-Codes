/*====TENSHI29=====*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n[4],count=0;
    for(int i=0;i<4;i++)
        cin>>n[i];
    for(int j=0;j<4;j++)
        for(int k=j+1;k<4;k++)
        if(n[j]==n[k])
            count++;
    cout<<count<<endl;
return 0;
}
