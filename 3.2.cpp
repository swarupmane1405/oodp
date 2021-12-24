#include<iostream>
using namespace std;

class student
{
    int rno;
    char name[20];
    int m1,m2,m3;
    public:
    	 static int objectCount;
    void ac()
    {
    cout<<"\nEnter the Roll_NO:";
    cin>>rno;
    cout<<"\nEnter the name:";
    cin>>name;
    cout<<"\nEnter the marks of 3 Subjects:";
    cin>>m1>>m2>>m3;

objectCount++;
    }
    void display()
    {
    cout<<"\nRoll.No:"<<rno;
    cout<<"\nName:"<<name;
    cout<<"\nMarks of sub1:"<<m1;
    cout<<"\nMarks of sub2:"<<m2;
    cout<<"\nMarks of sub3:"<<m3;
    cout<<"\nObject Count:"<<objectCount;
    }
    
};
int student::objectCount = 0;
int main()
{ student s1,s2;
s1.ac();
s1.display();

s2.ac();
s2.display();
return 0;
}
