// Academic Integrity Affidavit:
// I certify that this program code is my work.  Others may have
// assisted me with planning and concepts, but the code was written,
// solely, by me.
// I understand that submitting code that is totally or partially
// the product of other individuals is a violation of the Academic
// Integrity Policy and accepted ethical precepts. Falsified
// execution results are also results of improper activities. Such
// violations may result in zero credit for the assignment, reduced
// credit for the assignment, or course failure.
//
// Name: <Armin Rejaie>
// Section: <001>
// Assignment: LabProj7 mystring2.cpp


//File: mystring1.cpp
// ================
// Implementation file for user-defined String class.
#include <cstring>
#include "mystring2.h"
#pragma warning(disable:4996)   // disbale the unsafe warning message to use strcpy_s(), etc


String::String()
{
    contents = new char[1];
    contents[0] = '\0';
    len = 0;
}

String::String(const char s[])
{
    len = strlen(s);
    contents = new char[len + 1];
    strcpy(contents, s);
}

void String::append(const String& str)
{
    if (str.len == 0)
    {
        return;
    }

    int newLen = len + str.len;
    char* newOne = new char[newLen + 1];

    if (contents) 
    {
        strcpy(newOne, contents);
    }
    else 
    {
        newOne[0] = '\0';  
    }

    strcat(newOne, str.contents);
    delete[] contents;
    contents = newOne;
    len = newLen;
}

String::~String()
{
    delete[] contents;
}

String::String(const String& origStr)
{
    len = origStr.len;
    contents = new char[len + 1];
    strcpy(contents, origStr.contents);
}

String &String::operator=(const String& origStr)
{
    if (this == &origStr)  
        return *this;


    delete[] contents;  

    len = origStr.len;
    contents = new char[len + 1];  
    strcpy(contents, origStr.contents);  

    return *this;
} 


bool String::operator ==(const String& str) const
{
    return strcmp(contents, str.contents) == 0;
}

bool String::operator !=(const String& str) const
{
    return strcmp(contents, str.contents) != 0;
}

bool String::operator >(const String& str) const
{
    return strcmp(contents, str.contents) > 0;
}

bool String::operator <(const String& str) const
{
    return strcmp(contents, str.contents) < 0;
}


bool String::operator >=(const String& str) const
{
    return strcmp(contents, str.contents) >= 0;
}

String String::operator +=(const String& str)
{
    append(str);
    return *this;
}

void String::print(ostream& out) const
{
    out << contents;
}

int String::length() const
{
    return len;
}

char String::operator [](int i) const
{
    if (i < 0 || i >= len) {
        cerr << "can't access location " << i
            << " of string \"" << contents << "\"" << endl;
        return '\0';
    }
    return contents[i];
}

ostream& operator<<(ostream& out, const String& s) // overload ostream operator "<<" - External!
{
    s.print(out);
    return out;
}


/*
Initial values:
str1 holds "" (length = 0)
str2 holds "init2" (length = 5)
str3 holds "init3" (length = 5)

Enter a value for str1 (no spaces): red

Enter a value for str2 (no spaces): yellow

Enter a value for str3 (no spaces): blue

After assignments...
str1 holds "red" (length = 3)
str2 holds "yellow" (length = 6)
str3 holds "blue" (length = 4)

Enter which element of str1 to display: 1
Element #1 of str1 is 'e'

Enter which element of str2 to display: 2
Element #2 of str2 is 'l'

Enter which element of str3 to display: 3
Element #3 of str3 is 'e'

Enter a value to append to str1 (no spaces): rose

Enter a value to append to str2 (no spaces): house

Enter a value to append to str3 (no spaces): sky

After appending...
str1 holds "redrose" (length = 7)
str2 holds "yellowhouse" (length = 11)
str3 holds "bluesky" (length = 7)

Comparing str1 and str2...
"redrose" is less than "yellowhouse"

test the = operator, after str1 = str2;
str1 holds "yellowhouse" (length = 11)
str2 holds "yellowhouse" (length = 11)

After str1 = str1 + s1:
str1 holds "yellowhouserose" (length = 15)
str2 holds "yellowhouse" (length = 11)

test the copy constructor, after str4(str3);
str3 holds "bluesky" (length = 7)
str4 holds "bluesky" (length = 7)

after appending str3 by str2
str3 holds "blueskyyellowhouse" (length = 18)
str4 holds "bluesky" (length = 7)

str2, str4 are not changed. Type any letter to quit.
s
*/