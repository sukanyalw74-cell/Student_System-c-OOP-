#include <bits/stdc++.h>
#include "../repo/Repo.cpp"

using namespace std;
class StudentService
{
public:
    virtual int addStudent(Student student);
};
class StudentServiceImpl
{
private:
    StudentRepository studentRepository;
public:
    int addStudent(Student student)
    {
       return studentRepository.addStudent(student);
    }
};
//----------TEACHER-----------//
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher);
};
class TeacherServiceImpl
{
private:
    TeacherRepository teacherRepository;
public:
    int addTeacher(Teacher teacher)
    {
        return teacherRepository.addTeacher(teacher);
    }
};
class CourseService
{
public:
    virtual int addCourse(Course course);
};
class CourseServiceImpl
{
private:
    CourseRepository courseRepository;
public:
     int addCourse(Course course)
    {
       return courseRepository.addCourse(course);
    }
};
