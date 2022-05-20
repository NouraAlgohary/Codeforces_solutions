#include <iostream>

using namespace std;

int main()
{
   char board[8][8];
   int counter1=0,counter2=0,res=0;
   for (int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    cin>>board[i][j];


   for(int i=0;i<8;i++)
   {
        //counting columns
       bool b=1;
       if(board[i][0]=='B')
       {

    for (int j=1;j<8;j++)
   {
       if(board[i][j]!='B')
       {
           b=0;
           break;
       }
   }
   if(b)
    counter1++;
   }

   //counting rows
     bool b2=1;
         if(board[0][i]=='B')
       {

    for (int j=1;j<8;j++)
   {
       if(board[j][i]!='B')
       {
           b2=0;
           break;
       }
   }
   if(b2)
    counter2++;
   }
   }

   if(counter1==8||counter2==8)
    res=8;
   else
    res=counter1+counter2;

   cout<<res<<endl;
    return 0;
}
