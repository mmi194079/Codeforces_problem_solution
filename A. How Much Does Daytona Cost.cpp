#include<bits/stdc++.h>
using namespace std;

int main()
{
       long long int t,n,k,a;
       cin>>t;

      while(t!=0){
        cin>>n>>k;
        std::vector<int>v;
        int s=1;

        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }

        if(k==0 && n==0)cout<<"NO"<<endl;
        if(n==0 && k!=0)cout<<"NO"<<endl;
        auto q=std::find(v.begin(),v.end(),k);


        if(*q==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        t--;
      }

      return 0;
}
