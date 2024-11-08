#include <iostream>
#include <cstring>
using namespace std;


// This is Person Class

class Person
{
private:
    string name;
    int age;
    string bloodGroup;
    string dateOfBirth;
public:
    Person()
    {
    }
    Person(string name, int age, string bloodGroup, string dateOfBirth)
    {
        this-> name = name;
        this-> age = age;
        this-> bloodGroup = bloodGroup;
        this-> dateOfBirth = dateOfBirth;
    }
    void setName(string name)
    {
        this-> name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this-> age = age;
    }
    int getAge()
    {
        return age;
    }
    void setBloodGroup(string bloodGroup)
    {
        this->bloodGroup = bloodGroup;
    }
    string getBloodGroup()
    {
        return bloodGroup;
    }
    void setDateOfBirth(string dateOfBirth)
    {
        this-> dateOfBirth = dateOfBirth;
    }
    string getDateOfBirth()
    {
        return dateOfBirth;
    }
    void showPersonInfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Blood Group : "<<bloodGroup<<endl;
        cout<<"Date Of Birth : "<<dateOfBirth<<endl;
    }
};

// This is Employee Class

class Employee : public Person
{
private:
    double salary;
    string joinDate;
public:
    Employee()
    {
    }
    Employee(string name,int age,string bloodGroup, string dateOfBirth, double salary, string joinDate):Person(name,age,bloodGroup,dateOfBirth)
    {
        this-> salary = salary;
        this-> joinDate = joinDate;
    }
    void setSalary(double salary)
    {
        this-> salary = salary;
    }
    double getSalary()
    {
        return salary;
    }
    void setJoinDate(string joinDate)
    {
        this-> joinDate = joinDate;
    }
    string getJoinDate()
    {
        return joinDate;
    }
    void showEmployeeInfo()
    {
        Person::showPersonInfo();
        cout<<"Salary : "<<salary<< " BDT"<<endl;
        cout<<"Joining Date : "<<joinDate<<endl;
    }
};


//This is Officer Class

class Officer:public Employee
{
private:
    string designation;
public:
    Officer()
    {
    }
    Officer(string name,int age,string bloodGroup,double salary,string dateOfBirth,string joinDate,string designation):Employee(name,age,bloodGroup,dateOfBirth,salary,joinDate)
    {
        this-> designation = designation;
    }
    void setDesignation(string designation)
    {
        this-> designation = designation;
    }
    string getDesignation()
    {
        return designation;
    }

    void showOfficerInfo()
    {
    Employee::showEmployeeInfo();
    cout<<"Designation : "<<designation<<endl;

    }
};


//This is Faculty Class


class Faculty:public Employee
{
private:
    string facDept;
public:
    Faculty()
    {
    }
    Faculty(string name,int age,string bloodGroup,string dateOfBirth,double salary,string joinDate,string facDept):Employee(name,age,bloodGroup,dateOfBirth,salary,joinDate)
    {
        this-> facDept=facDept;
    }
    void setFacultyDept(string facDept)
    {
        this-> facDept=facDept;
    }
    string getFacultyDept()
    {
        return facDept;
    }
    void showFacultyInfo()
    {
        Employee::showEmployeeInfo();
        cout<<"Department: "<<facDept<<endl;
    }
};


//This is Student Class

class Student:public Person
{
private:
    string id;
    string program;
    double cgpa;
public:
    Student()
    {
    }
    Student(string name, int age, string bloodGroup, string dateOfBirth, string id, string program, double cgpa):Person(name, age, bloodGroup, dateOfBirth)
    {
        this-> id = id;
        this-> program = program;
        this-> cgpa = cgpa;
    }
    void setID(string id)
    {
        this-> id = id;
    }
    string getID()
    {
        return id;
    }
    void setProgram(string program)
    {
        this-> program = program;
    }
    string getProgram()
    {
        return program;
    }
    void setCGPA(double cgpa)
    {
        this-> cgpa = cgpa;
    }
    double getCGPA()
    {
        return cgpa;
    }
    void showStudentInfo()
    {
        Person::showPersonInfo();
        cout<<"Student ID : "<<id<<endl;
        cout<<"Program : "<<program<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
    void showId()
    {
        cout<<"Id :"<<id<<endl;
    }
    void showCGPA()
    {
        cout<<"CGPA : "<<cgpa<<endl;
    }
};

//This is GraduateStudent Class

class GraduateStudent:public Student
{
private:
    int gradYear;
public:
    GraduateStudent()
    {
    }
    GraduateStudent(string name, int age, string bloodGroup, string dateOfBirth, string id, string program, double cgpa, int gradYear):Student(name, age, bloodGroup, dateOfBirth, id, program, cgpa)
    {
        this-> gradYear = gradYear;
    }
    void SetGradYear(int gradYear)
    {
        this-> gradYear = gradYear;
    }
    int getGradYear()
    {
        return gradYear;
    }
    void showGradStudent()
     {
         Student::showStudentInfo();
         cout<<"Graduation year: "<<gradYear<<endl;
     }
};

// This is TeachingAssistant Class

class TeachingAssistant:public Student,public Faculty
{
private:
    string type;
public:

