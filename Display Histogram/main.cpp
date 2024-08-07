#include <iostream>
#include <vector>
using namespace std;

// Displaying Histogram

int main()
{
    cout << "I will convert your data into an histogram." << endl;

    vector <int> data{};
    int num_items {};
    cout << "\nHow many data items do you have to display? ";
    cin >> num_items;

    for (int i {1}; i <= num_items; ++i){
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplaying Histogram..." << endl << endl;

    for (auto val: data){
        for (int i {1}; i <= val; ++i){
            if (i % 5 == 0 ){
                cout << "*";
            }else
                cout << "-";
        }

        cout << endl;
    }

    cout << "\nHistogram display completed; You're welcome." << endl;
    cout << endl;
    return 0;
}
