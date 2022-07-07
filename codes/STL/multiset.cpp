
//A set is a collection of elements that are unique.
//Normal sets
#include <bits/stdc++.h>
using namespace std;


void print(multiset<string>&s){
    for(string val:s){
        cout<<val<<" ";
    }

    
}

int main(){
multiset<string> s;
//used instead of priority_queue because it allows duplicates and sorted
s.insert("abc");//o(log)n) to insert an element in a set
s.insert("zsdf");
s.insert("bcd");
s.insert("abc");
print(s);// abc abc bcd zsdf output
   // s.erase("abc");
    //o(log)n to delete an element from a set
    //if you erase like this both abc will be deleted 
    // you can even erease using iterator
    //here the abc will be deleted first one not the second one
   auto ip = s.find("abc");
   if(ip!=s.end()){
       s.erase(ip);}
    cout<<endl;
    print(s);
    return 0;
}