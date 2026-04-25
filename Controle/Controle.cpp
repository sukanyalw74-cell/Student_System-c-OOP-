#include <bits/stdc++.h>
#include "../service/Service.cpp"

using namespace std;
/////////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\
//class StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;
public:
    int addStudent(Student student)
    {
       return studentService.addStudent(student);
    }
};
/////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\
//class TeacherService
class TeacherController
{
private:
    TeacherServiceImpl teacherService;
public:
    int addTeacher(Teacher teacher)
    {
       return teacherService.addTeacher(teacher);
    }
};
/////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\
//class CourseService
class CourseController
{
private:
    CourseServiceImpl courseService;
public:
    int addCourse(Course course)
    {
       return courseService.addCourse(course);
    }
};
