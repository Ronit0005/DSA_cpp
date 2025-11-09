// #include <iostream>
// using namespace std;
// #include <string>
// #include <vector>

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> temp(26,0);
//         int len=s.length();
//         for(int i=0;i<len;i++){
//             temp[s[i]-'a']++;
//         }
//         for(int i=0;i<len;i++){
//             if(temp[s[i]-'a']==1){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// int main(){
//     Solution s;
//     string str = "loveleetcode";
//     cout<<s.firstUniqChar(str);
//     return 0;
// }


#include <iostream>
using namespace std;
#include <unordered_map>
#include <queue>

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        queue<char> q;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                q.push(i);
            }

            m[s[i]]++;

            while(!q.empty() && m[s[q.front()]]>1){
                q.pop();
            }
        }
        return q.empty()? -1 : q.front();       
    }
};

int main(){
    Solution s;
    string str = "loveleetcode";
    cout<<s.firstUniqChar(str);
    return 0;
}