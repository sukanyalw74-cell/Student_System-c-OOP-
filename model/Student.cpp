#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int id;
    int age;
    string phoneNumber;
    double gpa;
    string faculty;
    string universityName;
public:
    Student(string n="",int i=0,int ag=0,string ph=0;double g=0,string fa="",string un="")
    {
        name=n;
        id=i;
        age=ag;
        phoneNumber=ph;
        gpa=g;
        faculty=fa;
        universityName=un;
    }
    //setter
    void setName(string name)
    {
        this->name=name;
    }
    void setEd(int i)
    {
        this->id=id;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setGpa(double gpa)
    {
        this->gpa=gpa;
    }
    void setFaculty(string faculty)
    {
        this->faculty=faculty;
    }
    void setUniversityName(string universityName)
    {
        this->universityName=universityName;
    }
    //Getter
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    int getAge()
    {
        return age;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    double getGpa()
    {
        return gpa;
    }
    void getFaculty()
    {
        return faculty;
    }
    string getUniversityName()
    {
        return universityName;
    }
};
