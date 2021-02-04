#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int l=a.size();
   for(int i=0;i<l;i+=2)
   {
       for(int j=i+2;j<l;j+=2)
       {
           if(a[i]>a[j])
       {
          swap(a[i],a[j]);
       }
       }
   }
    cout<<a;
    
    return 0;
}
