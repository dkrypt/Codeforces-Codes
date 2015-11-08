/*=====TENSHI29=====*/
#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string ber,bir;
    cin>>ber>>bir;
    reverse(bir.begin(),bir.end());
    if(ber==bir)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
