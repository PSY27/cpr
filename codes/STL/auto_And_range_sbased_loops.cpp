#include <bits/stdc++.h>
using namespace std;


//iterator are pointer like strucutre 
//.begun() iterator points to the inital value of the structure
//.end() iterator points to the next to the last value of the structure
// v.begin() and v.end()


//shortcut to declare iterators
//range based loops and auto
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
// shortcut for for loop
    for(int &value:v){
        // as the copy of the values of the vector comes we use &
        value++;
        cout<<value<<" ";

    }
cout<<endl;
    for(int value:v){
        
        cout<<value<<" ";

    }
    cout<<endl;

    //we can use this to print pairs also
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    
    for(pair<int,int> &value: v_p){
        
        cout<<value.first<<" "<<value.second<<endl;

    }

    //using auto instead of vector<int> :: iterator it;
    for (auto i = v.begin(); i!=v.end(); i++)
    {
        /* code */
        cout<<*(i)<<" ";
    }
    //for(pair<int,int> &value: v_p){ instead of this we can use for(auto it &value: v-p)

    return 0;
}