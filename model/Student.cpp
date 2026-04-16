#include "BaseEntity.cpp"
#include "Teacher.cpp"

class Student:public BaseEntity
{
private:
    double gpa;
    Teacher numeberOfTeacher[5];
public:
    void setGpa(double gpa)
    {
        this->gpa=gpa;
    }
    double getGpa()
    {
        return gpa;
    }
};
