#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <ctime>

class Person
{
public:


    enum eGender
    {
        MALE, FEMALE
    };

    Person(int id, const char* name, const time_t* dateOfBirth, const eGender gender) throw(char*);
    Person(const Person& person) = delete;
    Person& operator=(Person& other) = delete;
    virtual ~Person();

    int getId() const;
    const char* getName() const;
    const char* getDateOfBirth() const;

    virtual void talk() const = 0; //make the class abstract

protected:

    int id;
    char* name;
    time_t* dateOfBirth;
    eGender gender;

};



#endif // PERSON_H_INCLUDED
