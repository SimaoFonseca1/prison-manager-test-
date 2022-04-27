//
// Created by uni on 30/03/22.
//

#include <iostream>
#include "pl4.h"
using namespace std;
Calculator::Calculator(){
    this->op1 = this->op2 = 0;
}
void Calculator::setOp(double op1,double op2){
    this->op1 = op1;
    this->op2 = op2;
}
double Calculator::add(){
    return this->op1 + this->op2;
}
double Calculator::sub(){
    return this->op1 - this->op2;
}
double Calculator::div(){
    if(this->op2 != 0){
        return this->op1 / this->op2;
    }
    return 0;
}
int Calculator::mod(){
    if((int)this->op2 != 0){
        return (int)this->op1 % (int)this->op2;
    }
    return 0;
}
double Calculator::mul(){
    return this->op1 * this->op2;
}

Date::Date() {
    this->day=1;
    this->month=1;
    this->year=1900;
}
Date::Date(int d, int m, int y) {
    if (this->isValid(d, m, y)) {
        this->day = d;
        this->month = m;
        this->year = y;
    }
}
bool Date::isValid(int d, int m, int y){
        if (d<=0 || m<=0 || y<=0)
        {
            return false;
        }
        int days_month[12]={31,28,31,30,31,30,31,30,31,30,31,30};
        if (d<= days_month[m-1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
void Date::setDate(int d, int m, int y){

    }


