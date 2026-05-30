#include <bits/stdc++.h>
#include "../service/Service.cpp"

using namespace std;
/////////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\
//class StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;
    Student student;
public:
    int addStudent(Student student)
    {
       return studentService.addStudent(student);
    }
    void showStudentById(int id)
    {
        student = studentService.getStudentById(id);
        if(student.getId()!=-1)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t GPA"<<endl;
            cout<<"\t\t"<<student.getId()
            <<"\t\t"<<student.getName()
            <<"\t\t"<<student.getAge()
            <<"\t\t"<<student.getPhoneNumber()<<"\t\t"<<student.getGpa()<<endl;
        }
    }
    void updateStudent(Student student)
    {
        studentService.editStudent(student);
    }
    void showStudents()
    {
        studentService.showStudent();
    }
    void removeStudent(int id)
    {
        studentService.removeStudent(id);
    }
};
/////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\
//class TeacherService
class TeacherController
{
private:
    TeacherServiceImpl teacherService;
    Teacher teacher;
public:
    int addTeacher(Teacher teacher)
    {
       return teacherService.addTeacher(teacher);
    }
     void showTeacherById(int id)
    {
        teacher = teacherService.getTeacherById(id);
        if(teacher.getId()!=-1)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t Salary"<<endl;
            cout<<"\t\t"<<teacher.getId()
            <<"\t\t"<<teacher.getName()
            <<"\t\t"<<teacher.getAge()
            <<"\t\t"<<teacher.getPhoneNumber()<<"\t\t"<<teacher.getSalary()<<endl;
        }
    }
    void updateTeacher(Teacher teacher)
    {
        teacherService.editTeacher(teacher);
    }
    void showTeachers()
    {
        teacherService.showTeacher();
    }
    void removeTeacher(int id)
    {
        teacherService.removeTeacher(id);
    }
};
/////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\
//class CourseService
class CourseController
{
private:
    CourseServiceImpl courseService;
    Course course;
public:
    int addCourse(Course course)
    {
       return courseService.addCourse(course);
    }
    void showCourseById(int id)
    {
        course = courseService.getCourseById(id);
        if(course.getId()!=-1)
        {
            cout<<"\t\tId \t\t name \t\t Age \t\t phone Number \t\t Hour"<<endl;
            cout<<"\t\t"<<course.getId()
            <<"\t\t"<<course.getName()
            <<"\t\t"<<course.gethour()<<endl;
        }
    }
     void updateCourse(Course course)
     {
         courseService.editCourse(course);
     }
      void showCourses()
    {
        courseService.showCourse();
    }
    void removeCourse(int id)
    {
        courseService.removeCourse(id);
    }
};
