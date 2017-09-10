//
// Created by Moshe Sheena on 09/09/2017.
//

#ifndef _HOSPITAL_
#define _HOSPITAL_
using namespace std;

#include "department.h"

class Hospital {
public:
    Hospital(string name, int maxNumOfDepartments) throw(int, const char*);

    virtual ~Hospital();

    void operator+=(const Department& newDepartment);
    void operator-=(const Department& newDepartment);

    const Department** getAllDepartments() const;

    int getMaxNumOfDepartments() const;
    int getCurrentNumOfDepartments() const;

    const char* getName() const;

    void setName(char *name) throw(const char*);

    void setMaxNumOfDepartments(int maxNumOfDepartments) throw(int);

    void addDepartment(const Department& newDepartment)  throw(const char*);

    void removeDepartment(const char* name)              throw(const char*);
protected:
    string name;
    Department** allDepartments;
    int maxNumOfDepartments;
    int currentNumOfDepartments;
};


#endif //_HOSPITAL_
