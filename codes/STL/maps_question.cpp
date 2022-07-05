#include <bits/stdc++.h>
using namespace std;
/* Given N strings print unique strings in lexiographical order with their frequncy\
N<= 10^5
|s|<=100 string size here we are using this inly becasuse the string  is small otherwise nlog(n)would be very big
input
8
abc
def
abc
ghj
jkl
ghj
ghj
abc */
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin>>s;
        m[s]++;

    }
    for(auto i:m){
        cout<<(i).first<<" "<<(i).second<<endl;
    }
    
    return 0;
}