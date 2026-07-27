#include <iostream>
#include <vector>
#include <string>
using namespace std;


class student{
    string name;
public:
    student(){
        cout << "Default constructor called" << endl;
    }
    student(string n){
        name = n;
        cout << "Parameterized constructor called for " << name << endl;
    }

    string getName() const {
        return name;
    }
};
class Print{
    public:
    void print(int num){
        cout << "Printing integer: " << num << endl;
    }

    void print(double num){
        cout << "Printing double: " << num << endl;
    }

    void print(const string& str){
        cout << "Printing string: " << str << endl;
    }

    void print(const student& s){
        cout << "Printing student name: " << s.getName() << endl;
    }
    

};


int main(){
    vector<student> students;
    students.push_back(student("Alice"));
    students.push_back(student("Bob"));
    students.push_back(student("Charlie"));


    for(auto& s : students){
        // Do something with each student
        cout<<  s.getName() <<endl;
    }


    int num = 42;
    double dnum = 3.14;
    string str = "Hello, World!";
    student s("David");

    Print p;
    p.print(num);
    p.print(dnum);
    p.print(str);
    p.print(s);

    return 0;
}