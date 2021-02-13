#include <iostream>
#include <vector>
#include <time.h> 
using namespace std;

int checkMinimum(vector<int> tab)
{
  int min = tab[0];
  
  for(int i=1; i<tab.size(); i++)
    if(tab[i] < min)
      min = tab[i];

  return min;
}

int main() {

  int count;
  int interval;
  srand (time(NULL));
  int sum = 0;
  double avrige;
  int minimum;
  int  check = 0;

  //wprowadzenie danych
  cout << "Podaj dwie liczby (od 20 do 70): " << endl << endl;
  cout << "1 liczba to: ";
  cin >> count;
  cout << "2 liczba to: ";
  cin >> interval; 

  if(count < 20 ||
     count > 70 ||
     interval < 20 ||
     interval > 70)
     {
       cout << endl << "Podno błędną wartość";
       return 0;
     }

  vector <int> wart;

  //wypisz tablicę losowymi liczbami
  for (int i=0; i <= count; i++)
  {
    int number = rand() % (interval+1); // +1 bo ma być od zera do interval włącznie
    wart.push_back(number);
  }
   // sumuj co trzecią liczbą 
    for (int i=0; i <= wart.size(); i++)
  {
     if(i%3 == 0)
       sum += wart[3];
   }
   cout << endl << "Suma co 3 elementu tablicy: " << sum << endl;

    //średnia
   avrige = (wart[0] + wart[count-1]) / 2;
   cout << endl << "Średnia z pierwszej i ostatniej: " << avrige << endl << endl;
    
   //Wypisz liczby większe od średniej
   for (int i=0; i <= wart.size(); i++)
   {
     if(wart[i] > avrige)
     {
      if(check++ > 0)    cout << ", ";// wstaw przecinek pomiędzy liczbami
  
      cout << wart[i];
     }
    }

    minimum = checkMinimum(wart);
    cout << endl << endl << "Najmniejsza wylosowana liczba: " << minimum << endl;

    cout << endl << "Wypisz wszystkie: " << endl;

    for(int i=0; i<wart.size(); i++)
      cout <<  wart[i] << " ";     
    
  return 0;
}