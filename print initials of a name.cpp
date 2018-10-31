#include<iostream>
#include<string>
using namespace std;
#include<bits/stdc++.h>
int main(){
   string name="vibhor mittal";
   int i;
cout<<name.length();

    cout << (char)toupper(name[0]);


    for (int i = 1; i < name.length() - 1; i++){
            cout<<1;
        if (name[i]==' ')
        {
        cout<<2;
            cout << " " << (char)toupper(name[i + 1]);}}
   return 0;
}
