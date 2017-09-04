#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime> // for date
#include "Person.h"
#include "visit.h"

class Patient : public Person
{
public:
    Patient(Person);
    Patient(Patient& other) = delete;
    virtual ~Patient();

    bool visit(time_t& date);
    bool anesthetize(time_t& date);
    bool addAllergie(char* nameOfAllergie);

protected:
    Visit visits[];
    time_t* lastDateVisited;
    time_t* lastDateAnesthetized;
    char** allergies;

};

#endif // PATIENT_H_INCLUDED