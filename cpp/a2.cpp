#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int maxVowels(string s, int k) {
    queue<char> Queue;
    int global_max = 0;
    int current_max = 0;
    int j = 0;
    int x;
    for(int i = 0;i<k;i++){
        Queue.push(s[i]);
        if(s[i]=='a' || s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            current_max++;
        }
        x = i;
    }
    global_max = (global_max>current_max)?global_max:current_max;
    while(x<s.length()){
        cout<<current_max<<" ";
        if(Queue.front() == 'a' || Queue.front() == 'e' ||Queue.front() == 'i' || Queue.front() == 'o' || Queue.front() == 'u'){
            current_max--;
        }
        Queue.pop();
        if(s[x]=='a' || s[x] == 'e' ||s[x] == 'i' || s[x] == 'o' || s[x] == 'u'){
            current_max++;
        }
        Queue.push(s[x]);
        x++;
        global_max = (global_max>current_max)?global_max:current_max;
    }
    return global_max;
}
int main(){
  string s = "leetcode";
  cout<<maxVowels(s, 3);
}
// int minDeletions(string s) {
//     map<char,int> Map;
//     vector<int> vec;
//     for(int i=0;i<s.length();i++){
//         if(Map.find(s[i]) == Map.end()){
//             Map[s[i]] = 1;
//         }else{
//             Map[s[i]]++;
//         }
//     }
//     int output = 0;
//     for(auto itr = Map.begin();itr!= Map.end();itr++){
//         int x = itr->second;
//         cout<<x<<"\t";
//         while(find(vec.begin(), vec.end(), x) != vec.end() && x != 0){
//             x--;
//             output++;
//         }
//         if(x != 0){
//             vec.push_back(x);
//         }
//     }
//     return output;
// }
// int main(){
//   cout<<minDeletions("bbcebab");
// }

// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;
// int smallestDivisor(vector<int>& nums, int threshold) {
//         int max = 0;
//         float divisor = threshold*1.00;
//         while(max <= threshold&& divisor>0){
//             int sum = 0;
//             for(int i=0;i<nums.size();i++){
//                 float x = nums[i]/divisor;
//                 sum += ceil(x);
//             }
//             cout<<"Sum : "<<sum<<"\t";
//             // cout<<max<<"\t";
//             max = (max>sum)?max:sum;
//             cout<<"Max : "<<max<<"\n";
//             divisor--;
//         }
//         return (divisor+2);
// }
// int main(){
//   vector<int> vec;
//   vec.push_back(1);
//   vec.push_back(2);
//   vec.push_back(3);
//   cout<<smallestDivisor(vec, 6);
// }
// int main(){
//   vector<int> vec;
//   vec.push_back(2);
//   vec.push_back(3);
//   vec.push_back(2);
//   vec.push_back(4);
//   for(auto itr = vec.begin();itr != vec.end();itr++){
//     if(*itr == 2){
//       erase(itr);
//     }
//   }
//   for(auto itr = vec.begin();itr != vec.end();itr++){
//     cout<<*itr<<" ";
//   }
//
//
//   }
// void display(stack<char> s){
//     stack<char> temp = s;
//     while(!temp.empty()){
//       cout<<s.top()<<"\n";
//       s.pop();
//     }
// }
// bool isValid(string s) {
//     stack<char> st;
//     char prev = 'x';
//     for(int i=0;i<s.length();i++){
//         st.push(s[i]);
//         if( (prev == '('&&s[i]==')') || (prev == '['&&s[i]==']') || (prev == '{'&&s[i]=='}') ){
//           cout<<prev<<" "<<s[i];
//           cout<<"\n";
//           st.pop();
//           st.pop();
//         }
//         prev = s[i];
//     }
//     if(st.empty()){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//   cout<<isValid("[{}]");
// }
