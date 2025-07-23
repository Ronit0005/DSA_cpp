// #include <iostream>
// using namespace std;

// int main(){
//     string s1 = "ab";
//     int s1_freq[26]={0};
//     int s2_freq[26]={0};
//     string s2 = "eidbaooo";
//     // Calculating the ferquency of s1 string .
//     for(int i=0;i<s1.length();i++){
//         s1_freq[s1[i]-'a']++;
//     }
//     int start=0;
//     int counter =1;
//     int win_len=s1.length()-1;
//     while(win_len<s2.length()){
//         counter=1;
//         for(int i=start;i<=win_len;i++){
//             s2_freq[s2[i]-'a']++;
//         }
//         for(int i=1;i<26;i++){
//             if(s1_freq[i]!=s2_freq[i]){
//                 counter=0;
//                 break;
//             }
//         } 
//         if(counter==1){
//             printf("Permutation found : starting index %d and ending index %d",start,start+s1.length());
//             break;
//         }
//         start++;
//         win_len++;
//     }


//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    string w="";
    string s="I am ronit";
    s=s+' ';
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            w+=s[i];
        }
        else{
            cout<<w<<endl;
            w="";
        }
    }
    return 0;
}