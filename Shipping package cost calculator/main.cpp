#include <iostream>
#include <iomanip>
using namespace std;

//Shipping package cost calculator

int main(){
    cout << "Welcome to the Shipping package cost calculator." << endl;
    cout << "All dimensions must be 10 inches or less, or we cannot ship it!" << endl;

    int length{}, width{}, height{};
    cout << "\nEnter the length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    int max_length {10}, max_width {10}, max_height {10};
    double base_cost {2.50}, ten_percent {0.01}, twenty_five_percent {0.25};

    int package_volume = length * width * height;
    cout << fixed << setprecision(2);
    if (length > max_length || width > max_width || height > max_height){
        cout << "Sorry, out of bound! we cannot ship  it." << endl;
    }else
            if (package_volume > 500){
            base_cost += base_cost * twenty_five_percent;
            cout << "The volume of your package is: " << package_volume << endl;
            cout << "The cost is: $" << base_cost << " to ship." << endl;
        }else if (package_volume > 100){
                base_cost += base_cost * ten_percent;
                cout << "The volume of your package is: " << package_volume << endl;
                cout << "The cost is: $" << base_cost << " to ship." << endl;
            }
            else {
                cout << "The volume of your package is: " << package_volume << endl;
                cout << "The cost is: $" << base_cost << " to ship." << endl;
            }
    cout << "Thanks for shipping with Lonasctech." << endl;
    }
