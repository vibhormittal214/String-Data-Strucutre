#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    int n=str1.length(),i;
    char arr[n+1];
    strcpy(arr,str1.c_str());
    for(i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}
