#include <iostream>
#include <string>
using namespace std;
/*
compare binary of n and str
*/

string convert(int a){
  string strnn, str;
  while(a>0){
    int b = a%2;
    strnn.push_back(b+'0');
    // cout<<strnn<<endl;
    a = a/2;
  }
  if(strnn.length()<8){
    int u = 8-strnn.length();
    for(int i = 0; i<u; i++){
      str.push_back('0');
    }
    str.append(strnn);
  }
  return strnn;
}

int main() {
  string str, strn;
  int n, n2, cnt;
  cin>>n>>n2;
  strn = convert(n);
  str = convert(n2);
  for(int i = 0; i<8; i++){
    if(str[i]!=strn[i]){
      cout<<cnt<<endl;
      cnt+=1;
      continue;
    }
    continue;
  }
  cout<<cnt;
}