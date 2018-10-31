//copy string 2 to string 1
#include<iostream>
using namespace std;
void copy(char *str1,char *str2){
     char *str3;
     int i;
     for(i=0;str2[i]!='\0';i++){
         str1[i]=str2[i];
     }
     str2[i]='\0';
     //return str2;
}
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    char *str1,*str2;
    str1=new char[n1];
    str2=new char[n2];
    cin>>str1;
    cin>>str2;
    copy(str1,str2);
    cout<<str1;
    return 0;
}
