/*
Nombre: Pedro Yazael Mercado Ruano
Registro: 22110125
Grupo: 2P
Materia: POO
Programa: Date Verification
*/

#include <iostream>
#include <cstring>  
#include <stdlib.h>
#include <string.h>
using namespace std;

class Date{
    private: //Data
        int Day;
        int Month;
        int Year;
        char dateString[];
    
    public: //Methods
        Date(char[]); //Constructor
        void stringDivider(char[]);
        void typeChanger(char, char, char);
        void dateVerification(int, int, int);
};

//Initialize Data
Date::Date(char _dateString[20]){
    dateString[20] = _dateString;
}

void Date::stringDivider(char Date[]){
    int i = 0;
    char Day[1];
    char Month[1];
    char Year[3];

    while (i<11){
        if(i>=0 && i<=3){
            Year[i] = Date[i];
        };

        if(i>=5 && i<=6){
            Month[i] = Date[i];
        };

        if(i>=8 && i<=9){
            Day[i] = Date[i];
        };

        i++;
    } 
}


