#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <ctime> // for date

class person
{
public:
    enum eGender
    {
        MALE, FEMALE
    };

    person(int id, char* name, time_t* dateOfBirth, eGender gender);
    person(person& person) = delete;
    virtual ~person();

    const int getId() const ;
    const char* getName() const ;
    const time_t* getDateOfBirth() const;

    void talk() const = 0; //make the class abstract

protected:

    int id;
    char* name;
    time_t* dateOfBirth;
    eGender gender;

};

#endif // PERSON_H_INCLUDED
