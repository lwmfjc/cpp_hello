//
// Created by ly on 2024/4/6.
//
#include <iostream>
#ifndef STRNGBAD_H
#define STRNGBAD_H
class StringBad
{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    // friend function
    friend std::ostream & operator <<(std:ostream & os,
    const StringBad & st);
};
#endif //CPP_HELLO_STRNGBAD_H
