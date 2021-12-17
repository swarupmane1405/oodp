#include <iostream>
using namespace std;
class Employee {
   public:
       int id;   
       string name;
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1 =Employee(101, "Swaroop", 890000); 
    Employee e2=Employee(102, "AMan", 59000); 
    Employee e3=Employee(103, "Rohit", 890000); 
    e1.display();  
    e2.display(); 
	e3.display(); 
    return 0;
}
