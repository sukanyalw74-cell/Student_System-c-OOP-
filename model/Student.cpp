#include "BaseEntity.cpp"
class Student:public BaseEntity
{
private:
    double gpa;
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
