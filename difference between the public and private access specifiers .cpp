#include <iostream> 
#include <string> 
class Student { 
private: 
    std::string name; 
    int age; 
 
public: 
    void setDetails(const std::string& studentName, int studentAge) 
 { 
        name = studentName; 
        age = studentAge; 
    } 
    void displayDetails() const  
  { 
        std::cout << "Roll No: 24B11AI266" << std::endl;  
        std::cout << "Student Name: " << name << std::endl; 
        std::cout << "Student Age: " << age << std::endl; 
    } 
}; 
int main()  
{ 
    Student student; 
    student.setDetails("Deepthi", 18); 
    student.displayDetails(); 
    return 0; 
}
