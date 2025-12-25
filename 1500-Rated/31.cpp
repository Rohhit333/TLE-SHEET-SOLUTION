#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define double long double
const int mod = 1e9 + 7;


signed main() { 
    
    // int t;
    // cin>>t;
    
    // while(t--){
        
        int n,q;
        cin>>n>>q;
        
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int>pre(n+2,0);

        
        while(q--){
            int a,b;
            cin>>a>>b;

            pre[a]++;
            pre[b+1]--;
        }

        for(int i=1;i<=n;i++){
            pre[i] += pre[i-1];
        }

        sort(v.begin(),v.end(),greater<int>());
        sort(pre.begin(),pre.end(),greater<int>());


        int ans = 0;

        for(int i=0;i<n;i++){
            // cout<<v[i]<<" a"<<pre[i]<<endl;
            ans += (v[i]*1ll*pre[i]);
        }

        cout<<ans<<endl;
 
     
     
     
    
      
      
    // }
}