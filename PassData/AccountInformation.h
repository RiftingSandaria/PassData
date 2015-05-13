//
//  AccountInformation.h
//  PassData
//
//  Created by Adish Betawar on 4/9/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#ifndef PassData_AccountInformation_h
#define PassData_AccountInformation_h
#include "EaseOfAccesss.h"

class Account
{
private:
    string username, password; // account common traits for logins
    int userId; // every user is associated with a random generated 8-digit number to uniquely identify them as owners of their account info.
    string userPassword;
    string securityQuestionAnswer1;
    string securityQuestionAnswer2;
public:
    Account(); // default constructor for user Accounts for
    void Input_Account_info(); // user input for logging into the system
    friend bool operator ==(const Account& ac1, const Account& ac2);
    friend bool operator !=(const Account& ac1, const Account& ac2);
    friend ostream& operator << (const ostream& outs, const Account& ac2);
    friend istream& operator >> (const istream& ins , const Account& ac1);
};



#endif
