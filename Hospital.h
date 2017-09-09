//
// Created by Moshe Sheena on 09/09/2017.
//

#ifndef _HOSPITAL_
#define _HOSPITAL_

class Department;

class Hospital {
public:
    Hospital(int maxNumOfDepartments) throw(int);

    virtual ~Hospital();

    void operator+=(const Department& newDepartment);
    void operator-=(const Department& newDepartment);

    Department** getAllDepartments() const;

    int getMaxNumOfDepartments() const;
    int getCurrentNumOfDepartments() const;

    void setMaxNumOfDepartments(int maxNumOfDepartments) throw(int);

    void addDepartment(const Department& newDepartment) throw(const char*);

    void removeDepartment(const char* name)             throw(const char*);
protected:
    Department** allDepartments;
    int maxNumOfDepartments;
    int currentNumOfDepartments;
};


#endif //_HOSPITAL_
