/*
Given N Strings and Q Queries .
In each query you are given a string
print yes if the string is present in the set else print no
N<=10^6
Q<=10^6
|S|<=100
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n;
    unordered_set<string>s;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        string str;
        cin>>str;
        if(s.find(str) != s.end()){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}