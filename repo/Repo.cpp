#include <bits/stdc++.h>
#include "../model/Models.cpp"
using namespace std;
//static data
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
//init static data
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
    virtual Student getStudentById(int id)=0;
    virtual int editStudent(Student student)=0;
};

//class StudentRepository
class StudentRepositoryImpl: public StudentRepository
{
private:
    Data data;
    Student invalidStudent;
    int index = -1;
public:
    int addStudent(Student student)
    {
        if(data.indexStudents==25)
        {
            return -1;
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudents]=student;
            data.indexStudents++;
        }
        return student.getId();
    }
    Student getStudentById(int id)
    {
        for(int i=0;i<data.indexStudents;++i)
        {
            if(data.students[i].getId()==id)
            {
                return data.students[i];
            }
        }
         invalidStudent.setId(-1);
         return invalidStudent;
    }
    int editStudent(Student student)
    {
        for(int i=0;i<data.indexStudents;++i)
        {
            if(data.students[i].getId()==student.getId())
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            return -1;
        }
        else
        {
            data.students[index] = student;
            return index;
        }
    }
};
/////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\
//interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course)=0;
    virtual Course getCourseById(int id)=0;
    virtual int editCourse(Course course)=0;
};

//class CourseRepository
class CourseRepositoryImpl: public CourseRepository
{
private:
    Data data;
    Course invalidCourses;
    int index = -1;
public:
    int addCourse(Course course)
    {
        if(data.indexCourses==25)
        {
            return -1;
        }
        else
        {
            course.setId(data.idCourse++);
            data.courses[data.indexCourses]=course;
            data.indexCourses++;
        }
        return course.getId();
    }
    Course getCourseById(int id)
    {
       for(int i=0;i<data.indexCourses;++i)
        {
            if(data.courses[i].getId()==id)
            {
                return data.courses[i];
            }
        }
        invalidCourses.setId(-1);
        return invalidCourses;
    }
    int editCourse(Course course)
    {
        for(int i=0;i<data.indexCourses;++i)
        {
            if(data.courses[i].getId()==course.getId())
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            return -1;
        }
        else
        {
            data.courses[index] = course;
            return index;
        }
    }
};
/////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\
//interface TeacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher)=0;
    virtual Teacher getTeacherById(int id)=0;
    virtual int editTeacher(Teacher teacher)=0;
};

//class TeacherRepository
class TeacherRepositoryImpl: public TeacherRepository
{
private:
    Data data;
    Teacher invalidTeachers;
    int index = -1;
public:
    int addTeacher(Teacher teacher)
    {
        if(data.indexTeachers==25)
        {
            return -1;
        }
        else
        {
            teacher.setId(data.idTeacher++);
            data.teachers[data.indexTeachers]=teacher;
            data.indexTeachers++;
        }
        return teacher.getId();
    }
    Teacher getTeacherById(int id)
    {
        for(int i=0;i<data.indexTeachers;++i)
        {
            if(data.teachers[i].getId()==id)
            {
                return data.teachers[i];
            }
        }
        invalidTeachers.setId(-1);
        return invalidTeachers;
    }
    int editTeacher(Teacher teacher)
    {
        for(int i=0;i<data.indexTeachers;++i)
        {
            if(data.teachers[i].getId()==teacher.getId())
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            return -1;
        }
        else
        {
            data.teachers[index] = teacher;
            return index;
        }
    }
};
