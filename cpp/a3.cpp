#include <bits/stdc++.h>
using namespace std;
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    set<char> Set1;
    set<char> Set2;
    for(int i=0;i<word1.size();i++){
        for(int j=0;j<word1[i].length();j++){
            if(isalpha(word1[i][j])){
                cout<<word1[i][j];
                Set1.insert(word1[i][j]);
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<word2.size();i++){
        for(int j=0;j<word2[j].length();j++){
            cout<<word2[i][j];
            Set2.insert(word2[i][j]);
        }
    }
    auto itr1 = Set1.begin();
    auto itr2 = Set2.begin();
    while(itr1 != Set1.end() && itr2 != Set2.end()){
         // cout<<*itr1<<" "<<*itr2;
         // cout<<"\n";
         if(*itr1 != *itr2){
             return false;
         }
         itr1++;
         itr2++;
    }
    return true;
}
int main(){
  vector<string> vec1{"jrk","qci"};
  vector<string> vec2{"jrkqci"};
  cout<<arrayStringsAreEqual(vec1, vec2);
}

// class OrderedStream {
// public:
//     OrderedStream(int n) {
//         int x = n;
//     }
//
//     vector<string> insert(int id, string value) {
//         static int ptr = 1;
//         vector<string> result;
//         static map<int, string> Map;
//         Map.insert({id, value});
//         if(id == ptr){
//             while(Map.find(ptr) != Map.end()){
//                 result.push_back(Map.find(ptr)->second);
//                 ptr++;
//             }
//         }
//         return result;
//     }
// };
// void display(vector<string> res){
//   for(auto itr = res.begin();itr!=res.end();itr++){
//       cout<<*itr;
//   }
//   cout<<"\n";
// }
//
// int main(){
//   vector<string> result;
//   OrderedStream os= new OrderedStream(5);
//   result = os.insert(3, "ccccc"); // Inserts (3, "ccccc"), returns [].
//   display(result);
//   result = os.insert(1, "aaaaa"); // Inserts (1, "aaaaa"), returns ["aaaaa"].
//   display(result);
//   result = os.insert(2, "bbbbb"); // Inserts (2, "bbbbb"), returns ["bbbbb", "ccccc"].
//   display(result);
//   result = os.insert(5, "eeeee"); // Inserts (5, "eeeee"), returns [].
//   display(result);
//   result = os.insert(4, "ddddd"); // Inserts (4, "ddddd"), returns ["ddddd", "eeeee"].
//   display(result);
// }

// vector<string> call(int id, string value){
//         static int ptr = 1;
//         vector<string> result;
//         static map<int, string> Map;
//         Map.insert({id, value});
//         cout<<"1";
//         if(id == ptr){
//             cout<<ptr<<" ";
//             while(Map.find(ptr) != Map.end()){
//                 result.push_back(Map.find(ptr)->second);
//                 ptr++;
//             }
//         }
//         return result;
// }
// void display(vector<string> res){
//   for(auto itr = res.begin();itr!=res.end();itr++){
//       cout<<*itr;
//   }
//   cout<<"\n";
// }
// int main(){
//   vector<string> result;
//   // result = call(9);
//   // display(result);
//   result = call(9,"nghbm");
//   display(result);
//   result = call(7,"hgeob");
//   display(result);
//   result = call(6,"mwlrz");
//   display(result);
//   result = call(4,"oalee");
//   display(result);
//   result = call(2,"bouhq");
//   display(result);
//   result = call(1,"mnknb");
//   display(result);
//   result = call(5,"qkxbj");
//   display(result);
//   result = call(8,"iydkk");
//   display(result);
//   result = call(3,"oqdnf");
//   display(result);
// }
// int main(){
//     string s = "tryhard";
//     int k = 4;
//     queue<char> que;
//     set<char> Set;
//     Set.insert('a');
//     Set.insert('e');
//     Set.insert('i');
//     Set.insert('o');
//     Set.insert('u');
//     int i=0;
//     int count = 0;
//     int max_count = 0;
//     while(i<k){
//        if(Set.find(s[i]) != Set.end()){
//            count++;
//        }
//        que.push(s[i]);
//        i++;
//      }
//     max_count = count;
//     while(i<s.length()){
//        if(Set.find(que.front()) != Set.end()){
//            count--;
//        }
//        cout<<que.front()<<"\n";
//        que.pop();
//        if(Set.find(s[i]) != Set.end()){
//            count++;
//        }
//        cout<<s[i]<<"\n";
//        que.push(s[i]);
//        max_count = (max_count>count)?max_count:count;
//        i++;
//      }
//      cout<<max_count;
// }
// int main(){
//     vector<int> nums1{1,2,3,0,0,0};
//     vector<int> nums2{2,5,6};
//     int m =3;
//     int n=3;
//     int i=0;
//     int j=0;
//     nums1.resize(m);
//     vector<int> nums;
//     while(i<m || j<n){
//         if(i>=m){
//           nums.push_back(nums2[j]);
//           j++;
//         }else if(j>=n){
//           nums.push_back(nums1[i]);
//           i++;
//         }else if(nums1[i]>nums2[j]){
//             nums.push_back(nums2[j]);
//             j++;
//         }else{
//             nums.push_back(nums1[i]);
//             i++;
//         }
//     }
//     nums1.resize(m+n);
//
//     for(int i=0;i<m+n;i++){
//         cout<<nums[i];
//     }
// }
// int main(){
//   vector<int> nums;
//   nums.push_back(10);
//   nums.push_back(10);
//   nums.push_back(10);
//   nums.push_back(10);
//   nums.push_back(20);
//   nums.push_back(20);
//   nums.push_back(20);
//   nums.push_back(20);
//   nums.push_back(30);
//   nums.push_back(30);
//   nums.push_back(30);
//   nums.push_back(40);
//   nums.push_back(40);
//   nums.push_back(50);
//   nums.push_back(50);
//   int num = 40;
//   cout<<std::upper_bound(nums.begin(), nums.end(), num)-std::lower_bound(nums.begin(), nums.end(), num);
// }
// int main(){
//         string s = "({[]})";
//         stack<char> st;
//         // for(int i=0;i<s.length();i++){
//         //     if(s[i] == '(' || s[i] == '{' || s[i] == '['){
//         //         st.push(s[i]);
//         //     }
//         //     cout<<st.top()<<"\n";
//         //     if(st.top() == '(' && s[i] == ')'){
//         //         st.pop();
//         //     }
//         //     if(st.top() == '{' && s[i] == '}'){
//         //         st.pop();
//         //     }
//         //     if(st.top() == '[' && s[i] == ']'){
//         //         st.pop();
//         //     }
//         // }
//         st.push('}');
//         cout<<st.top();
//         if(st.empty()){
//             cout<<"true";
//         }else{
//             cout<<"false";
//         }
// }
  // vector<string> strs;
  // strs.push_back("c");
  // strs.push_back("acc");
  // strs.push_back("ccc");
  // // if(strs.size() == 0) return "";
  //       string s = strs[0];
  //       for(int i=1;i<strs.size();i++){
  //         // cout<<strs[i].find(s, 0) == std::string::npos;
  //           while(strs[i].find(s, 0) == std::string::npos){
  //                 s = s.substr(0, s.length()-1);
  //                 cout<<s;
  //                 if(s.length()-1 == 0){
  //                     cout<<" ";
  //                 }
  //           }
  //       }
  //       cout<<s;

// int main(){
//         int x = 121;
//         if(x<0){
//             cout<<"false";
//         }
//         queue<int> que;
//         stack<int> st;
//         int count = 0;
//         while(x>0){
//             int rem = x%10;
//             que.push(rem);
//             st.push(rem);
//             count++;
//             x /= 10;
//         }
//         int f = 0;
//         while(f<count/2){
//             if(que.front() != st.top()){
//                 cout<<"false";
//             }
//             cout<<que.front();
//             cout<<st.top();
//             que.pop();
//             st.pop();
//             f++;
//         }
//         cout<<"true";
// }
// int main(){
//   string s = "A man, a plan, a canal: Panama";
//   stack<char> st;
//   queue<char> que;
//   // vector<char> vec;
//   int count = 0;
//   for(int i=0;i<s.length();i++){
//       if(isalpha(s[i])){
//           char c = tolower(s[i]);
//           st.push(c);
//           que.push(c);
//           // vec.push_back(c);
//           count++;
//       }
//   }
//   // for(int i=0;i<count;i++){
//   //   cout<<vec[i];
//   // }
//   // cout<<"\n"<<count;
//   int x = count/2;
//   if(count%2 == 0){
//       // cout<<"\n"<<"count is even"<<"\n";
//       while(x>0){
//           x--;
//           if(st.top() != que.front()){
//               cout<<"false";
//           }
//           st.pop();
//           que.pop();
//       }
//   }else{
//       // cout<<"\n"<<"count is odd"<<"\n";
//       while(x>=0){
//           x--;
//           // cout<<st.top()<<":"<<que.front()<<"\n";
//           if(st.top() != que.front()){
//               return false;
//           }
//           st.pop();
//           que.pop();
//       }
//   }
//   if(x <= 0){
//     return true;
//   }else{
//     return false;
//   }
// }
// class minHeap{
// public:
//   vector<int> pq;
//   int N = 0;
//   void swim(int x){
//     while(x>0 && pq[x] > pq[x/2]){
//       swap(pq[x], pq[x/2]);
//       x = x/2;
//     }
//   }
//   void insert(int k){
//       pq.push_back(k);
//       swim(N);
//       N++;
//   }
//   void display(){
//       for(int i=0;i<pq.size();i++){
//           cout<<pq[i]<<" : "<<i;
//           cout<<"\n";
//       }
//   }
//   void sink(int k){
//     while(k <= pq.size()/2){
//         int j = 2*k;
//         if(j<N && pq[j]<pq[j+1]) j++;
//         if(!(pq[k]<pq[j])) break;
//         swap(pq[k], pq[j]);
//         k = j;
//     }
//   }
//   void pop(){
//       int temp = pq[0];
//       swap(pq[0], pq[pq.size()-1]);
//       pq.resize(pq.size()-1);
//       sink(pq.size()-1);
//       cout<<temp<<"\t";
//   }
// };
// int main(){
//     minHeap mh;
//     mh.insert(1);
//     mh.insert(2);
//     mh.insert(3);
//     mh.insert(8);
//     mh.insert(5);
//     mh.insert(6);
//     mh.insert(7);
//     mh.pop();
//     mh.pop();
//     mh.pop();
//     mh.pop();
//     mh.pop();
//     mh.pop();
// }
