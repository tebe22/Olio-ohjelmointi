#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef {
protected:
    string name;

public:
    Chef(string name);
    virtual ~Chef();
    void makeSalad();
    void makeSoup();
};

class ItalianChef : public Chef{
public:
    ItalianChef(string name = " ", int jauhot= 0, int vedenMaara= 0);
    ~ItalianChef();
    string getName();
    void makePasta();

private:
    int vedenMaara;
    int jauhot;
};

Chef:: Chef(string name) : name(name){
    cout << "Chef " << name <<" konstruktori" << endl;
}

void Chef :: makeSalad(){
    cout <<"Chef " << name << " Makes salad" << endl;
}

void Chef :: makeSoup(){
    cout <<"Chef " << name << " Makes soup" << endl;
}

ItalianChef :: ItalianChef(string name, int j, int v) : Chef(name){
    vedenMaara = v;
    jauhot = j;

}
string ItalianChef :: getName(){
 return name;
}
void ItalianChef :: makePasta(){
 cout << "Chef " << name << " Makes pasta with special recipe" << endl;
 cout << "Chef " << name << " uses jauhot = " << jauhot  << endl;
 cout << "Chef " << name << " uses vesi = " << vedenMaara << endl;

}
ItalianChef::~ItalianChef() {

}
Chef::~Chef() {
 cout << "Chef " << name << " destruktori" << endl;
}



#endif // CHEF_H
