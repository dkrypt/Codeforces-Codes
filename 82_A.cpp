#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int n;
    string name[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    int r=1;
    while(r*5<n){
        n-=r*5;
        r*=2;
    }
    cout<<name[(n-1)/r]<<endl;
    return 0;
}

    
