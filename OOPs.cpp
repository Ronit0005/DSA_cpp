// #include <iostream>
// using namespace std;
// #include <string>

// class Teacher{
// public:
//     string name;
//     string deptName;
//     string subject;
//     double* idPtr;
// private:
//     int accountNo;
//     int salary;
// public:
//     Teacher(Teacher &obj){
//         this->name=obj.name;
//         this->subject=obj.subject;
//         this->deptName=deptName;
//         this->idPtr=new double;
//         *idPtr=*(obj.idPtr);
//     }
//     Teacher(string name,string deptName,string subject,double idValue){
//         this->name=name;
//         this->subject=subject;
//         this->deptName=deptName;
//         idPtr=new double;
//         *idPtr=idValue;
//     }
//     void printDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department Name : "<<deptName<<endl;
//         cout<<"Subject : "<<subject<<endl;
//         cout<<"Id : "<<*idPtr<<endl;
//     }
// };

// int main(){
//     Teacher T1("Hemanta","Mathematics","Discrete",101);
//     Teacher T2(T1);
//     T1.printDetails();  
//     *(T2.idPtr)=102;
//     T1.printDetails();

//     return 0;
// }

#include <iostream>
using namespace std;
#include <string>

class Teacher{
public:
    string name;
    string deptName;
    string subject;
    double* idPtr;
private:
    int accountNo;
    int salary;
public:
    ~Teacher(){
        cout<<"I am the destroyer of this object "<<endl;
        delete idPtr;
    }
    Teacher(Teacher &obj){
        this->name=obj.name;
        this->subject=obj.subject;
        this->deptName=deptName;
        this->idPtr=new double;
        *idPtr=*(obj.idPtr);
    }
    Teacher(string name,string deptName,string subject,double idValue){
        this->name=name;
        this->subject=subject;
        this->deptName=deptName;
        idPtr=new double;
        *idPtr=idValue;
    }
    void printDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department Name : "<<deptName<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Id : "<<*idPtr<<endl;
    }
};

int main(){
    {
        Teacher t1("Hemanta","Mathematics","Discrete",101);
    }
    cout<<"I am out of the block"<<endl;

    return 0;
}