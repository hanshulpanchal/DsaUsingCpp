//Encapsulation
#include<iostream>
using namespace std;
//it is defined as binding together the data members and member functions.
//we cannot access any data or function from the class directly.
//this will also help to control the modification of our data members.
class Encapsulation{
    private:
    int salary;
    public:
    Encapsulation(int val)
    {
        salary = val;
    }
    //getter
    int getSalary(){
        return salary;
    }
    
};
int main(){

}




Design a C++ program that manages student information using the concept of Encapsulation. The program should store and manage student details securely, allowing access to sensitive data only through proper methods.

Requirements:

Create a Student class with the following private data members:
string name (Student's Name)
int rollNumber (Roll Number)
float marks (Marks out of 100)
Implement public methods for:
Setters: To assign values to the private data members.
Getters: To safely access and display student information.
A method to grade the student based on marks:
A for marks ≥ 90
B for marks ≥ 75 and < 90
C for marks ≥ 60 and < 75
D for marks ≥ 40 and < 60
F for marks < 40
Ensure that marks cannot be set beyond the valid range (0-100).
Demonstrate the functionality by creating objects and displaying their details and grades.

class Student{
    private:
    String name;
    int rollNum;
    float marks;
    
}