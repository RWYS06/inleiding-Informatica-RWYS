#include <iostream>
#include <limits> 

using namespace std;
double getNumericInput(const string &prompt) {
    double input;
    while (true) {
        cout << prompt;
        cin >> input;

        if (cin.fail()) {
             cin.clear(); 
              cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
               cout << "Je denkt je bent heel grappig he? Voer een NUMMER in.\n";
          } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            return input;
        }
    }
}

int main() {
    cout << "Welcome!\n";

    double num1 = getNumericInput("Voer het eerste nummer in: ");
    double num2 = getNumericInput("Voer het tweede nummer in: ");

    double som = num1 + num2;
    cout << "De som van " << num1 << " en " << num2 << " is " << som << ".\n";

    return 0;
}