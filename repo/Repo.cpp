#include <bits/stdc++.h>
#include "../model/Models.cpp"
using namespace std;

/////////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\
//interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student);
};

//class StudentRepository
class StudentRepositoryImpl: public StudentRepository
{
private:
    Student students[25];
    int index=0;
public:
    int addStudent(Student student)
    {
        if(index==25)
        {
            cout<< "Full Student" <<endl;
        }
        else
        {
            students[index]=student;
            index++;
        }

    }
};
/////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\
//interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course);
};

//class CourseRepository
class CourseRepositoryImpl: public CourseRepository
{
private:
    Course courses[5];
    int index=0;
public:
    int addCourse(Course course)
    {
        if(index==5)
        {
            cout<< "Full Course" <<endl;
        }
        else
        {
            courses[index]=course;
            index++;
        }

    }
};
/////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\
//interface TeacherRepository
class TeacherRepository
{

};

//class TeacherRepository
class TeacherRepositoryImpl: public TeacherRepository
{

};
