// #include <iostream>
// using namespace std;
// #include <vector>
// #include <queue>
// #include <unordered_set>

// vector<vector<string>> wordLadder(string& beginWord,string& endWord,vector<string>& wordList){
//     unordered_set<string> st(wordList.begin(),wordList.end());
//     queue<vector<string>> que;
//     que.push({beginWord});
//     vector<vector<string>> ans;
//     vector<string> currLevelWords;
//     int level = 0;
//     while(!que.empty()){
//         vector<string> frontVec = que.front();
//         que.pop();
//         if(frontVec.size()>level){
//             level++;
//             for(auto it:currLevelWords){
//                 st.erase(it);
//             }
//         }
//         string word = frontVec.back();
//         if(word == endWord){
//             if(ans.size()==0){
//                 ans.push_back(frontVec);
//             } else if(ans[0].size()==frontVec.size()){
//                 ans.push_back(frontVec);
//             }
//             continue;
//         }
//         for(int i=0;i<word.size();i++){
//             char original = word[i];
//             for(char chr = 'a';chr<='z';chr++){
//                 word[i]=chr;
//                 if(st.find(word)!=st.end()){
//                     frontVec.push_back(word);
//                     que.push(frontVec);
//                     currLevelWords.push_back(word);
//                     frontVec.pop_back();
//                 }
//             }
//             word[i]=original;
//         }
//     }
//     return ans;
// }

// int main(){
    
//     return 0;
// }


#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>
#include <map>
#include <queue>
#include <algorithm>

class x{
    public:
    map<string,int> mp;
    vector<vector<string>> ans;
    string b;

    void DFS(string word,vector<string>& seq){
        if(b==word){
            reverse(seq.begin(),seq.end());
            ans.push_back(seq);
            reverse(seq.begin(),seq.end());
            return;
        }
        int steps = mp[word];
        for(int i=0;i<word.size();i++){
            char orginal = word[i];
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(mp.find(word)!=mp.end() && mp[word]+1==steps){
                    seq.push_back(word);
                    DFS(word,seq);
                    seq.pop_back();
                }
            }
            word[i]=orginal;
        }
    }

    vector<vector<string>> wordLadder2(string beginWord,string endWord,vector<string>& wordList){
        queue<string> que;
        unordered_set<string> st(wordList.begin(),wordList.end());
        que.push(beginWord);
        st.erase(beginWord);
        b=beginWord;
        mp[beginWord]=1;
        while(!que.empty()){
            string word = que.front();
            int steps = mp[word];
            que.pop();
            for(int i=0;i<word.size();i++){
                char org = word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        que.push(word);
                        st.erase(word);
                        mp[word]=steps+1;
                    }
                }
                word[i]=org;
            }
        }
        vector<string> seq;
        seq.push_back(endWord);
        if(mp.find(endWord)!=mp.end()){
            DFS(endWord,seq);
            return ans;
        }
        return {};
    }
};

int main(){
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = {"hot","dog","lot","dot","log","cog"};
    x obj;
    vector<vector<string>> str = obj.wordLadder2(beginWord,endWord,wordList);
    for(auto a :str){
        for(auto zx:a){
            cout<<zx<<" ";
        }
        cout<<endl;
    }
    return 0;
}