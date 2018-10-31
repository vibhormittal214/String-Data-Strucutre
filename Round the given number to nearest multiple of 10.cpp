#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
  string str1;
  cin>>str1;
  int i;
  stringstream convert(str1);
  int n;
  convert>>n;
  //int k=b/10;
  //int m=b-(k*10);
  //int n=((k+1)*10)-b;
  if(n-((n/10)*10)>((((n/10)+1)*10)-n))
  cout<<((n/10)+1)*10;
  else
  cout<<((n/10)*10);
  return 0;

}
