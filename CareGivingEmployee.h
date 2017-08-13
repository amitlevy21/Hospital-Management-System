#ifndef CAREGIVINGEMPLOYEE_H_INCLUDED
#define CAREGIVINGEMPLOYEE_H_INCLUDED

class CareGivingEmployee
{
public:
    // i think eCare should be in visit consult Moshe
    enum eCare
    {
        FIRST_AID, TESTS, SURGERY_PREP, SURGERY
    };

    CareGivingEmployee(eCare typeOfCare);


private:
    eCare typeOfCare;
};

#endif // CAREGIVINGEMPLOYEE_H_INCLUDED
