#include <bits/stdc++.h>
using namespace std;


//iterator are pointer like strucutre 
//.begun() iterator points to the inital value of the structure
//.end() iterator points to the next to the last value of the structure
// v.begin() and v.end()
int main(){
   vector<int> v ={2,3,4,5,6,7};
        cout<<"size"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
                    //v.size()->o(1)
    {
        /* code */
        cout<<v[i]<<" ";

    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    for ( it = v.begin(); it !=v.end(); it++)
    {
        /* code */
        cout<<*(it)<<endl;
    }
  //differnce betwween it+1 and it ++ is important
  //it++ movoes to next iterator 
  //it+1 mones to next location 
  // so it +1 wont work on mapa and sets as they hace different loctions andf not continoues locTION 
    cout<<(*(it+1))<<endl;
    //
vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> ::iterator itt;
    for ( itt = v_p.begin(); itt != v_p.end(); itt++)
    {
        /* code */
        cout<<(*itt).first<<" "<<(*itt).second<<endl;
      //alternate method for accessing the pair  cout<<(itt->first)<<" "<<(itt->second)<<endl;
        
    }
    
    return 0;
}