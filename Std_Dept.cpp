#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    double gpa;
    string level;

public:
    Student() : gpa(0.0), level("") {}

    Student(double stu_gpa, string stu_level) : gpa(stu_gpa), level(stu_level) {}

    void set_gpa(double stu_gpa) {
        gpa = stu_gpa;
    }

    void set_level(string stu_level) {
        level = stu_level;
    }

    double get_gpa() const {
        return gpa;
    }

    string get_level() const {
        return level;
    }

    // ... other class methods ...

    void updateStudentInVector(double newGPA, const string& newLevel) {
        set_gpa(newGPA);
        set_level(newLevel);
    }

    void removeStudentByAttributes(double targetGPA, const string& targetLevel) {
        vector<Student> updatedVector;
        for (const auto& student : studentVector) {
            if (student.get_gpa() != targetGPA || student.get_level() != targetLevel) {
                updatedVector.push_back(student);
            }
        }
        studentVector = updatedVector;
    }

    static void addStudentToVector(const Student& newStudent, vector<Student>& studentVector) {
        studentVector.push_back(newStudent);
    }
};

class Department {
private:
    std::string name;
    int capacity;
    double requiredGpa;

public:
    Department() : name(""), capacity(0), requiredGpa(0.0) {}

    Department(std::string dept_name, int dept_capacity, double dept_requiredGpa)
        : name(dept_name), capacity(dept_capacity), requiredGpa(dept_requiredGpa) {}

    void set_name(std::string dept_name) {
        name = dept_name;
    }

    void set_capacity(int dept_capacity) {
        capacity = dept_capacity;
    }

    void set_requiredGpa(double dept_requiredGpa) {
        requiredGpa = dept_requiredGpa;
    }

    std::string get_name() const {
        return name;
    }

    int get_capacity() const {
        return capacity;
    }

    double get_requiredGpa() const {
        return requiredGpa;
    }

    // ... other class methods ...

    void updateDepartmentInVector(int newCapacity, double newRequiredGpa) {
        set_capacity(newCapacity);
        set_requiredGpa(newRequiredGpa);
    }

    void removeDepartmentByAttributes(int targetCapacity, double targetRequiredGpa) {
        vector<Department> updatedVector;
        for (const auto& department : departmentVector) {
            if (department.get_capacity() != targetCapacity || department.get_requiredGpa() != targetRequiredGpa) {
                updatedVector.push_back(department);
            }
        }
        departmentVector = updatedVector;
    }

    void addDepartmentToVector(vector<Department>& departmentVector) {
        departmentVector.push_back(*this);
    }
};

int main() {
    vector<Student> studentList;
    vector<Department> departmentList;

    // Creating and adding students to the vector
    Student student1(3.8, "Sophomore");
    Student student2(3.5, "Freshman");
    Student::addStudentToVector(student1, studentList);
    Student::addStudentToVector(student2, studentList);

    // Updating a student's attributes
    Student updatedStudent(3.7, "Sophomore");
    student2.updateStudentInVector(updatedStudent.get_gpa(), updatedStudent.get_level());

    // Removing a student by attributes
    student2.removeStudentByAttributes(3.5, "Freshman");

    // Creating and adding departments to the vector
    Department department1("Computer Science", 100, 3.5);
    Department department2("Engineering", 150, 3.8);
    department1.addDepartmentToVector(departmentList);
    department2.addDepartmentToVector(departmentList);

    // Updating a department's attributes
    Department updatedDepartment("Engineering", 200, 3.7);
    department2.updateDepartmentInVector(updatedDepartment.get_capacity(), updatedDepartment.get_requiredGpa());

    // Removing a department by attributes
    department1.removeDepartmentByAttributes(100, 3.5);

    // Display students
    cout << "Students:" << endl;
    for (const auto& student : studentList) {
        cout << "Student GPA: " << student.get_gpa() << ", Level: " << student.get_level() << endl;
    }

    // Display departments
    cout << "Departments:" << endl;
    for (const auto& department : departmentList) {
        cout << "Department Name: " << department.get_name() << ", Capacity: " << department.get_capacity()
             << ", Required GPA: " << department.get_requiredGpa() << endl;
    }

    return 0;
}
