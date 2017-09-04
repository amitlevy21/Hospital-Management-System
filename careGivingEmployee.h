#ifndef CAREGIVINGEMPLOYEE_H_INCLUDED
#define CAREGIVINGEMPLOYEE_H_INCLUDED

#include "Employee.h"

// Concrete class to distinguish between an employee that
// can give caring and an employee who can't like Researcher.
class CareGivingEmployee : virtual public Employee
{
public:

    CareGivingEmployee(int id, char* name, time_t* dateOfBirth, eGender gender,
     int employeeID, Department* departments, time_t* startWorkingDate ,
     eRank employeeRank, float senorityYears, double salary);
    CareGivingEmployee(CareGivingEmployee& other) = delete;
    virtual ~CareGivingEmployee();

};

#endif // CAREGIVINGEMPLOYEE_H_INCLUDED
