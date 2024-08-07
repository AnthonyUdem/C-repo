#include <iostream>
#include <vector>
using namespace std;

//number menu list

int main()
{
    char menu_choice {};
    vector <double> list{};

    do{
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> menu_choice;

        if (menu_choice == 'p' || menu_choice == 'P'){
            if (list.empty()){
                cout << "[] - the list is empty!" << endl;
            }
            else{
                cout << "[";
                for (auto num: list)
                    cout << " " << num << " " ;
                cout << "]" << endl;}
        }
        else if (menu_choice == 'a' || menu_choice == 'A'){
                int add_list {};
                cout << "Enter an integer to add to the list: ";
                cin >> add_list;
                list.push_back(add_list);
                cout << "\n" << add_list << " added" << endl;
        }
        else if (menu_choice == 'm' || menu_choice == 'M'){
                if (list.empty()){
                    cout << "Unable to calculate the mean - no data!" << endl;}
                else {
                        double sum {};
                        for (auto num: list)
                            sum += num;
                        double mean = sum / list.size();
                        cout << "Mean of elements in the list is " << mean << endl;}
        }
        else if (menu_choice == 's' || menu_choice == 'S'){
                double smallest_number = list.at(0);
                if (list.empty()){
                    cout << "Unable to determine the smallest number - list is empty!" << endl;}
                else for (auto num: list){
                        if (num < smallest_number)
                            smallest_number = num;}
                    cout << "The smallest number is " << smallest_number << endl;
        }
        else if (menu_choice == 'l' || menu_choice == 'L'){
                double largest_number = list.at(0);
                if (list.empty()){
                    cout << "Unable to determine the largest number - list is empty!" << endl;}
                else for (auto num: list){
                        if (num > largest_number)
                            largest_number = num;}
                    cout << "The largest number is " << largest_number << endl;
        }
        else if (menu_choice == 'q' || menu_choice == 'Q'){
                cout << "Goodbye..." << endl;
        }else
                cout << "Unknown selection, please try again." << endl;

    }   while (menu_choice != 'q' && menu_choice != 'Q');
        return 0;
}