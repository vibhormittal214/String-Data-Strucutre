#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> missing_chars(string str1){
   vector<int> marks(26,0);
   int i,index;
   for(i=0;i<str1.length();i++){
        if('A'<=str1[i] && str1[i]<='Z')
        index=str1[i]-'A';
        else if('a'<=str1[i] && str1[i]<='z')
            index=str1[i]-'a';
        marks[index]=1;
   }
   return marks;
}
int main(){
   string str1;
   cin>>str1;
   vector<int> ans;
   ans=missing_chars(str1);
   for(int i=0;i<26;i++){
     if(ans[i]==0)
        cout<<char('a'+i);
   }
   return 0;
}
