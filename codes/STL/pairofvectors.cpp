#include <bits/stdc++.h>
using namespace std;

void printVec(vector <pair<int,int>> &v)// will use &v if we dont want to make a copy of the vector as its expensive o(n) so we pass by refernce to affectits changes
{
    cout<<"size"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
                    //v.size()->o(1)
    {
        /* code */
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }
    cout<<endl;

}
//
int main(){
    //vector<pair<int,int>> v = {{1,2},{2,3},{3,4}}; this is also a way you can initalise the nesting of vectors
    vector<pair<int,int>> v;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //v.push_back(make_pair(x,y)) you can also initalise like this
    }
    
    printVec(v);
    return 0;
}