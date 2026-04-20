#include <bits/stdc++.h>
using namespace std;
//create model sharedate;
class ShareDate
{
private:
     string name;
     int id;
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
     //Getter
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};
//create model baseentity
class BaseEntity:public ShareDate
{
private:
    int age;
    string phoneNumber;
    string faculty;
    string universityName;
public:
    //setter
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
        for(int i=0;i<sizeof(studentIds)/sizeof(studentIds[0]);++i)
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
    int* getstudentIed()
    {
        return studentIds;
    }
    double getSalary()
    {
        return salary;
    }

};
//create model Coures
class Course:public ShareDate
{
private:
    double hour;
    int studentIds[5];
public:
    //setter
    void setstudentIds(int studentIds[5])
    {
        for(int i=0;i<sizeof(studentIds)/sizeof(studentIds[0]);++i)
            this->studentIds[i]=studentIds[i];
    }
    void sethour(double hour)
    {
        this->hour=hour;
    }
    //getter
    int* getstudentIds()
    {
        return studentIds;
    }
    double gethour()
    {
        return hour;
    }
};
//create model student
class Student:public BaseEntity
{
private:
    double gpa;
    Teacher numeberOfTeacher[5];
    Course courses[5];
public:
    //seter
    void setcourses(Course courses[5])
    {
        for(int i=0;i<sizeof(courses)/sizeof(courses[0]);++i)
            this->courses[i]=courses[i];
    }
    void setnumeberOfTeacher(Teacher numeberOfTeacher[5])
    {
        for(int i=0;i<sizeof(numeberOfTeacher)/sizeof(numeberOfTeacher[0]);++i)
            this->numeberOfTeacher[i]=numeberOfTeacher[i];
    }
    void setGpa(double gpa)
    {
        this->gpa=gpa;
    }
    //geter
    double getGpa()
    {
        return gpa;
    }
    Teacher* getnumeberOfTeacher()
    {
        return numeberOfTeacher;
    }
    Course* getcourse()
    {
        return courses;
    }
};
