#include <iostream>

using namespace std;

int main()
{
    int podstawa, wykladnik;
    int wynik = 1;

    cout << "Potegowanie - wersja 2.0" << endl;

    cout << "\n Podstawa: ";
    cin >> podstawa;

    cout << "\n Wykladnik: ";
    cin >> wykladnik;

    for(int i = 0; i < wykladnik; i++)
        wynik *= podstawa;

    cout <<"\n " << podstawa << " do potegi " << wykladnik << " = " << wynik << endl;

    return 0;
}
