#include <iostream>
using namespace std;

class Teacher {
private:
    string name;

public:
    // Constructor
    Teacher(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Teacher() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    Teacher t1("John");
    Teacher t2("Alice");

    cout << "Inside main()" << endl;

    return 0;
}