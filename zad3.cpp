#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> convertToArray(int number) {
    vector<int> numberArray;

    while (number > 0) {
        numberArray.push_back(number % 10);
        number /= 10;
    }

    return numberArray;
}

string checkParity(int number, bool deep = false) {
    vector<int> numberArray = convertToArray(number);
    string isParity = "TAK";
    bool notParity = false;
    bool parity = false;

    for (int item : numberArray) {
        if (item % 2 != 0) {
            isParity = "NIE";
            notParity = true;
        }
        else parity = true;
    }

    if (deep && notParity && parity)
        return "TAK";
    else if (deep && !notParity || !parity)
        return "NIE";
    else return isParity;
}


int main() {
    int number;

    cout << "Podaj liczbe trzycyfrowa: ";
    cin >> number;
    cout << "Podana liczba sklada sie tylko z liczb parzystych: " << checkParity(number);

    cout << endl << "Podaj liczbe trzycyfrowa: ";
    cin >> number;
    cout << "Podana liczba sklada sie tylko z liczb parzystych: " << checkParity(number);

    cout << endl << "Podaj liczbe trzycyfrowa: ";
    cin >> number;
    cout << "Podana liczba sklada sie z liczb parzystych i nieparzystych: " << checkParity(number, true);
}
