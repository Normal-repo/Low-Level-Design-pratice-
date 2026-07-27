#include <iostream>
using namespace std;

// Base Class 1
class Student {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

// Base Class 2
class Sports {
public:
    void play() {
        cout << "Student is playing football." << endl;
    }
};

// Derived Class inherits from both Student and Sports
class Person : public Student, public Sports {
public:
    void display() {
        cout << "Person can study and play." << endl;
    }
};

int main() {
    Person p;

    p.study();    // From Student
    p.play();     // From Sports
    p.display();  // Own function

    return 0;
}