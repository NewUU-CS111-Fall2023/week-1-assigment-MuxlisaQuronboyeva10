#include "FamilyMembers.h"
#include <iostream>
using namespace std;

FamilyMembers:: FamilyMembers(string name, int age, string member) {
    this->name = name;
    this->age = age;
    this->member = member;
}

void FamilyMembers::introduce() {
    cout << "Name: " << name << endl;
    cout << "Age of " << member << ": " << age << endl;
    cout << "Family relation: " << member << endl;
    cout << "--------------------------------------" << endl;
}


int main() {
    John j = John("John", 47, "father", "programming");
    j.introduce();
    j.responsibility();
    j.FavoouriteThingToDo();

    Anne a = Anne("Anne", 44, "mother", "Harry Potter");
    a.introduce();
    a.responsibility();
    a.FavoouriteThingToDo();

    Sharo sh = Sharo("Sharo", 22, "sister", "cycling");
    sh.introduce();
    sh.responsibility();
    sh.FavoouriteThingToDo();

    Bob b = Bob("Bob", 19, "brother", "Catcher in the Rye");
    b.introduce();
    b.responsibility();
    b.FavoouriteThingToDo();


    Mary m = Mary("Mary", 15, "myself", "reading books");
    m.introduce();
    m.responsibility();
    m.FavoouriteThingToDo();

    return 0;
}