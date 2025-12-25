#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define double long double
const int mod = 1e9 + 7;


signed main() { 
    
    // int t;
    // cin>>t;
    
    // while(t--){
        
        int n;
        cin>>n;
        
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            cin>>v[i].second;
        }

        sort(v.begin(),v.end());

        int l1 = 0;
        int l2 = 0;
        bool f = 1;
        
        for(auto it:v){
            int s = it.first;
            int e = it.second;

            if(l1 <= s){
                l1 = e+1;
            }
            else if(l2 <= s){
                l2 = e+1;
            }
            else{
                f = 0;
            }
        }

        cout<<(f ? "Yes" : "NO")<<endl;
     
     
    
      
      
    // }
}