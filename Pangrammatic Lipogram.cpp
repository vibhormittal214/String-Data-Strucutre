#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string alphabet="abcdefghijklmnopqrstuvwxyz";
void is_pan_lopogram(string str1){
   int i,counter=0;
   for(i=0;i<str1.length();i++){
      str1[i]=tolower(str1[i]);
   }
   for(i=0;i<26;i++){
       int pos=str1.find(alphabet[i]);
       if(pos<0 || pos>str1.length())
        counter++;
   }
   if(counter==0)
    cout<<"string is a pangram";
   else if(counter>=2)
    cout<<"string is not a pangram but may be a lipogram";
   else
    cout<<"string is a panogramic lipogram";
}
int main(){
   string str1;
   cin>>str1;
   is_pan_lopogram(str1);
   return 0;

}
