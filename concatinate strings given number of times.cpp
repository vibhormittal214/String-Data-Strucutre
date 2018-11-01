#include<iostream>
using namespace std;
int main(){
   string str,str1;
   getline(cin,str);
   cout<<str;
   str1=str;
   int i,j;
   cin>>j;
   for(i=1;i<j;i++)
    str+=str1;
   cout<<str;
   return 0;
}
