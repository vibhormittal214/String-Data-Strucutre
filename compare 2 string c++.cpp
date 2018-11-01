#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   string str1,str2;
   getline(cin,str1);
   getline(cin,str2);
   int x=str1.compare(str2);
   if(x!=0){
    cout<<str1<<" not equal to "<<str2<<"\n";
   }
   if(x>0)
    cout<<str1<<" is greater than "<<str2<<"\n";
   else
    cout<<str2<<" is greater than "<<str1<<"\n";
   return 0;
}
