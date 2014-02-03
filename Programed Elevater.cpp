#include <iostream>

using namespace std;


int main()
{

int FloorLeaval = 0;

cout << "Pleas enter a floor number: 1 - 5 \n";
cin >> FloorLeaval;

switch(FloorLeaval)
    {
        case 1:
        cout << "You enterd " << FloorLeaval;
        cout << "Closeing all doors...";
        break;
        case 2:
        cout << "You enterd " << FloorLeaval;
        cout << "Closeing all doors...";
        break;
        case 3:
        cout << "You enterd " << FloorLeaval;
        cout << "Closeing all doors...";
        break;
        case 4:
        cout << "You enterd " << FloorLeaval;
        cout << "Closeing all doors...";
        break;
        case 5:
        cout << "You enterd " << FloorLeaval;
        cout << "Closeing all doors...";
        break;
        default:
        cout << "Invalid input!";
    }
return 0;
}
