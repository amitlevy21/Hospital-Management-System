#ifndef DOCTOR_H_INCLUDED
#define DOCTOR_H_INCLUDED

class doctor : virtual public CareGivingEmployee // not sure
{
public:
    doctor(CareGivingEmployee& CGEmployee, int numOfDiplomas, char* fieldOfExpertise);
    doctor(doctor& other) = delete;
    virtual ~doctor();

protected:
    int numOfDiplomas;
    char* fieldOfExpertise;
};

#endif // DOCTOR_H_INCLUDED
