#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
    //Deklaracja potrzebnych zmiennych
    int number;
    int sum = 0;
    int singleNumber;
    string wholeSum;

    cout << "Podaj liczbe szesciocyfrowa: ";
    cin >> number;
    cout << endl;
    //konwersja podanej liczby na typ string
    string stringNumber = to_string(number);

    //sumowanie każdej cyfry z liczby
    while (number != 0) {
        singleNumber = number % 10;
        sum = sum + singleNumber;
        number = number / 10;
    }

    //przygotowanie wyniku do wyświetlenia
    for (int i = 0; i < stringNumber.length(); i++) {
        wholeSum = wholeSum + stringNumber[i] + " + ";
    }
    wholeSum.erase(wholeSum.length() - 3, 3);

    cout << wholeSum << " = " << sum;

    return 0;
}
