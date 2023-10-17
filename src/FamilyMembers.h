#ifndef FAMILYMEMBERS_H
#define FAMILYMEMBERS_H

#include <iostream>
using namespace std;

class AbstractJob {
    virtual void position() = 0;
};

class FamilyMembers {
private:
    int age;
    string member;
protected:
    string name;
public:
    FamilyMembers(string name, int age, string member);
    void introduce();

    //Abstraction
    void responsibility() {
        if (age > 40)
            cout << name << " is responsible for taking care of the family." << endl;
        else
            cout << name << " does not have to care about family responsibilities (i.g: making money to feed the family)." << endl;
    };

    //Polymorphism
    void FavoouriteThingToDo() {
        cout << name << " likes spending time with family members." << endl;
    }
};


//Inheritance - Developer now a child class
class John: public FamilyMembers {
public:
    string Hobby;
    John (string name, int age, string member, string hobby)
    : FamilyMembers (name, age, member){
        Hobby = hobby;
    };
    void FavoouriteThingToDo() {
        cout << name << " loves " << Hobby << endl;
    }

};

class Anne: public FamilyMembers {
public:
    string Book;
    Anne (string name, int age, string member, string book)
            : FamilyMembers (name, age, member){
        book = book;
    };
    void FavoouriteThingToDo() {
        cout << name << " loves " << Book << endl;
    }

};

class Sharo: public FamilyMembers {
public:
    string Hobby;
    Sharo (string name, int age, string member, string hobby )
    : FamilyMembers (name, age, member){
        Hobby = hobby;
    };
    void FavoouriteThingToDo() {
        cout << name << " loves " << Hobby << endl;
    }

};
class Bob: public FamilyMembers {
public:
    string Book;
    Bob (string name, int age, string member, string book)
    : FamilyMembers (name, age, member){
        Book = book;
    };
    void FavoouriteThingToDo() {
        cout << name << " loves " << Book << endl;
    }

};
class Mary: public FamilyMembers {
public:
    string Hobby;
    Mary (string name, int age, string member, string hobby)
    : FamilyMembers (name, age, member){
        Hobby = hobby;
    };
    void FavoouriteThingToDo() {
        cout << name << " love " << Hobby << endl;
    }

};



//Abstraction
//Polymorphism
//Encapsulation
//Inheritance
#endif