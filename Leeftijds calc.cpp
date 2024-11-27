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
               cout << "Je denkt je bent heel grappig he? Voer je geboorte jaar in.\n";

          } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            return input;
        }
    }
}

void NewFunction()
{
}
int main() {
    cout << "Welcome naar mijn leeftijd's bereken code!\n";

    double Jaar = getNumericInput("Voer je geboorte jaar in! ");
   
    double Leeftijd = 2024 - Jaar;
    cout << "je leeftijd is " << Leeftijd << " .\n";
    return 0;
}