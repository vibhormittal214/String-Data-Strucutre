#include<iostream>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    int count[256]={0},i;
    for(i=0;i<str1.length();i++){
        count[str1[i]]++;
    }
    int first=0,second=0;
    for(i=0;i<256;i++){
       if(count[i]>count[first]){
           second=first;
           first=i;
       }
       else if(count[i]>count[second] && count[i]!=count[first]){
           second=i;
       }
    }
    if((char)second!='\0')
    cout<<(char)second;
    else
        cout<<"no second most frequent character";

}
