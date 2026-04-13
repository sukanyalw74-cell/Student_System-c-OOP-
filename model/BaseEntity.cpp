#include <iostream>
using namespace std;

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
