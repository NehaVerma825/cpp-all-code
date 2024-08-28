#include<iostream>
#include <cstring> // Include this header to use strcpy
//#include "neha.cpp"  //including neha class in header file 
using namespace std;



class Hero {  // creating class Hero explicitly 
    // Properties
    private:
        int health;
    public:
        char *name; 
        char level; 
        static int timeToComplete;
        

        // Constructors - default constructor takes no parameters
        Hero() {
            cout << "simple Constructor called" << endl; // Fixed cout and endl usage
            name = new char[100];
        }

        // Parameterized constructor
        Hero(int health) {
            this->health = health; // Use 'this' to refer to the object's health (object addr)
            // cout << "this-> " << this << endl; // this->health is the object's health
        }

        Hero(int health, char level) {
            this->health = health;
            this->level = level; 
            // name = new char[100]; // Allocate memory for name
            // cout << "Parameterized Constructor with level called" << endl; // Added output message 
        }

        void print() {
            cout << "name: " << this->name << endl;
            cout << "health: " << this->health << endl;
            cout << "level: " << this->level << endl;
        }

        //Copy constructor
        Hero( Hero& temp) { // Use pass by reference and added const
        //creating entirely   diffrent new char array  for DEEP COPY
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
            cout << "Copy constructor called" << endl;
            this->health = temp.health;
            this->level = temp.level; 
        //     // strcpy(this->name, temp.name); // Use strcpy to copy string
        }

        // GETTER and SETTER
        int getHealth() {   // By use of GET, private data can be read
            return health;
        }

        char getLevel() {
            return level;
        }
    
        void setHealth(int h) {  // By use of SET, private data can be manipulated
            health = h;
        }

        void setLevel(char ch) {
            level = ch;
        }
    
        void setName(char name[]) {
            strcpy(this->name, name); // Use strcpy to copy string
        }

        ~Hero(){
            cout<<"destructor called"<<endl;
        }
};
//initialise static data member
int Hero :: timeToComplete = 5;  //:: scope resolution operator 

    

int main(){ 
    cout<< Hero :: timeToComplete;



    //static 
    //destructors: for static allocation destructor automatically called
    Hero P;

    //dynamic 
    Hero *q=new Hero();
    //manually destructor called
    delete q; 





    // Hero hero1;
    // hero1.setHealth(90);
    // hero1.setLevel('F');
    // char name[5]="Neha";
    // hero1.setName(name);
    // hero1.print();

    // //use defoult copy constructor
    // Hero hero2(hero1);
    // //Hero hero2= hero1;// can also be copy as
    // hero2.print();

    // hero1.name[2]= 'u';
    // hero1.print();
    // hero2.print();


 //copy constructor
    // Hero A(90,'M');
    // A.print();
    // Hero B(A);  //copying A into B //instead of below line 
    // B.print(); 
    // B.health = A.health;
    // B.level = A.level;


    // //object created statically   the function call as neha.Hero()
    // cout<<"before"<<endl;
    // Hero neha(10);
    // cout<<"after"<<endl;
    // cout<<"address of neha  "<< &neha<<endl;
    // neha.print();
    // cout<<"after"<<endl;
    //neha.getHealth();   //current object

    // //object created dynamically
    // Hero * h = new Hero(11);
    // h->print();
    // Hero temp(22,'N');
    // temp.print();







//static allocation  
//Hero a;
// a.sethealth(50);
// a.setlevel('B');
//cout << "level is " << a.level << endl;
//cout << "health is " << a.gethealth() << endl;


//dynamical allocation 
//Hero *b = new Hero;
// b->sethealth(70);
// b->setlevel('A');
//cout << "level is " << (*b).level << endl; //using dereference pointer with dot operator 
//cout << "health is " << (*b).gethealth() << endl;


//alternative way of using dereference pointer with dot operator 
//cout << "level is " << b->level << endl; //alternate way of derefrence with dot operator 
//cout << "health is " << b->gethealth() << endl;
    








    // //creation a object of Neha type
    // Neha n1;
    // //cout<<"size: "<<sizeof(n1);
    
    // // n1.health=70;
    // // n1.level='A';

    // cout<< "health is :"<<n1.gethealth() << endl; //garbage value

    // //use setter
    // n1.sethealth(60);
    // n1.setlevel('A');

    // //  use getter : Print updated values
    // cout << "Updated health is: " << n1.gethealth() << endl;
    // cout << "Updated level is: " << n1.getlevel() << endl;
    


    return 0;
}