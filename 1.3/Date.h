/*
    Esteban Sierra Baccio
    A00836286
    10 Sep 2023
*/

#include <iostream>     // "iostream" permite la interacción con la termimnal
#include <string.h>     // "string.h" permite el uso de la clase *string*

class Date{
    private:
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        int millisecond;
    public:

    // Constructores
        Date(int years, int months, int days, int hours, int minutes, int seconds, int milliseconds){year = years;month = months;day = days;hour = hours;minute = minutes;second = seconds;millisecond = milliseconds;};
        Date(int years, int months, int days, int hours, int minutes, int seconds){year = years;month = months;day = days;hour = hours;minute = minutes;second = seconds;millisecond = 0;};
        Date(int years, int months, int days, int hours, int minutes){year = years;month = months;day = days;hour = hours;minute = minutes;second = 0;millisecond = 0;};
        Date(int years, int months, int days, int hours){year = years;month = months;day = days;hour = hours;minute = 0;second = 0;millisecond = 0;};
        Date(int years, int months, int days){year = years;month = months;day = days;hour = 0;minute = 0;second = 0;millisecond = 0;};
        Date(int years, int months){year = years;month = months;day = 0;hour = 0;minute = 0;second = 0;millisecond = 0;};
        Date(int years){year = years;month = 0;day = 0;hour = 0;minute = 0;second = 0;millisecond = 0;};
        Date(){year = 0;month = 0;day = 0;hour = 0;minute = 0;second = 0;millisecond = 0;};

    // Set Methods
        void setYear(int num);          // Entrada: un número que obtendrá el valor del año. Salidas: Null
        void setMonth(int num);         // Entrada: un número que obtendrá el valor del mes. Salidas: Null
        void setDay(int num);           // Entrada: un número que obtendrá el valor del día. Salidas: Null
        void setHour(int num);          // Entrada: un número que obtendrá el valor de la hora. Salidas: Null
        void setMinute(int num);        // Entrada: un número que obtendrá el valor del minuto. Salidas: Null
        void setSecond(int num);        // Entrada: un número que obtendrá el valor del segundo. Salidas: Null
        void setMillisecond(int num);   // Entrada: un número que obtendrá el valor del milisegundo. Salida: Null

    // Get Methods
        int getYear();                  // Entrada: Null. Salida: Un entero que representa el año
        int getMonth();                 // Entrada: Null. Salida: Un entero que representa el mes
        int getDay();                   // Entrada: Null. Salida: Un entero que representa el dia
        int getHour();                  // Entrada: Null. Salida: Un entero que representa la hora
        int getMinute();                // Entrada: Null. Salida: Un entero que representa el minuto
        int getSecond();                // Entrada: Null. Salida: Un entero que representa el segundo
        int getMillisecond();           // Entrada: Null. Salida: Un entero que representa el milisegundo
        std::string formatDate();       // Entrada: Null. Salida: Un string que representa la fecha en el siguiente formato: dd/mm/aaaa
        std::string getTime();          // Entrada: Null. Salida: Un string que representa la hora en el siguiente formato hh:mm:ss
        std::string toString();         // Entrada: Null. Salida: Un entero que representa la fecha entera
        std::string formatNumber(int value);    // Entrada: un número entero.  Salida: un string que representa el número dado en formato Date
        int getMonthAsNumber(string value); // Entrada: un string. Salida: Un número que representa el valor.

    // Sobrecarga de operadores
        bool operator > (const Date& b);
        bool operator < (const Date& b);
        Date operator + (const Date& b);
};

void Date::setYear(int num){year = num;};
void Date::setMonth(int num){month = num;};
void Date::setDay(int num){day = num;};
void Date::setHour(int num){hour = num;};
void Date::setMinute(int num){minute = num;};
void Date::setSecond(int num){second = num;};
void Date::setMillisecond(int num){millisecond = num;};

int Date::getYear(){return year;};
int Date::getMonth(){return month;};
int Date::getDay(){return day;};
int Date::getHour(){return hour;};
int Date::getMinute(){return minute;};
int Date::getSecond(){return second;};
int Date::getMillisecond(){return millisecond;};

std::string Date::getTime(){

    std::string horaStr = formatNumber(hour);
    std::string minuStr = formatNumber(minute);
    std::string seguStr = formatNumber(second);

    return horaStr + ":" + minuStr + ":" + seguStr;
};

std::string Date::formatDate(){
    std::string yearStr = formatNumber(year);
    std::string monthStr = formatNumber(month + 1);
    std::string dayStr = formatNumber(day);

    return dayStr + "/" + monthStr + "/" + yearStr;
};

std::string Date::toString(){
    return formatDate() + " " + getTime();
};

std::string Date::formatNumber(int number){
    std::string valueStr;
    number<10 ? valueStr = "0" + std::to_string(number) : valueStr = std::to_string(number);
    return valueStr;
}

// SOBRECARGA DE OPERADORES

Date Date::operator + (const Date& b) {
    int newYear = this->year + b.year;
    int newMonth = this->month + b.month;
    int newDay = this->day + b.day;
    int newHour = this->hour + b.hour;
    std::cout << hour << std::endl;
    int newMinute = this->minute + b.minute;
    int newSecond = this->second + b.second;
    int newMillisecond = this->millisecond + b.millisecond;
    return Date(newYear, newMonth, newDay, newHour, newMinute, newSecond, newMillisecond);
}

bool Date::operator < (const Date& b){
    if(this->year != b.year)
        return this->year < b.year;
    else if(this -> month != b.month)
        return this->month < b.month;
    else if(this -> day != b.day)
        return this -> day < b.day;
    else if(this -> hour != b.hour)
        return this -> hour < b.hour;
    else if(this -> minute != b.minute)
        return this -> minute < b.minute;
    else if(this -> second != b.second)
        return this -> second < b.second;
    else if(this -> millisecond != b.millisecond)
        return this -> millisecond < b.millisecond;
    else return false;
}

bool Date::operator > (const Date& b){
    if(this->year != b.year)
        return this->year > b.year;
    else if(this -> month != b.month)
        return this->month > b.month;
    else if(this -> day != b.day)
        return this -> day > b.day;
    else if(this -> hour != b.hour)
        return this -> hour > b.hour;
    else if(this -> minute != b.minute)
        return this -> minute > b.minute;
    else if(this -> second != b.second)
        return this -> second > b.second;
    else if(this -> millisecond != b.millisecond)
        return this -> millisecond > b.millisecond;
    else return false;
}
