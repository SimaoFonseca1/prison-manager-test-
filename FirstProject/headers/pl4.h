//
// Created by uni on 30/03/22.
//

#ifndef FIRSTPROJECT_PL4_H
#define FIRSTPROJECT_PL4_H
class Calculator
{
private:
    double op1, op2;
public:
    Calculator();
    void setOp(double op1,double op2);
    double add();
    double sub();
    double div();
    int mod();
    double mul();
};
class Date{
private:
    int day;
    int month;
    int year;
    bool isValid(int d, int m, int y);
public:
    Date();
    Date(int d, int m, int y);
    void setDate(int d, int m, int y);
};
#endif //FIRSTPROJECT_PL4_H
