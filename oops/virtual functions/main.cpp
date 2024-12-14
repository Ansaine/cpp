#include<bits/stdc++.h>
using namespace std;


// Note: 
// Virtual is not applicable for constructor
// Virtual functions is an example of runtime polymorphism


class Animal{

public:
    virtual void bark(){
        cout<<"I am a animal"<<endl;
    }
};

class Dog: public Animal{

public:
    void bark(){
        cout<<"Bhow Bhow! I am a dog";
    }
};

int main(){
    Animal myanimal;
    myanimal.bark();

    Dog mydog;
    mydog.bark();

    return 0;
}