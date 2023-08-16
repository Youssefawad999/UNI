#include <iostream>
#include <string>
using namespace std;


class Student{

private:
    double gpa;
    string level;


public:

    Student()
    {

        double gpa=0.0;
        string level="";
    }

    Student(double stu_gpa,string stu_level):
   gpa(stu_gpa),level(stu_level)
     {
     }


    /////////setters/////////
    void set_gpa(double stu_gpa)
    {
        gpa=stu_gpa;

    }

    void set_level(string stu_level)
    {

        level=stu_level;
    }

    //////////getters//////////
    double get_gpa()const{
        return gpa;

    }

    string get_level()const{
    return level;
    }







};

int main()
{


    return 0;
}
