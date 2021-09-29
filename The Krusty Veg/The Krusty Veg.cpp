#include "KrustyMenu.h"
#include <iostream>
#include <string>

int main()
{
    KrustyMenu K;
    int option;
    cout << " Welcome to the Krusty Veg Restaurant!!" << endl;
    while (true) {
        cout << "\n Select one of the options from our menu\n ";
        cout << "\n 1--> Burger of lentils";
        cout << "\n 2--> Burger of chickpeas";
        cout << "\n 3--> Burger of quinoa";
        cout << "\n 4--> Burger of beans";
        cout << "\n 5--> Burger of seeds";
        cout << "\n 6--> Quit";
        cout << "\n Enter your choice: ";
        cin >> option;
        switch (option) {
        case 1: K.burgerLentils();
            break;
        case 2: K.burgerCPeas();
            break;
        case 3: K.burgerQuinoa();
            break;
        case 4: K.burgerBeans();
            break;
        case 5: K.burgerSeeds();
            break;
        case 6: exit(0);
            break;
        default:
            cout << "\n Please choose a valid option!\n";
            exit(0);
        }       
        cout << " Thank you! Your lunch pays another one!\n";
        cout << "\n Anything else? ";
        cout << "\n Select one more or press 0 to exit the application\n";
        cout << "\n ======================================================================\n";
    }
    system("pause");
    return 0;   
}


