
//A set is a collection of elements that are unique.
//Normal sets
#include <bits/stdc++.h>
using namespace std;


void print(set<string>&s){
    for(string val:s){
        cout<<val<<" ";
    }
    // for (auto it = s.begin(); it!=s.end(); it++)
    // {
    //     /* code */
    //     cout<<*it<<" ";
    // }
    //these sre two ways to print the set
    
}

int main(){
set<string> s;//can also make a set<set<string>> s;
//ordered or normal set wil be stored in a sorted order
s.insert("abc");//log(n) to insert an element in a set
s.insert("zsdf");
s.insert("bcd");
//to access an element in a set use find()
auto it = s.find("abc");//it is a iterator log(n) to find an element in a set
if(it != s.end()){
    cout<<*it<<endl;}

    print(s);// as you can see it gets printed in sorted order rather the way it was inserted
// you can also delete an element from a set using erase()

    s.erase("abc");//log(n) to delete an element from a set
    // you can even erease using iterator
   auto ip = s.find("bcd");
   if(ip!=s.end()){
       s.erase(ip);}
    cout<<endl;
    print(s);
    return 0;
}

