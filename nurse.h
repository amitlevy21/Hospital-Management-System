#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED

#include "careGivingEmployee.h"

class Nurse : public CareGivingEmployee
{

public:
    Nurse(const CareGivingEmployee& CGEmployee, int maxNumOfDuties, int currentNumOfDuties,
    const char** duties) throw(char*);

    Nurse(const Nurse& other) = delete;

    Nurse& operator=(const Nurse& other) = delete;

    virtual ~Nurse();

    const char* getAreaOfTraining() const;
    int getMaxNumOfDuties()         const;
    int getCurrentNumOfDuties()     const;
    const char** getDuties()        const;


protected:
    int maxNumOfDuties;
    int currentNumOfDuties;
    char** duties;
};

#endif // NURSE_H_INCLUDED
