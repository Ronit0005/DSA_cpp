// CLASS : Is like a template for object.
// OBJECT : Is real world entities.
// ATTRIBUTES OR PROPERTIES .
// METHOD OR MEMBER FUNCTION.
/*
ACCESS MODIFIER : public : This is accessible to everyone.
private : This is accessible only inside the class .
protected : This is accessible inside the class and also inside the derived class .
*/
/*
ENCAPSULATION : Is wrapping up data and member function in a single unit called class .
                This is used in data hideing.

*/ 
// Constructor doesn't have return type . Always make the constructor as public .Memory allocation happens when the constructor is called 
// We can make copy constructor . But if we are not making any copy constructor default copy constructor is called. 
/*
There are two types of copy: Shallow and Deep Copy
Shallow Copy:Copies all the member value from one object to another .
Deep Copy: Not only copies the member value but also make copies of any dynamically allocated memory that member
           point to.
*/

/* In copy shallow or deep -> The properties are copied. */
// DAM : dynamically allocated memory.
// Destructor are automatically made by complier.
// delete ptr; -> means clearing the memory which ptr is pointing to.
// Destructor -> Is automatically called after the main function is over .
// We use destructor to avoid memory leak .
/* Inheritance : When the properties and member method of base class is passed on to derived class .*/
// In Inheritance : constructor of base class is called first followed by constructor of derived class . And   reverse happens in destructor.
// we can inherit an class as a public , private or protected . Private : when we inherit an class as an public , we can use its properties outside the class .Private: can't be used outside the class . Protected: can't be used outside the class . when we create an class with the intension of inheriting it , we should make it protected.
/*
Types of inheritance -> 1. Single inheritance :one base class to another derived class .
2. Multi level inheritance :grandfather->father->Son
3. Multiple inheritance : two base class , one derived class .
4. Heirarchial Inheritance : one parent , two child class .
5. Hybrid inheritance : all the above mixed . */ 
/*Polymorphism : Is a ability of object to take different form according to the context
  Eg., constructor overloading 
  Types :
  1. compile time polymorphism : Function overloading -> function with same name but different parameters 
     in a class .
     Operator overloading-> int a=10;
                            int b=a;
                            hence we can say that b=10;
  2. Runtime polymorphism: They are called in runtime .function overriding -> function with same name , same parameters but one 
                           present in parent class while other is present in child class.
                           hence , method of child class is executed first .
                           virtual function : is function created in parent class and is to be redefined in 
                                              child class .(virtual display(){
                                              //code}
                                              )  OR virtual void draw()=0;
                            */
/*Abstraction : Is displaying only the neccessary or non-sensitive info by hidding the important stuffs.*/
/*Abstract class : is class in thought , it can't create objects.They are used as a BASE class*/
// If there is a virtual function in a class then by default it becomes abstract class. 
// static variable 's value is stored in the memory till the prg is over.And it is initialised onces.
// If any object is made static , it is not destroyed till the prg is over.
// If object is made in a curly brackets it is destroyed after end of curly brackets . 


/*#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
    double salary;
public:
   string name,dept,subject;
   Teacher(string name,string dept,string subject){
    this->name=name;
    this->dept=dept;
    this->subject=subject;
   }
   void setter(double sal){
    salary=sal;
   }
   double getter(){
    return salary;
   }
   void changeDept(string newDept){
    dept=newDept;
   }

};
int main(){
    Teacher t1("Ronit","Computer Science","Cpp");
    // t1.name="Rahul";
    // t1.dept="scope";
    // t1.subject="cpp";
    //t1.salary="10000000";
    t1.setter(10000.01);
    cout<<t1.getter()<<endl;
    cout<<t1.name;
    return 0;
}*/


/*#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    string name,subject;
   Teacher(string name,string subject){
    this->name=name;
    this->subject=subject;
   }
    Teacher(Teacher &newObj){
     cout<<"I am being called !!!!"<<endl;
     this->name=newObj.name;
     this->subject=newObj.subject;
    }
   void info(){
    cout<<"The name of the teacher is : "<<name<<endl;
    cout<<"The subject of the teacher is : "<<subject;
   }
};
int main(){
    Teacher t1("Ronit","Computer Science");
    Teacher t2(t1);
    t2.info();
    return 0;
}*/


/*#include  <iostream>
using namespace std;
class Student{
 public:
    string name;
    double* cgpaptr;
    Student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    Student(Student &obj){
        this->name=obj.name;
        cgpaptr=new double;
        *this->cgpaptr=*obj.cgpaptr;
    }
    void info(){
        cout<<"Name : "<<name<<endl;
        cout<<"Cgpa : "<<*cgpaptr<<endl;
    }
};
int main(){
    Student s1("Ronit",9.1);
    Student s2(s1);
    *s1.cgpaptr=8.9;
    s1.info();
    s2.info();
    return 0;
}*/

/*#include <iostream>
using namespace std;
class student{
    public:
    string name;
    double* cgpaPtr;
    student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *this->cgpaPtr=cgpa;
    }
    student(student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
    }
    ~student(){
        cout<<"I am a Destructor !!!";
        delete cgpaPtr;
    }
};
int main(){
    student s1("Ronit Kumar Singh",9.1);
    cout<<*s1.cgpaPtr<<endl;
    return 0;
}*/
// Inheritance :
/*#include <iostream>
using namespace std;
class base{
    public:
    string name;
    int age;
    base(){
        cout<<"I am constructor of base class ."<<endl;
    }
    ~base(){
        cout<<"I am destructor of base class ."<<endl;
    }
};
class derived: public base{
    public:
    string zender;
    derived(){
        cout<<"I am Constructor of derived class . "<<endl;
    }
    ~derived(){
        cout<<"I am destructor of derived class . "<<endl;
    }
    void info(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Zender : "<<zender<<endl;

    }
};
int main(){
    derived s1;
    s1.name="Ronit Kumar Singh";
    s1.age=20;
    s1.zender="Male";
    s1.info();
}*/

// Multi-level Inheritance.
/*#include <iostream>
using namespace std;
class GrandFather{
    public:
    GrandFather(string grandfather){
        cout<<"I am constructor of grand father class !!"<<endl;
    }

};
class Father:public GrandFather{
     public:
     Father(string father,string grandfather):GrandFather(grandfather){
        cout<<"I am constructor of father class !!"<<endl;
     }
};
class Child:public Father{
    public:
    Child(string child,string father,string grandfather):Father(father,grandfather){
        cout<<"I am Constructor of child class !!"<<endl;
    }
};
int main(){
    Child obj("Ronit","Rahul","Rounak");
    return 0;
}*/

// Multilevel inheritance:
/*#include <iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    int age;
};
class Teacher{
    public:
    int salary;
};
class TA:public Student,public Teacher{
    public:
    string research;
};
int main(){
    TA obj;
    obj.age=27;
    obj.rollNo=10010;
    obj.salary=25000;
    obj.research="AI";
    cout<<obj.research;
    return 0;
}*/

#include <iostream>
using namespace std;
class store{
    public:
    store(){
        cout<<"Constructor..."<<endl;
    }
    ~store(){
        cout<<"Destructor..."<<endl;
    }
};
int main(){
    if(true){
        static store obj;
    }
    cout<<"End of curly brackets..."<<endl;
    return 0;
}