    TeachingAssistant()
    {
    }
    TeachingAssistant(string name, int age, string bloodGroup, string dateOfBirth, string id, string program, double cgpa,double salary,string joinDate,string facDept, string type):Student(name,age,bloodGroup,dateOfBirth,id,program,cgpa),Faculty(name,age,bloodGroup,dateOfBirth,salary,joinDate,facDept)
    {
        this->type=type;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getType()
    {
        return type;
    }
    void showTeachingAssistantInfo()
    {
        Faculty::showFacultyInfo();
        Student::showId();
        Student::showCGPA();
        cout<<"Type: "<<type<<endl;
    }
};

int main()
{
    cout<<"Person Information :"<<endl;
    cout<<endl;

    Person p1;
    p1.setName("MD. Abid Khan");
    p1.setAge(30);
    p1.setBloodGroup("AB+");
    p1.setDateOfBirth("02 August 1992");
    p1.showPersonInfo();

    cout<<endl;

    Person p2("MD. Abid Khan",30,"AB+","02 August 1992");
    p2.showPersonInfo();

    cout<<endl;
    cout<<"Employee Information :"<<endl;
    cout<<endl;

    Employee e1;
    e1.setName("Durjoy Hasan");
    e1.setAge(45);
    e1.setBloodGroup("B+");
    e1.setDateOfBirth("05 February 1977");
    e1.setSalary(70000);
    e1.setJoinDate("02 March 2018");
    e1.showEmployeeInfo();

    cout<<endl;

    Employee e2("Durjoy Hasan",45, "B+", "05 February 1977", 70000,"02 March 2018");
    e2.showEmployeeInfo();

    cout<<endl;
    cout<<"Officer Information :"<<endl;
    cout<<endl;

    Officer o1;
    o1.setName("Rakib Ahmed");
    o1.setAge(26);
    o1.setBloodGroup("A-");
    o1.setSalary(96000);
    o1.setDateOfBirth("16 January 1996");
    o1.setJoinDate("02 March 2021");
    o1.setDesignation("CFO");
    o1.showOfficerInfo();

    cout<<endl;

    Officer o2("Rakib Ahmed", 26, "A-", 96000, "16 january 1996", "02 March 2021", "CFO");
    o2.showOfficerInfo();

    cout<<endl;
    cout<<"Faculty Information :"<<endl;
    cout<<endl;

    Faculty f1;
    f1.setName("Abir Ahmed");
    f1.setAge(24);
    f1.setBloodGroup("A+");
    f1.setDateOfBirth("19 July 1998");
    f1.setSalary(60000);
    f1.setFacultyDept("FST");
    f1.setJoinDate("06 Septemper 2021");
    f1.showFacultyInfo();

    cout<<endl;

    Faculty f2("Abir Ahmed", 24, "A+", "19 July 1998", 60000,"06 Septemper 2021", "FST");
    f2.showFacultyInfo();

    cout<<endl;
    cout<<"Student Information :"<<endl;
    cout<<endl;

    Student s1;
    s1.setName("MD. Shohanur Rahman Shohan");
    s1.setAge(20);
    s1.setBloodGroup("O+");
    s1.setDateOfBirth("02 August 2002");
    s1.setID("22-46013-1");
    s1.setProgram("CSE");
    s1.setCGPA(3.75);
    s1.showStudentInfo();

    cout<<endl;

    Student s2("MD. Shohanur Rahman Shohan", 20, "O+", "02 August 2002", "22-46013", "CSE", 3.75);
    s2.showStudentInfo();

    cout<<endl;
    cout<<"Graduate Student Information :"<<endl;
    cout<<endl;

    GraduateStudent gs1;
    gs1.setName("Atif Alom");
    gs1.setAge(24);
    gs1.setBloodGroup("AB-");
    gs1.setDateOfBirth("02 August 1996");
    gs1.setID("19-46013-1");
    gs1.setProgram("CSE");
    gs1.setCGPA(4.00);
    gs1.SetGradYear(2022);
    gs1.showGradStudent();

    cout<<endl;

    GraduateStudent gs2("Atif Alom", 24, "AB-", "02 August 1996", "19-46013-1", "CSE", 4.00, 2022);
    gs2.showGradStudent();

    cout<<endl;
    cout<<"Teaching Assistant Information :"<<endl;
    cout<<endl;
    TeachingAssistant ta1("Taha Khan", 23, "A+", "23 April 1999","15-46235-1", "CSE", 3.98, 20000,"06 November 2021", "FST", "Full Time");
    ta1.showTeachingAssistantInfo();

    return 0;
}

