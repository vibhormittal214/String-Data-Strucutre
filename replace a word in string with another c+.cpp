#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   string str;
   getline(cin,str);
   string new_word,old_word;
   getline(cin,old_word);
   getline(cin,new_word);
   while(str.find(old_word)!=string::npos){
      str.replace(str.find(old_word),old_word.length(),new_word);
   }
   cout<<str;
   return 0;
}
