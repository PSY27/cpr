
//A set is a collection of elements that are unique.
//Normal sets
#include <bits/stdc++.h>
using namespace std;


void print(unordered_set<string>&s){
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
unordered_set<string> s;
//ordered or normal set wil be stored randomly in a set
//uses haashtables like unordered_map 
// so cant use complex data types like vector or pairso cant do unordered_set<set<int>>
//because it doesnt have hashing funtion in stl
s.insert("abc");//o(1) to insert an element in a set
s.insert("zsdf");
s.insert("bcd");
//to access an element in a set use find()
auto it = s.find("abc");//it is a iterator o(1) to find an element in a set
if(it != s.end()){
    cout<<*it<<endl;}

    print(s);// as you can see it gets printed in sorted order rather the way it was inserted
// you can also delete an element from a set using erase()

    s.erase("abc");//o(1) to delete an element from a set
    // you can even erease using iterator
   auto ip = s.find("bcd");
   if(ip!=s.end()){
       s.erase(ip);}
    cout<<endl;
    print(s);
    return 0;
}

