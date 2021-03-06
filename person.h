#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <ctime>

const char* gender[] = {"MALE", "FEMALE"};
enum eGender {MALE, FEMALE };

class Person
{
public:

    Person(int id, const char* name, const char* dateOfBirth, eGender gender) throw(const char*);
    Person(const Person& person) = delete;

    Person& operator=(Person& other) = delete;

    virtual ~Person();

    int getId() const;
    const char* getName() const;
    const char* getDateOfBirth() const;
    const char* getGender() const;

    virtual void talk() const = 0; //make the class abstract

protected:

    int id;
    char* name;
    char* dateOfBirth;
    eGender gender;

};



#endif // PERSON_H_INCLUDED
