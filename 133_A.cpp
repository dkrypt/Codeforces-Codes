#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char p[101];
    bool flag=false;
    cin>>p;
    for(int i=0;i<strlen(p);i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            flag=true;
            break;
        }
        else
            continue;
    }
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
