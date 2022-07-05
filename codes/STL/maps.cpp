#include <bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){
    cout<<m.size()<<endl;
  for (auto &pr:m)
  {
    /* code */
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  
}

int main(){
   /* data loaded into the maps
   int(key)  string(value)
        1       abc
        5       cdc
        3       acd
   */
  map<int ,string>m;
  m[1]="abc";// time complexity O(log(n)) value of inserting and accessing is log(n) and it depends on whether the key is a string or int
  // as comparing string with other strings ina sorted map takes time
  //or
  m.insert({5,{"cdc"}});
  m[3]="acd";
  m[4]="afg";

  //if values is not provided for the key for string it wall be initalized empty string and for integer it will be initalized 0
//maps are sorted and keys cannot be repeated so existing value of the key will be replaced

    auto it = m.find(3);//returns iterator of the key 3 time complexity of finding is also log(n)
    if(it== m.end()){
        cout<<"NO Value";

    }
    else{
        cout<<(*it).first<<" "<< (*it).second;
    }


//erase values
if(it!=m.end()) // to make sure it does not ahve end value 
    m.erase(it);
//erases 3 and "acd"
//m.clear() clears all the values
  print(m);
    return 0;
}