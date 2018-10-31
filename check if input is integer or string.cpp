#include<iostream>
using namespace std;
int main(){
    string str1;
    int i,d=0;
    cin>>str1;
    for(i=0;i<str1.length();i++){
        if(isdigit(str1[i])){
           d++;}
    }
    if(d==str1.length()){
        cout<<"integer";
    }
    else
        cout<<"string";
    return 0;
}
