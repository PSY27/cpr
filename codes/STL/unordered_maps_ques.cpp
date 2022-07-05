/*
Given N Strings and Q Queries .
In each query you are given a string
print the frequency of the string
N<=10^6
Q<=10^6
|S|<=100
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n;
    unordered_map<string,int>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    return 0;
}