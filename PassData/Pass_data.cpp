//
//  Pass_data.cpp
//  PassData
//
//  Created by Adish Betawar on 4/15/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <stdio.h>
#include "Pass_data.h"
#include "EaseOfAccesss.h"

Pass_data::Pass_data(string username, string websitename, string password) // default constructor for Password
{
    websiteName = "Example.com";
    username = "Johnny Appleseed";
    password = "*****";
}



void Pass_data::Input()
{
    cout << "Website name: ";
    cin >> websiteName;
    cout << "Username for: " << websiteName << ": ";
    cin >> username;
    cout << "What is the password for \"" << username << "\"?: ";
    cin >> password;
}


void Pass_data::EditDataEntry(Pass_data entry, ifstream& file)
{
    chdir("//users//adish//desktop");
    file.open("database.txt");
    cin >> entry.websiteName;
    cout << entry.websiteName;
    cout << "This function is under construction";
    file.close();
    //    cout << "Which website data are you looking for?";
}



// overload operators
bool operator ==(const Pass_data& ac1, const Pass_data& ac2)
{
    if (ac1.username == ac2.username)
        return true;
    return false;
}

bool operator !=(const Pass_data& ac1, const Pass_data& ac2)
{
    if (ac1.username != ac2.username)
        return true;
    return false;
}

ostream& operator << (ostream& outs, const Pass_data& ac2)
{
    outs << ac2.websiteName << "\n";
    outs << ac2.username << "\n";
    outs << ac2.password << "\n";
    return outs;
}

istream& operator >> (istream& ins , const Pass_data& ac2)
{
    ins >> ac2.websiteName;
    return ins;
}