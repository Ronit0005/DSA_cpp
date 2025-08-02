// #include <iostream>
// using namespace std;
// #include <map>
// #include <queue>
// #include <unordered_map>

// int main(){
//     // queue<int> que;
//     // que.push(10);
//     // que.push(20);
//     // que.push(30);
//     // while(!que.empty()){
//     //     cout<<que.front()<<" ";
//     //     que.pop();
//     // }

//     // priority_queue<int> pr_qu;
//     // pr_qu.push(10);
//     // pr_qu.push(200);
//     // pr_qu.push(3);
//     // while(!pr_qu.empty()){
//     //     cout<<pr_qu.top()<<" ";
//     //     pr_qu.pop();
//     // }

//     // priority_queue<int,vector<int>,greater<int>> pr_qu;\
//     // pr_qu.push(10);
//     // pr_qu.push(200);
//     // pr_qu.push(3);
//     // while(!pr_qu.empty()){
//     //     cout<<pr_qu.top()<<" ";
//     //     pr_qu.pop();
//     // }

//     // map<int,string> mp;
//     // mp[111]="Ronit";
//     // mp[102]="Rahul";
//     // mp[103]="Rishi";
//     // mp.insert({1110,"Ritik"});
//     // mp.insert({111,"Rinki"});
//     // // cout<<mp.size()<<" "<<mp.empty()<<endl;
//     // // cout<<mp[111]<<endl;
//     // cout<<mp.count(111)<<endl;
//     // for(auto val:mp){
//     //     cout<<val.first<<" -> "<<val.second<<endl;
//     // }

//     // multimap<int,string> mp;
//     // mp.insert({101,"Ronit"});
//     // mp.insert({110,"Rishi"});
//     // mp.insert({110,"Rahul"});

//     // for(auto val:mp){
//     //     cout<<val.first<<"->"<<val.second<<endl;
//     // }

//     // mp.emplace(102,"Ritik");
//     // mp.erase(mp.find(110));
//     // for(auto val:mp){
//     //     cout<<val.first<<"->"<<val.second<<" ";
//     // }

//     // unordered_map<int,string> um;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <unordered_set>
// #include <set>

// int main()
// {
//     // set<int> st;
//     // st.insert(1);
//     // st.insert(2);
//     // st.insert(3);
//     // st.insert(4);
//     // st.insert(4);
//     // st.insert(5);
//     // cout<<(*st.find(-1));

//     // st.erase(4);
//     // for (int val : st)
//     // {
//     //     cout << val << " ";
//     // }

//     // cout<<st.count(4);

//     // cout<<(*st.lower_bound(-1));

//     // multiset<int> ms;
//     // ms.insert(1);
//     // ms.insert(1);
//     // ms.insert(1);
//     // for(int val:ms){
//     //     cout<<val<<" ";
//     // }

//     unordered_set<int> us;
//     us.insert(1);
//     us.insert(6);
//     us.insert(10);
//     us.insert(5);
//     for(int val:us){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool comparator(pair<int,int> p1,pair<int,int> p2){
//     if(p1.second<p2.second) return true;
//     else return false ;
// }

// bool comparator2(pair<int,int> p1,pair<int,int> p2){
//     if(p1.second<p2.second){
//         return true;
//     }
//     else if(p1.second==p2.second){
//         if(p1.first<p2.first){
//             return true;
//         }
//         else{
//             return false ;
//         }
//     }
//     else{
//         return false ;
//     }
// }

// int main()
// {
//     // vector<int> vec = {10, 4, 20, 90, 1};
//     // int arr[5] = {10, 4, 20, 90, 1};
//     // sort(arr, arr + 5, greater<int>());
//     // for(int val:arr){
//     //     cout<<val<<" ";
//     // }

//     // sort(vec.begin(),vec.end(),greater<int>());
//     // for(int val:vec){
//     //     cout<<val<<" ";
//     // }

//     // vector<pair<int,int>> vec={{10,2},{3,2},{25,6}};
//     // sort(vec.begin(),vec.end(),comparator2);
//     // for(auto val:vec){
//     //     cout<<val.first<<" "<<val.second<<endl;
//     // }

//     // vector<int> vec={1,2,3,4,5};
//     // reverse(vec.begin(),vec.end());
//     // for(int i:vec){
//     //     cout<<i<<" ";
//     // }

//     // string str="acb";
//     // prev_permutation(str.begin(),str.end());
//     // cout<<str;

//     // string str="Rishi";
//     // next_permutation(str.begin(),str.end());
//     // cout<<str<<" ";

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <set>

int main()
{
    // int a=10,b=20;
    // swap(a,b);
    // cout<<"A : "<<a<<endl<<"B : "<<b<<endl;

    // cout<<"Max : "<<max(a,b)<<endl;
    // cout<<"Min : "<<min(a,b);

    // vector<int> arr = {1, 2, 3, 4, 5};
    // cout << (*max_element(arr.begin(), arr.end()))<<endl;
    // cout << (*min_element(arr.begin(), arr.end()));

    // multiset<int> st;
    // st.insert(1);
    // st.insert(2);
    // st.insert(3);
    // st.insert(4);

    // cout<<*st.find(50);

    

    return 0;
}