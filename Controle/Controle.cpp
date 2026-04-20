#include <bits/stdc++.h>
#include "../service/Service.cpp"

using namespace std;

class StudentController
{
private:
    StudentService studentService;
public:
    int addStudent(Student student)
    {
       return studentService.addStudent(student);
    }
};
class TeacherController
{
private:
    TeacherService teacherService;
public:
    int addTeacher(Teacher teacher)
    {
       return teacherService.addTeacher(teacher);
    }
};
/////////
class CourseController
{
private:
    CourseService courseService;
public:
    int addCourse(Course course)
    {
       return courseService.addCourse(course);
    }
};
