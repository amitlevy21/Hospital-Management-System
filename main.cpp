#include <iostream>
using namespace std;
#include <string.h>
#include "surgery.h"
#include "employee.h"
#include "researchingDoctor.h"
#include "Hospital.h"

Hospital* loadHospitalFromFile(string fileName);

void printDepartmentActivity(const Department& department);

void checkInPatient(Patient& patient, Department& department);

Department* findDepartmentForPatient(const Hospital& hospital, const Patient& patient);

//important for managing the departments
void checkOutPatient(int patientID, Hospital& hospital);

void printListOfLongestSurgeries(int listLength, const Department** allDepartments);

void printListOfSurgeriesWithExceedingETA(const Department** allDepartments);

void printSurgeonsWithExpertise(const char* expertise, const Department** allDepartments);

void printEmployeesAssignedToMultipleDepartments(const Department** allDepartments);

const Patient* getPossibleTestSubjectsForResearchingDoctor(int researchingDoctorID, const Hospital& hospital);

Doctor* getDoctorsWithNumOfDiplomasOrHigher(int numOfDiplomas, const Hospital& hospital);

Hospital* createNewHospital();

int main()
{
    const int HOSPITAL_NAME = 100;
    const char* fileName = "hospital.txt";
    char choice, charBuf[HOSPITAL_NAME];
    bool fcontinue = true;
    int menuSelection;

    Hospital* hospital = nullptr;

    cout <<"Press L to load hospital from file, or any key to create a new Hospital. ";
    cin >> choice;
    if(choice == 'L' || choice == 'l')
    {
        string fileName;
        cout << "Enter the file name: " << endl;
        getline(cin, fileName);
        hospital = loadHospitalFromFile(fileName);
    }
    else
    {
        hospital = createNewHospital();

        cout << "Press + to add a new Department or - to continue: ";
        do
        {
            char* name;
            int maxNumOfDepartmentEmployees, maxNumOfDepartmentPatients;
            cout << "Please enter department name: ";
            cin >> charBuf;
            name = strdup(charBuf);
            cout << "Enter max numbers of employees and patients: ";
            cin >> maxNumOfDepartmentEmployees >> maxNumOfDepartmentPatients;
            (*hospital).addDepartment(Department(name, maxNumOfDepartmentPatients, maxNumOfDepartmentEmployees));
        }while(choice == '+');
    }

    cout << "Today's hospital activity: " << endl;
    for(int i = 0; i < hospital->getCurrentNumOfDepartments(); i++)
    {
        printDepartmentActivity(*((*hospital).getAllDepartments()[i]));
    }


    do
    {
        cout << "Please choose one of the following options:" << endl;
        cout << "0 - check in patient" << endl;
        cout << "1 - check out patient" << endl;
        cout << "2 - show longest surgeries details" << endl;
        cout << "3 - show surgeries details with exceeding ETA" << endl;
        cout << "4 - show surgeons with a certain expertise" << endl;
        cout << "5 - show list of hospital employess that belong to more than one department" << endl;
        cout << "6 - find possible test subjects for a certain researching doctor" << endl;
        cout << "7 - find doctors with given amount of diplomas or more" << endl;
        cout << "8 or any other number - end program" << endl;

        cin >> menuSelection;

        switch (menuSelection)
        {
            case 0:
            {
                int id, genderIO;
                eGender gender;
                char* name, *allergie;
                char* dob;
                cout << "Patients' ID: ";
                cin >> id;
                cout << endl;
                cout << "Press 0 for MALE, 1 for FEMALE: ";
                cin >> genderIO;
                gender = (eGender)genderIO;
                cout << endl;
                cout << "Enter the patient's name: ";
                cin >> charBuf;
                name = strdup(charBuf);
                cout << endl;
                cout << "Enter the patients' date of birth in the format dd/mm/yy: ";
                cin >> charBuf;
                dob = strdup(charBuf);
                cout << endl;
                Patient patient(id, name, dob, gender);

                do
                {
                    cout << "Any know allergies ? (Y/N)";
                    cin >> choice;
                    if(choice == 'Y' || choice == 'y')
                    {
                        cout << "Allergie: ";
                        cin >> charBuf;
                        allergie = strdup(charBuf);
                        patient.addAllergie(allergie);
                    }
                }while(choice == 'Y' || choice == 'y');

                Department* d = findDepartmentForPatient(*hospital, patient);
                checkInPatient(patient, *d);
                break;
            }

            case 1:
            {
                int id;
                cout << "Enter ID of patient to check out: ";
                cin >> id;
                checkOutPatient(id, *hospital);
                break;
            }

            case 2:
            {
                int numSurgeriesToFind;
                cout << "Please enter list length: ";
                cin >> numSurgeriesToFind;
                printListOfLongestSurgeries(numSurgeriesToFind, (*hospital).getAllDepartments());
                break;
            }

            case 3:
            {
                printListOfSurgeriesWithExceedingETA((*hospital).getAllDepartments());
                break;
            }

            case 4:
            {
                char *expertiseToFind;
                cout << "Please enter expertise required: ";
                cin >> charBuf;
                expertiseToFind = strdup(charBuf);
                printSurgeonsWithExpertise(expertiseToFind, (*hospital).getAllDepartments());
                break;
            }

            case 5:
            {
                printEmployeesAssignedToMultipleDepartments((*hospital).getAllDepartments());
                break;
            }

            case 6:
            {
                int empID;
                cout << "enter the doctors' employeeID: ";
                cin >> empID;
                getPossibleTestSubjectsForResearchingDoctor(empID, *hospital);
                break;
            }

            case 7:
            {
                int numOfDiplomas;
                cout << "please enter required num of diplomas: ";
                cin >> numOfDiplomas;
                getDoctorsWithNumOfDiplomasOrHigher(numOfDiplomas, *hospital);
            }

            default:
            {
                fcontinue = false;
            }

        }
    }while(fcontinue);

    return 0;
}

Hospital* createNewHospital()
{
    string name;
    int numDepartments;

    cout << "Please enter the hospitals' name: " << endl;
    getline(cin, name);
    cout << "How many departments ? : " << endl;
    cin >> numDepartments;

    Hospital hospital(name, numDepartments);
    return &hospital;
}


