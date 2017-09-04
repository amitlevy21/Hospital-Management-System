#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <ctime> // for date

class Person
{
public:
    enum eGender
    {
        MALE, FEMALE
    };

    Person(int id, char* name, time_t* dateOfBirth, eGender gender);
    Person(Person& person) = delete;
    virtual ~Person();

    const int getId() const ;
    const char* getName() const ;
    const time_t* getDateOfBirth() const;

    virtual void talk() const = 0; //make the class abstract

protected:

    int id;
    char* name;
    time_t* dateOfBirth;
    eGender gender;

};

#endif // PERSON_H_INCLUDED
