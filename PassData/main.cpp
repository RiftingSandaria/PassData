//
//  main.cpp
//  PassData
//
//  Created by Adish Betawar on 4/9/15.
//  NO PART OF THIS CODE CAN BE COPIED AT ANY TIME FOR ANY REASON UNDER PENALTY OF LAW
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include "Pass_data.h"
#include "EaseOfAccesss.h"
#include "AccountInformation.h"
int main()
{
    Pass_data entry("", "", "");
    ofstream storage;
    cout << "Welcome to BlueWing: " << endl;
    int numberOption;
    while (3)
    {
    cout << "Enter menu option\n-----------------\n\n\t 1. Enter New Entry\t\t2. Edit Existing entry\n";
    string option = "";

        while (option != "yes")
        {
            cin >> numberOption;
            if (numberOption == 1)
            {
                entry.Input();
                entry.OutputConsole(entry);
                cout << "Is this information correct?\n";
                cin >> option;
                if (option == "yes")
                {
                    cout << "Information will be saved to file\n";
                    entry.OutputFile(entry, storage);
                }
                else if (option == "no")
                {
                    cout << "Information will be discarded\n";
                    continue;
                    
                }
                else if (option != "yes" || option != "no")
                {
                    cout << "\nInvalid answer.\nEnter yes or no to proceed\n";
                    continue;
                }
            }
            if (numberOption == 2)
            {
                cout << "This feature is under construction\n";
                continue;
                break;
            }
            if (numberOption != 1 || numberOption != 2)
            {
                cout << "\n\n\nBlueWing will now exit.\n Have a good day\n" << "Program terminated";
                break;
            }
        }
        break;
    }
    return 0;
}