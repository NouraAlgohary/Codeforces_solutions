#include <bits/stdc++.h>

using namespace std;

int main()
{
   string letters[3]={"one","two","three"},in;
   int n,nums[3]={1,2,3};
   cin>>n;
   while(n--)
   {
       cin>>in;
       for(int i=0;i<3;i++)
       {
           int c=0;
           for(int j=0;j<in.size();j++)
           {
               if(in[j]==letters[i][j])
                c++;
           }
           if(in.size()-c==1||in.size()-c==0)
           {
               cout<<nums[i]<<endl;
               break;
           }
       }

   }
    return 0;
}
