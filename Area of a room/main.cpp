#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

int main(){
    //calculating the area of a room in square feet.

    cout << "Calculating the area of a room in square feet." << endl;
    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "The area of the room in square feet is: " << room_length * room_width << endl;

    return 0;
}
