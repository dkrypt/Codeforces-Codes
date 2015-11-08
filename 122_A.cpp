#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int ar[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,flag=0;
    cin>>n;
    for(int i=0;ar[i]<=n;i++){
        if(n%ar[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
