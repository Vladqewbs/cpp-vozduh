#include <iostream>
#include <string.h>
const int nameLeangth = 30;
const int tabelNumberLeangth = 30;

struct Rabotyaga
{
    char name[nameLeangth],secondNamne[nameLeangth],fatherName[nameLeangth],tabelNumber[tabelNumberLeangth];
    int year, month,workHours;

    Rabotyaga(char* _name,char* _secondName,char* _fatherName,char* _tabelNumber,int _year,int _month,int _workHours) :year(_year),month(_month),workHours(_workHours)
    {
        strncpy(name, _name, nameLeangth);
        strncpy(secondNamne, _secondName, nameLeangth);
        strncpy(fatherName, _fatherName, nameLeangth);
        strncpy(tabelNumber, _tabelNumber, nameLeangth);
    }
};

int main()
{
    
}


