
//A set is a collection of elements that are unique.
//Normal sets
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
	cin >>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long> s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long t;
            cin>>t;
            s.insert(t);
        }long long candies=0;
        for (int j = 0; j < k; j++)
        {
            /* code */
            auto it = (--s.end());
            
            candies +=(*it);
            
            s.erase(it);
            s.insert((*it)/2);


        }
        
      cout<<candies<<endl;  
	}
    
    return 0;
}