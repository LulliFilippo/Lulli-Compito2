/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.
Lulli Filippo 03/03/2022
NOME COGNOME DATA
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i<n)
  {
   cout<<"Bada come la fuma"<<endl; 
   i++;
  }
  system("pause");
}
