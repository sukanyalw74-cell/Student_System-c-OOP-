#include <bits/stdc++.h>
#include "../model/Models.cpp"
using namespace std;

class Data
{
public:
     static Student students[25];
     static int indexStudents;
     static int idStudent;
     static Course courses[25];
     static int indexCourses;
     static int idCourse;
     static Teacher teachers[25];
     static int indexTeachers;
     static int idTeacher;
};
Student Data::students[25];
int Data::indexStudents= 0;
int Data::idStudent= 1;
Course Data::courses[25];
int Data::indexCourses= 0;
int Data::idCourse= 1;
Teacher Data::teachers[25];
int Data::indexTeachers= 0;
int Data::idTeacher= 1;
/////////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\
//interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student)=0;
};

//class StudentRepository
class StudentRepositoryImpl: public StudentRepository
{
private:
    Data data;
public:
    int addStudent(Student student)
    {
        if(data.indexStudents==25)
        {
            cout<< "Full Student" <<endl;
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudents]=student;
            data.indexStudents++;
        }
        return student.getId();
    }
};
/////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\
//interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course)=0;
};

//class CourseRepository
class CourseRepositoryImpl: public CourseRepository
{
private:
    Data data;
public:
    int addCourse(Course course)
    {
        if(data.indexCourses==25)
        {
            cout<< "Full Course" <<endl;
        }
        else
        {
            course.setId(data.idCourse++);
            data.courses[data.indexCourses]=course;
            data.indexCourses++;
        }
        return course.getId();
    }
};
/////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\
//interface TeacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher)=0;
};

//class TeacherRepository
class TeacherRepositoryImpl: public TeacherRepository
{
private:
    Data data;
public:
    int addTeacher(Teacher teacher)
    {
        if(data.indexTeachers==25)
        {
            cout<< "Full Teacher" <<endl;
        }
        else
        {
            teacher.setId(data.idTeacher++);
            data.teachers[data.indexTeachers]=teacher;
            data.indexTeachers++;
        }
        return teacher.getId();
    }
};
