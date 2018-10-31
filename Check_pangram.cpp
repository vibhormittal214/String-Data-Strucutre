//A pangram is a string which contains all alplhabets in a string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_pangram(string str1){
   vector<int> marks(26,false);
   int i,index;
   for(i=0;i<str1.length();i++){
    if('A'<=str1[i] && str1[i]<='Z'){
        index=str1[i]-'A';
    }
    else if('a'<=str1[i] && str1[i]<='b'){
        index=str1[i]-'a';
    }
    marks[index]=1;
   }
   for(i=0;i<26;i++)
   if(str1[i]==0)
   return false;
   return true;
}
int main(){
    string str1;
    cin>>str1;
    if(is_pangram(str1)){
        cout<<"STRING ENYTERED IS A PANGRAM";
    }
    else
    {

        cout<<"String not a pangram";
    }
    return 0;
}
