#include <iostream>
using namespace std;
class sample{
    public:
    int x;
    int y;
    sample(int a,int b){
        x=a;
        y=b;
    }
    sample operator*(sample &obj){
        return sample(x*obj.x,y*obj.y);
    }
    
};
int main(){
    sample o1(10,100);
    sample o2(20,200);
    sample o3=o1*o2;
    cout<<o3.x<<" "<<o3.y;
    return 0;
}