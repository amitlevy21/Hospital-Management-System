#include <iostream>
#include "surgery.h"
#include "employee.h"
#include "researchingDoctor.h"

using namespace std;

void loadHospitalFromFile(const char* fileName, Department* departments, Patient* patient, Employee* employee);

void findLongestSurgeries(int numOfSurgeriesToFind);

void checkInPatient(Patient& patient, Visit& visit, Department& department);

void printDepartmentActivity(const Department& department);

Surgery* getSurgeriesWithWrongETA(const Surgery* allSurgeries);

void printSurgeonsWithExpertise(const char* expertise, const Department* departments);

Employee* findEmployeeWithMoreThanOneDepartment(const Employee* allEmployees);

Patient* possibleTestSubjects(ResearchingDoctor& researchingDoctor, const Patient* allPatients);

//important for managing the departments
void checkOutPatient(Patient& patient,Visit& visit, Department& department);

Doctor* getDoctorsWithMinimalNumOfDiplomas(int numOfDiplomas);
int main()
{
    const char* fileName = "hospital.txt";
    loadHospitalFromFile(fileName);

    return 0;
}


