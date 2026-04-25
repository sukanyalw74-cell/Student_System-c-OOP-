#include <iostream>
#include "Controle/Controle.cpp"

using namespace std;
void showlist(string str)
{
    cout<<"\t\t************* "<<str <<" Management System *************"<<endl;
    cout<<"1 - Add "<<str<<"   | "<<"2 - Remove "<<str<<endl;
    cout<<"3 - Edit "<<str<<"  | "<<"4 - Show "<<str<<endl;
    cout<<"5 - Exit"<<""<<endl;
}
int main()
{
    bool x=true;
    while(x)
    {
        int process;
        cout<<"\t\t************* Management System *************"<<endl;
        cout<<"Please Enter Your Process you meed to do !"<<endl;
        cout<<"1 - Abowt Student"<<"   | "<<"2 - Abowt Courses"<<endl;
        cout<<"3 - Abowt Teachers"<<"  | "<<"4 - Exit"<<endl;
        cin>>process;
        switch(process)
        {
            case 1:
                showlist("Student");
                int processStudent;
                cin>>processStudent;
                if(processStudent==1)
                {
                    string name;
                    int age;
                    double gpa;
                    string phoneNumber;
                    Student student;
                    cout<<"Please Enter Student Data: "<<endl;
                    cout<<"Enter Student Name :";cin>>name;
                    student.setName(name);
                    cout<<"Enter Student Age :";cin>>age;
                    student.setAge(age);
                    cout<<"Enter Student Phone Number :"; cin>>phoneNumber;
                    student.setPhoneNumber(phoneNumber);
                    cout<<"Enter Student GPA :"; cin>>gpa;
                    student.setGpa(gpa);
                    StudentController studentController;
                    int id = studentController.addStudent(student);
                    cout<<"Id : "<<id<<endl;
                }
                break;
            case 2:
                showlist("Courses");
                cin>>process;
                break;
            case 3:
                showlist("Teachers");
                cin>>process;
                break;
            case 4:
                cout<<"Process Exit"<<endl;x=false;break;
            default:
                cout<<"Invalid Choose"<<endl;
        }
    }

return 0;
}
