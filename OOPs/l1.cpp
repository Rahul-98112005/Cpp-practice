#include<iostream>
using namespace std;

class Student{
     public:
     string name;
     int age;
     int roll_no;

     Student(string name, int age, int roll_no)
     {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
     }

     void display() {
        cout << name << " " << age << " " << roll_no << " ";
     }
};

int main() {
    Student s1("Rahul",20,95);
    // s1.name = "Rahul Gupta";
    // s1.age = 20;
    // s1.roll_no = 98;
    // s1.display();
    // cout << endl;
    // Student s2;
    // s2.name = "varun singh";
    // s2.age = 20;
    // s2.roll_no = 95;
    // s2.display();
    s1.display();

}