#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
      if(strs.size() == 0) return " ";
      string prefix = strs[0];
      for(int i=1;i<strs.size();i++){
          string::size_type loc;
          do{
              loc = strs[i].find(prefix);
              prefix = prefix.substr(0, prefix.length()-1);
              cout<<loc<<"\n";
              cout<<string::npos<<"\n";
              cout<<prefix<<" "<<i;
              cout<<"\n";
          }while(loc != string::npos);
      }
      return prefix;
}
int main(){
  vector<string> vec;
  vec.push_back("flower");
  vec.push_back("flow");
  vec.push_back("flint");
  cout<<longestCommonPrefix(vec);
}
