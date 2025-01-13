#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
        double salary;

    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    int age;
    //function for teacher constructor instead of defoult const 
    //non parametrised constructor
        // Teacher(){ 
        //     cout<< "HI i am constructor called manually"<<endl;
        //     dept= "computer science";  //initialisation in constructor itself
        // }

    // parametrised constructor
    Teacher(string n , string d , string s, double sal){ 
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // custom copy constructor -> shallow copy
    Teacher (Teacher &orgObj){
        cout<< " i am in custom copy constructor..."<< endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->age = orgObj.age;

    }

 
    //methods or member functions 
    void changeDepartment(string newDept){
        dept= newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double  getSalary(){
        return salary;
    }

    void getInfo(){
        cout<< " name: "<<name<<endl;
        cout<<" subject: "<< subject <<endl;
    }

};


class Student{
    public:
        string name;
        double *cgpaPtr; //shallow copy gives problem when using heap memory[dynamic memory]    

        Student(string name , double cgpa ){
            this-> name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;  // constructor for shallow copy
        }

        Student(Student &obj){
            this->name = obj.name;
            cgpaPtr = new double; // constructor for deep copy 
            *cgpaPtr = *obj.cgpaPtr;
        }

        //costom destructor
        ~Student(){
            //defoult destructor just free normal variable / memory 
            cout<<" hi i am destructor, i delete everything" <<endl;
            delete cgpaPtr; //free dynamically allocated memory created with "new" keyword 
        }
     
        void getInfo(){
            cout<< "name: "<<name <<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;

        }


};

//base class constructor is called before the derived class constructor, 
//and the derived class destructor is called before the base class destructor.



int main(){
//creating an object of class type of teacher
    // Teacher t1;
    // t1.name = "Neha";
    // t1.subject = "C++";
    // // t1.salary = 25000;
    // t1.age = 23; 
    // cout<<t1.dept;


//creating object for parametrised constructor
//within a single line all parameters are passed 
    //  Teacher t1("Neha " , " ECE" , "C++",25000 );
     //t1.getInfo();

    // Teacher t2(t1);  //default copy constructor invoke
    // t2.getInfo();


    Student s1("Neha ", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();
    return 0;
}