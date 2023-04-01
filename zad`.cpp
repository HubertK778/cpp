#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

int checkNumber(int number) {

}

vector<int> generateNumbers(int count) {
  srand (time(NULL));
  vector<int> randomVector;

  for (int i = 0; i <= count; i++){
    int random = rand() % 10 + 0;
    randomVector.push_back(random);
  }

  return randomVector;
}

int main() {
  int randomNubers;
  
  cout << "Ile liczb wygenerowac: ";
  cin >> randomNubers;

  // vector<int> sth = generateNumbers(10);

  // for (auto it = sth.begin(); it != sth.end(); ++it) {
  //   cout << *it << " ";
  // };

  for (int i = 0; i < 10; i++)
  {
    cout << 1;
  }
  

  return 0;
}
