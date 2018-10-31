#include<iostream>
using namespace std;
int main(){
   string str1;
   cin>>str1;
   int i,len;
   for(i=0,len=str1.length();i<len;i++){
       if(ispunct(str1[i])){
        str1.erase(i--,1);
       }
       len=str1.length();
   }
   cout<<str1;
   return 0;
}
