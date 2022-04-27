//
// Created by uni on 20/04/22.
//

#include<iostream>
#include<pl7.h>
using namespace std;

void reverseStr(string &Str)
{
    char aux;
    int size=Str.length();
    vector <Professor> profs;
    for (int i=0; i<size/2; i++)
    {
        aux=Str[i];
        Str[i]=Str[size-1-i];
        Str[size-1-i]=aux;
    }
}



