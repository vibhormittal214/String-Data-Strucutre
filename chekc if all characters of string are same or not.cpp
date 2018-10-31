#include<iostream>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    int i;
    for(i=0;i<str1.length();i++){
        if(str1[i]!=str1[0]){
            cout<<"no";
            break;
        }
    }
    if(i==str1.length()){
        cout<<"yes";
    }
    return 0;
}
