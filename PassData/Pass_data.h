//
//  Pass_data.h
//  PassData
//
//  Created by Adish Betawar on 4/9/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#ifndef PassData_Pass_data_h
#define PassData_Pass_data_h

#include <String>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;

class Pass_data
{
private:
    string username, websiteName, password;
public:
    Pass_data();
    Pass_data(string username, string websitename, string password); // copy constructor
    void Input();
    void OutputConsole(Pass_data data); // data is outputted to the console
    void OutputFile(Pass_data data, ofstream& file); // data is outputted to a file.
    // overload operators use for class
    friend bool operator ==(const Pass_data& ac1, const Pass_data& ac2);
    friend bool operator !=(const Pass_data& ac1, const Pass_data& ac2);
    // overloading extraction and insertion operators
    friend ostream& operator << (ostream& outs, const Pass_data& ac2);
    friend istream& operator >> (istream& ins , const Pass_data& ac2);
    void EditDataEntry(Pass_data entry,  ifstream& file); // extract information from the database
};




#endif
