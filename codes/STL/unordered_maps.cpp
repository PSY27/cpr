#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string>&m){
    cout<<m.size()<<endl;
  for (auto &pr:m)
  {
    /* code */
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  
}

int main(){
//1.inbulit implementation of unordered_map
//Unlike Maps that are made out of trees aka R trees , unordered_map is made out of hash tables

//2.Time Complexity 
//Inserting takes O(1) time , deleting takes O(1) time , searching takes O(1) time , 
//traversing takes O(n) time unlike O(log n) time for maps
//3. Valid keys datatype
//Unordered_map key has to be hashable so only simple datatypes can be used as keys like int float strings not pairs or vectors
  unordered_map<int,string>m;
  m.insert({5,{"cdc"}});
  m[3]="acd";
  m[4]="afg";

 

    auto it = m.find(3);
    if(it== m.end()){
        cout<<"NO Value";

    }
    else{
        cout<<(*it).first<<" "<< (*it).second<<endl;
    }


//erase values
if(it!=m.end()) // to make sure it does not ahve end value 
    m.erase(it);
//erases 3 and "acd"
//m.clear() clears all the values
  print(m);
    return 0;
}