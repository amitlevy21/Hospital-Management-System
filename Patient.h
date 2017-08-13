#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime> // for date

class Patient
{
public:
    Patient(Patient& other) = delete;

    bool visit(time_t& date);
    bool anesthetize(time_t& date);
    bool addAllergie(char* nameOfAllergie);

private:
    Visit visits[];
    time_t* lastDateVisited;
    time_t* lastDateAnesthetized;
    char** allergies;

};

#endif // PATIENT_H_INCLUDED
