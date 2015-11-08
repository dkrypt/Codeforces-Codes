#include<iostream>
#include<cstring>
#include<utility>
#include<ctype.h>
#include<algorithm>
#include<functional>
#define size 1000000

using namespace std;
int main()
{
    string word;
    cin>>word;
    transform(word.begin(),word.end(),word.begin(),::tolower);
    
    cout<<word;
        //if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')

        return 0;
    }
