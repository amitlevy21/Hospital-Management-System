#ifndef CAREGIVINGEMPLOYEE_H_INCLUDED
#define CAREGIVINGEMPLOYEE_H_INCLUDED

#include "employee.h"
#include <ctime>

// Concrete class to distinguish between an employee that
// can give caring and an employee who can't like Researcher.
class CareGivingEmployee : virtual public Employee
{
public:

    CareGivingEmployee(int id, const char* name, const time_t* dateOfBirth, const eGender gender,
     int employeeID, const Department* departments, const time_t* startWorkingDate ,
     const eRank employeeRank, float senorityYears, double salary, const char* areaOfTraining) throw(char*);
    CareGivingEmployee(const CareGivingEmployee& other) = delete;
    CareGivingEmployee& operator=(const CareGivingEmployee& other) = delete;
    virtual ~CareGivingEmployee();

    virtual void work() const override;

};

#endif // CAREGIVINGEMPLOYEE_H_INCLUDED
