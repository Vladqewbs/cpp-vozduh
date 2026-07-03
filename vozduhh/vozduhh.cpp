#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
const int nameLeangth = 30;
const int tabelNumberLeangth = 30;
const double tax = 0.12;
const int payPerHour = 100;

struct Rabotyaga
{
    char name[nameLeangth],secondNamne[nameLeangth],fatherName[nameLeangth],tabelNumber[tabelNumberLeangth];
    int year, month,workHours, overtimeWorkHours = 0;

    inline Rabotyaga(const char* _name, const char* _secondName, const char* _fatherName, const char* _tabelNumber,int _year,int _month,int _workHours) :year(_year),month(_month),workHours(_workHours)
    {
        strncpy(name, _name, nameLeangth);
        strncpy(secondNamne, _secondName, nameLeangth);
        strncpy(fatherName, _fatherName, nameLeangth);
        strncpy(tabelNumber, _tabelNumber, nameLeangth);
        
        if (workHours>144)
        {
            overtimeWorkHours = workHours - 144;
            workHours = 144;
        }
    } 
};

int salaryCalculation(Rabotyaga rabotyaga)
{
    int salary = 0;
    salary = ((rabotyaga.workHours * payPerHour) + (rabotyaga.overtimeWorkHours * 2 * payPerHour)) * (1.00 - tax);

    return salary;
}

int main()
{
    Rabotyaga ivan("123", "123", "123", "123", 1, 1, 156);
    
    return salaryCalculation(ivan);
}


