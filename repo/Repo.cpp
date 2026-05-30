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
    virtual void showStudent()=0;
    virtual int removeStudent(int id)=0;
};

//class StudentRepository
class StudentRepositoryImpl: public StudentRepository
{
private:
    Data data;
    Student invalidStudent;

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
        int index = -1;
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
    void showStudent()
    {
        for(int i=0;i<data.indexStudents;++i)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t GPA"<<endl;
            cout<<"\t\t"<<data.students[i].getId()
            <<"\t\t"<<data.students[i].getName()
            <<"\t\t"<<data.students[i].getAge()
            <<"\t\t"<<data.students[i].getPhoneNumber()<<"\t\t"<<data.students[i].getGpa()<<endl;
        }
    }
    int removeStudent(int id)
    {
        int index=-1;
        for(int i=0;i<data.indexStudents;++i)
        {
            if(id==data.students[i].getId())
            {
                index=i;
                break;
            }
        }
        if(index!=-1)
        {
            for(int i=index;i<data.indexStudents-1;i++)
            {
                data.students[i]=data.students[i+1];
            }
            data.indexStudents--;
            return index;
        }
        else
        {
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
    virtual void showCourse()=0;
    virtual int removeCourse(int id)=0;
};

//class CourseRepository
class CourseRepositoryImpl: public CourseRepository
{
private:
    Data data;
    Course invalidCourses;
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
        int index = -1;
        for(int i=0;i<data.indexCourses;++i)
        {
             int index = -1;
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
    void showCourse()
    {
        for(int i=0;i<data.indexCourses;++i)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t Hour"<<endl;
            cout<<"\t\t"<<data.courses[i].getId()
            <<"\t\t"<<data.courses[i].getName()
            <<"\t\t"<<data.courses[i].gethour()<<endl;
        }
    }
    int removeCourse(int id)
    {
        int index=-1;
        for(int i=0;i<data.indexCourses;++i)
        {
            if(id==data.courses[i].getId())
            {
                index=i;
                break;
            }
        }
        if(index!=-1)
        {
            for(int i=index;i<data.indexCourses-1;i++)
            {
                data.courses[i]=data.courses[i+1];
            }
            data.indexCourses--;
            return index;
        }
        else
        {
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
    virtual void showTeacher()=0;
    virtual int removeTeacher(int id)=0;
};

//class TeacherRepository
class TeacherRepositoryImpl: public TeacherRepository
{
private:
    Data data;
    Teacher invalidTeachers;

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
        int index = -1;
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
    void showTeacher()
    {
        for(int i=0;i<data.indexTeachers;++i)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t Salary"<<endl;
            cout<<"\t\t"<<data.teachers[i].getId()
            <<"\t\t"<<data.teachers[i].getName()
            <<"\t\t"<<data.teachers[i].getAge()
            <<"\t\t"<<data.teachers[i].getPhoneNumber()<<"\t\t"<<data.teachers[i].getSalary()<<endl;
        }
    }
    int removeTeacher(int id)
    {
        int index=-1;
        for(int i=0;i<data.indexTeachers;++i)
        {
            if(id==data.teachers[i].getId())
            {
                index=i;
                break;
            }
        }
        if(index!=-1)
        {
            for(int i=index;i<data.indexTeachers-1;i++)
            {
                data.teachers[i]=data.teachers[i+1];
            }
            data.indexTeachers--;
            return index;
        }
        else
        {
            return index;
        }
    }
};
