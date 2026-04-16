#include <iostream>
using namespace std;
//create model baseentity
class BaseEntity
{
private:
    string name;
    int id;
    int age;
    string phoneNumber;
    string faculty;
    string universityName;
public:
    //setter
    void setName(string name)
    {
        this->name=name;
    }
    void setId(int i)
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
    string getFaculty()
    {
        return faculty;
    }
    string getUniversityName()
    {
        return universityName;
    }
};
//create model Teacher
class Teacher:public BaseEntity
{
private:
    string teachingMaterial;
    double salary;
    int studentIds[5];
public:
    //setter
    void setSalary(double salary)
    {
        this->salary=salary;
    }
    void setstudentIed(int studentIds[5])
    {
        for(int i=0;i<5;++i)
            this->studentIds[i]=studentIds[i];
    }
    void setteachingMatrial(string teachingMarial)
    {
        this->teachingMaterial=teachingMarial;
    }
    //Getter
    string gitteachingMatrial()
    {
        return teachingMaterial;
    }
    int get
    double getSalary()
    {
        return salary;
    }

};
//create model student
class Student:public BaseEntity
{
private:
    double gpa;
    Teacher numeberOfTeacher[5];
public:
    void setnumeberOfTeacher(Teacher numeberOfTeacher[5])
    {
        for(int i=0;i<5;++i)
            this->numeberOfTeacher[i]=numeberOfTeacher[i];
    }
    void setGpa(double gpa)
    {
        this->gpa=gpa;
    }
    double getGpa()
    {
        return gpa;
    }
    Teacher* getnumeberOfTeacher()
    {
        return numeberOfTeacher;
    }
};
