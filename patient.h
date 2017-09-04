#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime> // for date

class patient : public Person
{
public:
    patient(Person);
    patient(patient& other) = delete;
    virtual ~patient();

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
