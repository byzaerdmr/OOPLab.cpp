#include <iostream>
using namespace std;

class Course{

private:

    string courseName;
    int courseCredit;
    const int MAX_ENROLLMENT = 50;
    int enrollment = 0;

public:

    static int totalCourses;

    Course( const string& name, int credits) : courseName(name), courseCredit(credits) 
    {
        totalCourses++;
    } 

    static int getTotalCourses()
    {
        return totalCourses;
    }

    void enrollStudent(int enrolling_student_number)
    {
        if(enrollment < MAX_ENROLLMENT && enrolling_student_number > 0)
        {
           enrollment = enrollment + enrolling_student_number;
        }
        else{
            cout<<" Cannot enroll more students in this course"<<endl;
        }
    }

    void displayCourseInfo()
    {
        cout<<"Course Name: "<<courseName<<endl;
        cout<<"Course Credit: "<<courseCredit<<endl;
        cout<<"Enrollment: "<<enrollment<<endl;
    }

};

int Course::totalCourses = 0;

int main()
{
    cout << "There is total of " << Course::totalCourses << " Courses as of now" << endl;

    Course OOP_Course("Object Oriented Programming", 3);
    Course DM_Course("Discrete Mathematics", 3);

    OOP_Course.displayCourseInfo();
    DM_Course.displayCourseInfo();

    cout << "There is total of " << Course::totalCourses << " Courses as of now" << endl;

    OOP_Course.enrollStudent(40);
    OOP_Course.enrollStudent(20);
    DM_Course.enrollStudent(20);
    DM_Course.enrollStudent(20);

    OOP_Course.displayCourseInfo();
    DM_Course.displayCourseInfo();



    return 0;
}
