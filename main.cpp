#include <iostream>
#include "surgery.h"
#include "employee.h"
#include "researchingDoctor.h"

using namespace std;

void loadHospitalFromFile(const char* fileName, Department* departments, Patient* patient, Employee* employee);

void printDepartmentActivity(const Department& department);

void checkInPatient(Patient& patient, Visit& visit, Department& department);

//important for managing the departments
void checkOutPatient(const Patient& patient, Department& department);

void printLongestSurgeries(const Surgery* allSurgeries,int numOfSurgeriesToFind);

void printSurgeriesWithWrongETA(const Surgery* allSurgeries);

void printSurgeonsWithExpertise(const char* expertise, const Department* departments);

void printEmployeesWithMoreThanOneDepartment(const Employee* allEmployees);

Patient* getPossibleTestSubjects(ResearchingDoctor& researchingDoctor, const Patient* allPatients);

Doctor* getDoctorsWithMinimalNumOfDiplomas(const Doctor* allDoctors, int numOfDiplomas);

int main()
{
    const char* fileName = "hospital.txt";
    Department* allDepartments;
    Patient* allPatients;
    Employee* allEmployees;
    Surgery* allSurgeries;
    int numOfDepartments;
    int numOfPatients;
    int numOfEmployees;
    bool keepAsking = true;

    loadHospitalFromFile(fileName, allDepartments, allPatients, allEmployees);

    cout << "Today's hospital activity: " << endl;
    for(int i = 0; i < numOfDepartments; i++)
    {
        printDepartmentActivity(allDepartments[i]);
    }

    int option;

    while(keepAsking)
    {

        cout << "Please choose one of the following options:" << endl;
        cout << "0 - check in patient" << endl << "1 - check out patient" << endl
             << "2 - show longest surgeries details" << endl;
        cout << "3 - show surgeries details with wrong ETA" << endl << "4 - show surgeons with a certain expertise"
             << endl;
        cout << "5 - show list of doctors that belong to more than one department" << endl;
        cout << "6 - find possible test subjects for a certain researching doctor" << endl;
        cout << "7 - find doctors by minimal diplomas" << endl;
        cout << "8 or any other number - end program" << endl;


        switch (option)
        {
            case 0:
            {
                cout << "Please enter index of patient" << endl;
                int indexOfPatient;
                cin >> indexOfPatient;
                cout << "Please enter index of department" << endl;
                int indexOfDepartment;
                cin >> indexOfDepartment;
                checkInPatient(allPatients[indexOfPatient], Visit(), allDepartments[indexOfDepartment]);
                break;
            }

            case 1:
            {
                cout << "Please enter index of patient" << endl;
                int indexOfPatient;
                cin >> indexOfPatient;
                cout << "Please enter index of department" << endl;
                int indexOfDepartment;
                cin >> indexOfDepartment;
                checkOutPatient(allPatients[indexOfPatient], allDepartments[indexOfDepartment]);
                break;
            }

            case 2:
            {
                int numSurgeriesToFind;
                cout << "Please enter desired surgeries" << endl;
                cin >> numSurgeriesToFind;
                printLongestSurgeries(allSurgeries, numSurgeriesToFind);
                break;
            }

            case 3:
            {
                printSurgeriesWithWrongETA(allSurgeries);
                break;
            }

            case 4:
            {
                char *expertiseToFind;
                cout << "Please enter expertise" << endl;
                cin >> expertiseToFind;
                printSurgeonsWithExpertise(expertiseToFind, allDepartments);
                break;
            }

            case 5:
            {
                printEmployeesWithMoreThanOneDepartment(allEmployees);
                break;
            }

            case 6:
            {
                int indexResearchingDoctor;
                cout << "enter index of researching doctor" << endl;
                cin >> indexResearchingDoctor;
                getPossibleTestSubjects((ResearchingDoctor)allEmployees[indexResearchingDoctor], allPatients);
                break;
            }

            case 7:
            {
                int numOfDiplomas;
                cout << "please enter num of diplomas" << endl;
                cin >> numOfDiplomas;
                getDoctorsWithMinimalNumOfDiplomas(,numOfDiplomas);
            }

            default:
            {
                keepAsking = false;
            }

        }
    }

    return 0;
}


