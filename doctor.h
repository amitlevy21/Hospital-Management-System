#ifndef DOCTOR_H_INCLUDED
#define DOCTOR_H_INCLUDED

#include "careGivingEmployee.h"

class Doctor : public CareGivingEmployee
{
public:
    Doctor(CareGivingEmployee& CGEmployee, int numOfDiplomas, char* fieldOfExpertise);
    Doctor(Doctor& other) = delete;
    virtual ~Doctor();

protected:
    int numOfDiplomas;
    char* fieldOfExpertise;
};

#endif // DOCTOR_H_INCLUDED
