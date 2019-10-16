#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char* str;
    int len;
    void copy(const String& other);
    void erase();
public:
    String();
    String(const String&);
    String& operator=(const String& other);
    ~String();

    int getLen() const;
    const char* getString() const;
};
