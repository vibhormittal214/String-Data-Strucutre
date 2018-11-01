#include<iostream>
using namespace std;
int main(){
   string str1;
   getline(cin,str1);
   int i;
   for(i=0;i<str1.length();i++){
      if('0'<= str1[i] && str1[i]<='9')
      cout<<str1[i];
   }
   return 0;
}
