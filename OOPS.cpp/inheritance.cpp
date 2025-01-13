#include<iostream>
using namespace std;


class Human{
    public:
    int height;
    int weight;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
    Human(){
        cout<< " parent constructor called first"<<endl;
    }

    ~Human(){
        cout<<" parent destructor"<<endl;
    }

};

//creating inheritance(child class)
class Male: public Human{
    public:
    string colour;
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

    int getheight(){
        return this->height;
    }

    Male(){
        cout<< " child constructor "<<endl;
    }
    ~Male(){
        cout<<" child destructor"<<endl;
    }

};

int main(){
    Male m1;
    cout<< m1.getheight() <<endl;


    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.colour<<endl;
    // object1.sleep();
    // object1.setweight(53);
    // cout<<object1.weight<<endl;






    return 0;
}