#include <iostream>
#include <vector>
#include <string>
using namespace std;

class School {
public:
    static vector<string> teachers_list;

    virtual void display() = 0;
    virtual void addTeacher(string name) = 0;

   
};

class Teacher : public School {
private:
    string name;
    int age;
    string school;
    string subject;

public:
    Teacher(string n, int a, string s, string sub) {
        name = n;
        age = a;
        school = s;
        subject = sub;

        addTeacher(name);   // Automatically add teacher to list

        cout << "Teacher object created: " << name << endl << endl;
    }

    void addTeacher(string teacherName) override {
        teachers_list.push_back(teacherName);
    }

    void display() override {
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "School  : " << school << endl;
        cout << "Subject : " << subject << endl;
    }
};

// Definition of static member
vector<string> School::teachers_list;

int main() {

    School* t1 = new Teacher("John", 35, "ABC School", "Math");
    School* t2 = new Teacher("Alice", 30, "XYZ School", "Science");

    cout << "\nTeacher Details\n";
    t1->display();
    cout << endl;
    t2->display();

    cout << "\nAll Teachers:\n";
    for (const string &teacher : School::teachers_list) {
        cout << teacher << endl;
    }

    return 0;
}