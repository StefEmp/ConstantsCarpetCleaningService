#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    
    const int EachRoomCost{30};
    const int TaxPercent = 6;
    const int Expiry = 30;
    
    cout << "Welcome to Constant Carpets," << endl;
    cout << "\nhow many rooms do you require: ";
    
    int NumberOfRooms{0};
    
    cin >> NumberOfRooms;
    cout << "\nEstimate for your carpet cleaning service"<< endl;
    cout << "Number of Rooms: " << NumberOfRooms << " rooms" << endl;
    
    cout << "The price per room: $" << EachRoomCost;
    
    double NumberOfRoomsCost = NumberOfRooms * EachRoomCost;
    
    cout << "\nCost: $" << NumberOfRoomsCost;
    
    double Percentage = NumberOfRoomsCost * TaxPercent/ 100;
    
    cout << "\nTax:  $" <<  Percentage;
    cout << "\n========================";
    cout << "\nTotal estimate: $" << NumberOfRoomsCost + Percentage;
    cout << "\nThis estimate is valid for " << Expiry << " days\n" << endl;
    
    return 0;
}
