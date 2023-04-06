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

int checkParity(int number, bool onlySize = false, bool parity = false) {
    vector<int> numberArray = convertToArray(number);
    int parityCounter = 0;

    if (onlySize)
        return numberArray.size();
    else
        for (int item : numberArray) {
            if (parity && item % 2 == 0)
                parityCounter++;
            else if (!parity && item % 2 != 0)
                parityCounter++;
        }
    
    return parityCounter;
}


int main() {
    int number;

    cout << "Podaj liczbe trzycyfrowa: ";
    cin >> number;
    cout << "Ilosc podanych cyfr: " << checkParity(number, true) << endl;
    cout << "Liczb parzystych...: " << checkParity(number, false, true) << endl;
    cout << "Liczb nieparzystych: " << checkParity(number, false, false);
}
