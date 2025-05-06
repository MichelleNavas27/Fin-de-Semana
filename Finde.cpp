#include <iostream>
#include <string>

using namespace std;

int main(){
    // Declaration of variables and the result
    string User1, result;
    int x = 123, suboption, option, suboption1, suboption2;

    /*Request the user to enter the username and password*/
    cout << "*****************Welcome to the program******************* ";
    cout << endl;

    // Ask the user to enter the name to go out for a walk
    cout << "Enter user: ";
    cin >> User1;

    // Password entry
    cout << "Enter the user's password: ";
    cin >> x;
    if (x == 123)
    {
        cout << "Access granted" << endl;

        // Display the options menu to choose the activity to perform
        cout << "Select an option:" << endl;
        cout << "1.Cinema" << endl;
        cout << "2.Museum" << endl;
        cout << "3.Park" << endl;
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
                cout << "Movie options:" << endl;
                cout << "1. Spiderman" << endl;
                cout << "2. another movie" << endl;
                cout << "Option: ";
                cin >> suboption;
            
            if (suboption == 1)
            {
                cout << "You chose to watch the Spiderman movie" << endl; }
                else if (suboption == 2)
                {
                    cout << "I will wait for another function" << endl;
                }
                else
                {
                    cout << "Invalid option" << endl;
                }
        
            break;
        
        case 2:
        cout << "Museum Options:" << endl;
                cout << "1. National Museum of Anthropology" << endl;
                cout << "2. another Museum" << endl;
                cout << "Option: ";
                cin >> suboption1;
                if (suboption1 == 1)
                {
                    cout << "You chose the anthropology museum" << endl; 
                }
                    else if (suboption1 == 2)
                    {
                        cout << "Choose another museum" << endl;
                    }
                    else
                    {
                        cout << "Invalid option" << endl;
                    }
            break;

        case 3:
        cout << "Park options:" << endl;
        cout << "1. Bicentennial Park" << endl;
        cout << "2. another park" << endl;
        cout << "Option: ";
        cin >> suboption2;
        if (suboption2 == 1)
        {
            cout << "You chose the anthropology museum" << endl; 
        }
            else if (suboption2 == 2)
            {
                cout << "Choose another museum" << endl;
            }
            else
            {
                cout << "Invalid option" << endl;
            }
    break;

        default:
            cout << "Invalid option, please enter an option within the aforementioned activities: " << option << endl;
            break;
        }
    }
    else
    {
        cout << "Access denied" << endl;
    } 

    return 0; // Fin del programa
}

    

    return 0; // Fin del programa
}
