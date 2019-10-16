#include "String.h"

void String::copy(const String& other)
{
    if(other.str)
    {
        this->str = new char[strlen(other.str) + 1];
        if(!other.str)
        {
            cout << "Error!" << endl;
        }
        strcpy(this->str,other.str);
        this->len = other.len;
        }
        else
        {
            this->str = NULL;
            this->len = 0;
        }
}
void String::erase()
{
    delete [] this->str;
}

String::String()
{
    this->str = NULL;
    this->len = 0;
}

String::String(const String& str1)
{
        copy(str1);
}

String& String::operator=(const String& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

String::~String()
{
    this->erase();
}

int String::getLen() const
{
    return this->len;
}

const char* String::getString() const
{
    return this->str;
}





