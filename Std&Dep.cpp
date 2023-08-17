#include <iostream>
#include <string>
#include <vector>
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
class Department
{

    private:
    std::string name;
    int capacity;
    double requiredGpa;

    public:

    ///////constructors////////////
    Department(){
        std::string name="";
    int capacity=0;
    double requiredGpa=0.0;

    }
    Department(std::string dept_name,int dept_capacity,double dept_requiredGpa){
       name=dept_name;
       capacity=dept_capacity;
       requiredGpa=dept_requiredGpa;

    }
    ///////////setters///////////////
    void set_name(std::string dept_name)
    {
        name=dept_name;
    }
    void set_capacity(int dept_capacity)
    {
       capacity=dept_capacity;
    }
    void set_requiredGpa(double dept_requiredGpa )
    {
        requiredGpa=dept_requiredGpa;
    }
    //////////getters//////////////

    std::string get_name() const
    {
        return name;

    }
    int  get_capacity() const
    {
        return capacity;

    }
    double get_requiredGpa() const
    {
        return requiredGpa;

    }



};

int main()
{




    return 0;
}
