#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Person{
    public:
    string name;
    int age;

};

class Student : public Person{
    public:
    int roll_no;

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll_no: "<<roll_no<<endl;


    }
};

int main(){

    Student s1;

    s1.name="rahul";
    s1.age=21;
    s1.roll_no=32;

    s1.getInfo();







}