#include <bits/stdc++.h>
using namespace std;

void printVec(vector <int> v)// will use &v if we dont want to make a copy of the vector as its expensive o(n) so we pass by refernce to affectits changes
{
    cout<<"size"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
                    //v.size()->o(1)
    {
        /* code */
        cout<<v[i]<<" ";

    }
    cout<<endl;

}
//
int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        /* code */
        int n;
        cin>>n;
        for(int j = 0 ; j<n ;j++){
            int  x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < N; i++)
        {
            /* code */
            printVec(v[i]);
        }
    
    return 0;
}