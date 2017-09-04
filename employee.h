#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED


#include <ctime> //for date

class employee : public Person
{
public:
    enum eRank
    {
        JUNIOR, SENIOR
    };

    employee(int id, char* name, time_t* dateOfBirth, eGender gender,
     int employeeID, Department* departments, time_t* startWorkingDate ,
     eRank employeeRank, float senorityYears, double salary, char* areaOfTraining);
    employee(employee& other) = delete;
    virtual ~employee();

    const int getEmployeeId() const;
    const Department* getDepartments() const;
    const time_t* getStartWorkingDate() const;
    const eRank getEmployeeRank() const;
    const float getSenorityYears() const;
    const double getSalary() const;

    void work() const = 0; // make class abstract

protected:
    int employeeId;
    Department* departments;
    time_t* startWorkingDate;
    eRank employeeRank;
    float senorityYears;
    double salary;
    char* areaOfTraining;

};
#endif // EMPLOYEE_H_INCLUDED
