#include <iostream>
#include "Controle/Controle.cpp"

using namespace std;
int id;
int process;
void showlist(string str)
{
    cout<<"\t\t************* "<<str <<" Management System *************"<<endl;
    cout<<"1 - Add "<<str<<"   | "<<"2 - Remove "<<str<<endl;
    cout<<"3 - Edit "<<str<<"  | "<<"4 - Show "<<str<<endl;
    cout<<"5 - Show "<<str<<"ID| "<<"6 - Exit"<<endl;
}
void addStudent()
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
    id=studentController.addStudent(student);
    if(id!=-1)
    {
        cout<<"Success Added Student With Id ["<<id<<"]"<<endl;
    }

}
void addCourse()
{
    Course course;
    cout<<"Please Enter Course Data: "<<endl;
    string name;
    cout<<"Enter Course Name: ";cin>>name;
    course.setName(name);
    double hour;
    cout<<"Enter Course Hour: ";cin>>hour;
    course.sethour(hour);
    CourseController courseController;
    id=courseController.addCourse(course);
    if(id!=-1)
    {
        cout<<"Success Added Course With Id ["<<id<<"]"<<endl;
    }
}
void addTeacher()
{
    Teacher teacher;
    cout<<"Please Enter Teacher Data: "<<endl;
    string name;
    cout<<"Enter Teacher Name: ";cin>>name;
    teacher.setName(name);
    int age;
    cout<<"Enter Teacher Age: ";cin>>age;
    teacher.setAge(age);
    string phoneNumber;
    cout<<"Enter Teacher Phone Number: ";cin>>phoneNumber;
    teacher.setPhoneNumber(phoneNumber);
    double salary;
    cout<<"Enter Teacher Salary : ";cin>>salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    id=teacherController.addTeacher(teacher);
    if(id!=-1)
    {
        cout<<"Success Added Teacher With Id ["<<id<<"]"<<endl;
    }
}
void showStudentById()
{
    cout<<"Enter Student Id :";
    cin>>id;
    StudentController studentController;
    studentController.showStudentById(id);
}
void showCourseById()
{
    cout<<"Enter Course Id :";
    cin>>id;
    CourseController courseController;
    courseController.showCourseById(id);
}
void showTeacherById()
{
    cout<<"Enter Teacher Id :";
    cin>>id;
    TeacherController teacherController;
    teacherController.showTeacherById(id);
}
void switchStudent()
{
    switch(process)
    {
        case 1:
            addStudent();
            break;
        case 2:
            cout<<"Remove Student"<<endl;
            break;
        case 3:
            cout<<"Edit Student"<<endl;
            break;
        case 4:
            cout<<"Show Student"<<endl;
            break;
        case 5:
            showStudentById();
            break;
        case 6:
            break;
        default:
            cout<<"Invalid Choose"<<endl;
    }
}
void switchCourse()
{
    switch(process)
    {
        case 1:
            addCourse();
            break;
        case 2:
            cout<<"Remove Course"<<endl;
            break;
        case 3:
            cout<<"Edit Course"<<endl;
            break;
        case 4:
            cout<<"Show Course"<<endl;
            break;
        case 5:
            showCourseById();
            break;
        case 6:
            break;
        default:
            cout<<"Invalid Choose"<<endl;
    }
}
void switchTeacher()
{
    switch(process)
    {
        case 1:
            addTeacher();
            break;
        case 2:
            cout<<"Remove Teacher"<<endl;
            break;
        case 3:
            cout<<"Edit Teacher"<<endl;
            break;
        case 4:
            cout<<"Show Teacher"<<endl;
            break;
        case 5:
            showTeacherById();
            break;
        case 6:
            break;
        default:
            cout<<"Invalid Choose"<<endl;
    }
}
int main()
{
    bool x=true;
    while(x)
    {
        cout<<"\t\t************* Management System *************"<<endl;
        cout<<"Please Enter Your Process you meed to do !"<<endl;
        cout<<"1 - Abowt Student"<<"   | "<<"2 - Abowt Courses"<<endl;
        cout<<"3 - Abowt Teachers"<<"  | "<<"4 - Exit"<<endl;
        cin>>process;
        switch(process)
        {
            case 1:
                showlist("Student");
                cin>>process;
                switchStudent();
                break;
            case 2:
                showlist("Course");
                cin>>process;
                switchCourse();
                break;
            case 3:
                showlist("Teacher");
                cin>>process;
                switchTeacher();
                break;
            case 4:
                cout<<"Process Exit"<<endl;x=false;break;
            default:
                cout<<"Invalid Choose"<<endl;
        }
    }

return 0;
}
