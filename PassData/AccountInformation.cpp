//
//  AccountInformation.cpp
//  PassData
//
//  Created by Adish Betawar on 4/9/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//
#include <fstream>
#include "AccountInformation.h"


Account person;

Account::Account()
{
    username = "Sample";
    password = "********";
    userId = 55555555;
}

// overloading the binary operator <
friend bool operator <(const Account& ac1, const Account& ac2)
{
    return (ac1.userId < ac2.userId);
}

// overloading the binary operator ==
friend bool operator ==const Account& ac1, const Account& ac2)
{
    if (ac1.username == ac2.username)
        if (ac1.password == ac2.password)
                return true;
    return false;
}

// overloading binary operator !=
friend bool operator !=(const Account& ac1, const Account& ac2)
{
    return ~(ac1 == ac2);
}

// streaming binary operator <<
friend ostream& operator << (const ostream& outs, const Account& ac2)
{
    outs << "Username: " << ac2.username << endl;
    outs << "Password: " << ac2.password << endl;
    outs << "User Id: " << ac2.userId << endl;
}

// streaming binary operator >>
friend istream& operator >> (const istream& ins , const Account& ac1)
{
    cin >> ac1.username;
    cin >> ac1.password
    cin >> ac1.userId;
}
