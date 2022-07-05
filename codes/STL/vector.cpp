#include <bits/stdc++.h>
using namespace std;

void printVec(vector <int>v)// will use &v if we dont want to make a copy of the vector as its expensive o(n) so we pass by refernce to affectits changes
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

int main(){
    double a[10];
    //vector<int> v;// same as an array
    vector<int> v(5);// same as an array can be restricted this will crete a array with 5 values initailisd as 0
    // if you dont want to prefill vector with 0 you can use vector<int> v(10 ,3) this will make an array of 10 3's
    int  count =5;
    for (int i = 0; i < count; i++)
    {
        /* code */
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);//o(1) complexity adds element at the last of the array FIFO

    }

    vector<int> p;
    p.push_back(7);
    p.push_back(6);
    printVec(p);
    p.pop_back();// pushes the last element out of the array aslo o(1) complexity
    printVec(p);
 vector<int> v2 = p; //can copy directly from another vector which we cant do in array
 //

 vector<string> v3;// vector can be made for strings also

    for (int i = 0; i < count; i++)
    {
        /* code */
        string x;
        cin>>x;
        v3.push_back(x);//o(1) complexity adds element at the last of the array FIFO
        cout<<v3[i]<<" ";
    }
    return 0;
}