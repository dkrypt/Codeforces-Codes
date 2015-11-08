/*=====TENSHI29=====*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    string temp,mag;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mag;
        if(i==0)
            temp=mag;      
        if(temp!=mag)
            count++;
    }
    cout<<count<<endl;
return 0;
}

