#include <iostream>

using namespace std;
//change cents
/*
user should enter an amount in cents: cent entered is greater than or equal to zero
display: you can provide change for this change in the US as follows:
display the change in dollars:   // 1 dollar is 100 cents
display the change in quarters:  // 1 quarter is 25 cents
display the change in dimes:     // 1 dimes is 10 cents
display the change in nickels:   // 1 nickel is 5 cents
display the change in pennies:   // 1 penny is 1 cent
*/

int main()
{
    cout << "Welcome to the cent change calculator.\nEnter an amount in cents, I will provide you with the change in "
            "dollars, quarters, dimes, nickels, and pennies." << endl;

    int cent{0};
    cout << "\nEnter an amount in cents: " ;
    cin >> cent;
    cout << "\nHere are your change as follows: " << endl;

    const int dollars {100}, quarters {25}, dimes {10}, nickels {5}, pennies {1};

    //int dollars_result {}, dollars_modulo {};
    int dollars_result = cent / dollars;
    cout << "dollars:  " << dollars_result << endl;
    int dollars_modulo = cent % dollars;

    //int quarters_result {}, quarters_modulo {};
    int quarters_result = dollars_modulo / quarters;
    cout << "quarters: " << quarters_result << endl;
    int quarters_modulo = dollars_modulo % quarters;

    //int dimes_result {}, dimes_modulo {};
    int dimes_result = quarters_modulo / dimes;
    cout << "dimes:    " << dimes_result << endl;
    int dimes_modulo = quarters_modulo % dimes;

    //int nickels_result {}, nickels_modulo {};
    int nickels_result = dimes_modulo / nickels;
    cout << "nickels:  " << nickels_result << endl;
    int nickels_modulo = dimes_modulo % nickels;


    int pennies_result = nickels_modulo / pennies;
    cout << "pennies:  " << pennies_result << endl;

    cout << "\nThanks for visiting Lonasctech; Use wisely..." << endl;

    cout << endl;
    return 0;

}
