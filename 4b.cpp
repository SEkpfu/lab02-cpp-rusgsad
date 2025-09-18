#include <iostream> 
using namespace std; 
int main() 
{ 
  setlocale(0, ""); 
  int  dM, dW; 
  cout << "Введите дату: \n"; 
  cout << "День месяца: \n";   
  cin >> dM; 
  cout << "Номер дня в неделе: \n";   
  cin >> dW;

  if ((13 == dM || 17 == dM) && (5 == dW || 2 == dW)) 
  cout << "неудачный день "; 
return 0;
}