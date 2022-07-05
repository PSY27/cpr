#include <bits/stdc++.h>
using namespace std;

int main(){
        pair<int,string> p;
        p = make_pair(2,"abc");
        p = {2,"abcd"};// alternate way of making a pair
        pair<int,string> &p1= p;// reference to the origonal p 
        //pair<int,string> p1= p;// MAKES A COPY to the origonal p 
        p1.first = 3;
        cout<<p.first<<" "<<p.second<<endl;

        int a[] = {1,2,3};
        int b[] = {2,3,4};
        pair<int,int>p_array[3];
        p_array[0] = {1,2};
        p_array[1] = {2,3};
        p_array[2] = {3,4};
        swap(p_array[0],p_array[2]);
        for (int i = 0; i <3 ; i++)
        {
            /* code */
            cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
        }
        // can also assign value to one part of the pair and retrive the value
        pair<int,string> z;
        cin>> z.first;
        cout<<z.first;
        

}