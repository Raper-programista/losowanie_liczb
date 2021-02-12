#include <iostream>
#include <vector>
#include <time.h> 
using namespace std;

int main() {
  int count;
  int interval;
  srand (time(NULL));

  cout << "Podaj dwie liczby (od 20 do 70): ";
  cin >> count;
  cin >> interval; 

  vector <int> wart;

  for (int i=0; i <= count; i++)
  {
    int number = rand() % (interval+1); // +1 bo ma być od zera do interval włącznie
    wart.push_back(number);
  }
 


  return 0;
}