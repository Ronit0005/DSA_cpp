#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator iter;
    for(iter=vec.begin();iter!=vec.end();iter++){
        cout<<(*iter)<<" ";
    }
    vector<int>::reverse_iterator it ;
    for(it=vec.rbegin();it!=vec.rend();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}