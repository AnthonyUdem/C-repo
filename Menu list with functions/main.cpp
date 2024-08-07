#include <iostream>
#include <vector>
using namespace std;
//Number menu list
    char choice {};
    vector <double> list{};

void print_menu_list(){
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the simplest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number in the list" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
}
void print_list(){
    if (list.empty()) {
        cout << "[ ] - the list is empty" << endl;
    } else {
        cout << "[ ";
        for (auto num: list)
            cout << num << " ";
        cout << "]" << endl;
    }
}
void print_added_number(){
      int add_number {};
        cout << "Enter the number to be added: ";
        cin >> add_number;
        list.push_back(add_number);
        cout << add_number << " added." << endl;

}
void print_mean(){
    if (list.empty()){
        cout << "unable to calculate mean; [ ] - no data!" << endl;
    }
    else{
        double total {};
        for (auto num: list)
            total += num;
        double mean = total / list.size();
        cout << "The mean number is: " << mean << endl;
}}
void print_smallest_number(){
    if (list.empty()){
        cout << "Unable to determine the smallest number; [ ] -  the list is empty!" << endl;
    }
    else{
        double smallest = list.at(0);
        for (auto num: list){
            if (num < smallest)
                smallest = num;
        }
        cout << "The smallest number is: " << smallest << endl;
}}
void print_largest_number(){
    if (list.empty()){
        cout << "Unable to determine the largest number; [ ] -  the list is empty!" << endl;
    }
    else{
        double largest = list[0];
        for (auto num: list){
            if (num > largest)
                largest = num;
    }
        cout << "The largest number is: " << largest << endl;
}}
void find_number(const vector <double> &v){
    int target {};
    cout << "Enter the number to find: ";
    cin >> target;
    if (v.empty())
        cout << "Unable to find a value; [] - list is empty" << endl;
    else
        for (auto num: v)
            if (num == target)
        cout << target << " was found." << endl;
            else
        cout << target << " was not found." << endl;
}

int main()
{
    do{
        print_menu_list();
        if (choice == 'p' || choice  == 'P'){
            print_list();
        }
        else if (choice == 'a' || choice  == 'A'){
          print_added_number();
        }
        else if (choice == 'm' || choice  == 'M'){
            print_mean();
        }
        else if (choice == 's' || choice  == 'S'){
            print_smallest_number();
        }
        else if (choice == 'l' || choice  == 'L'){
            print_largest_number();
        }
        else if (choice == 'f' || choice == 'F'){
            find_number(list);
        }
        else if (choice == 'q' || choice  == 'Q'){
            cout << "Thanks for patronizing Lonasctech.\nGoodbye..." << endl;
        }
        else
            cout << "Unknown selection; Please try again!" << endl;

    }while (choice != 'q' && choice  != 'Q');

    cout << endl;
    return 0;
}