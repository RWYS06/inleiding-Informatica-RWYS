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
               cout << "Je weet dat dat geen nummer is. Voer je nummer in\n";

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
    cout << "Welcome naar mijn 2 getallen alleen calculator\n";
    char op;
    cout << " voer +, -, * of / in om aan te geven welke operatie je wilt uitvoeren";
    cin >> op ;
    double num1 = getNumericInput("Voer je eerste nummer in. ");
    double num2 = getNumericInput("Voer je tweede nummer in. ");

    switch (op) {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;

    default:
        cout << "je hebt geen van de aangegeven operaties ingevoerd, voer +, -, *, of / in!";
        break;
    }

 return 0;
}
