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
               cout << "Je weet dat dat geen nummer is. Voer je temperatuur in\n";

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
    cout << "Welcome naar mijn celcius naar fahrenheit converter\n";

    double TemperatuurC = getNumericInput("Voer je temperatuur in. ");
   
    double TemperatuurF = ((TemperatuurC * 9) / 5 + 32);
    cout << "je temperatuur in fahrenheit is " << TemperatuurF << "°\n";
    return 0;
}
