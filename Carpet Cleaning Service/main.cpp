#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Carpet Cleaning Service
int main(){
    cout << "Hello! welcome to Lonasctech's Carpet Cleaning Service." <<endl;

    const float small_room_price {25};
    const float large_room_price {35};
    const float sales_tax_rate {0.06};
    const int estimates_validity {30}; //days

    cout << "price per small room: $" << small_room_price << endl;
    cout << "price per large room: $" << large_room_price << endl;

    int small_room_number {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_room_number;

    int large_room_number {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_room_number;

    cout << "\nEstimate for carpet cleaning service.\n";

    cout << "Number of small rooms: " << small_room_number << endl;
    cout << "Number of large rooms: " << large_room_number << endl;
    cout << "price per small room: $" << small_room_price << endl;
    cout << "price per large room: $" << large_room_price << endl;

    double small_room_total {small_room_number * small_room_price};
    double large_room_total {large_room_number * large_room_price};
    double cost {small_room_total + large_room_total};
    cout << "Cost: $" << cost << endl;

    double tax {cost * sales_tax_rate};
    cout << "Tax: $" << tax << endl;

    cout << "----------------------------------" << endl;

    double estimate {cost + tax};
    cout << "Total estimate: $" << estimate << endl;
    cout << "This estimate is valid for " << estimates_validity << " days!" << endl;

    cout << "-----------------------------------" << endl << endl;
    return 0;

}






/*
int main()
{
    //Welcome note
    cout << "Hello, welcome to Lonasctech's carpet cleaning service." << endl << endl;


    const double price_per_room {30};
    const float tax_rate {0.06};
    const int estimate_validity {30}; //days

    cout << "Price per room is $" << price_per_room << endl;

    int number_of_rooms {0};
    cout << "How many room would you like cleaned? ";
    cin >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service:\nNumber of rooms: " << number_of_rooms << endl;
    double price_of_rooms {number_of_rooms * price_per_room};
    cout << "cost: $" << price_of_rooms << endl;

    cout << "Tax rate is 6%" << endl;
    double tax {price_of_rooms * tax_rate};
    cout << "Tax: $" << tax << endl;

    cout << "================================" << endl << endl;

    double total_estimate {price_of_rooms + tax};
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_validity << " days!" << endl;

    return 0;
}
*/
