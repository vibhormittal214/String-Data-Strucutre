//a duck number is a one whick=h contains zero but none of the zero is art begining
#include<iostream>
using namespace std;
int main(){
   string str1;
   cin>>str1;
   int count_zero=0;
   int i;
   for(i=0;i<str1.length();i++){
      if(str1[i]=='0')
      count_zero++;
   }
   if(count_zero>0 && str1[0]!='0')
   cout<<"it is a duck number";
   else
   cout<<"not a duck number";
   return 0;

}
