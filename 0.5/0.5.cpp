#include <iostream>
using namespace std;
int main()
{   
    float a, b, c;
    int somma, media, prodotto;
    cout<<"Inserisci il primo numero ";
    cin>>a;
    cout<<"Inserisci il secondo numero ";
    cin>>b;
    cout<<"Inserisci il terzo numero ";
    cin>>c;
    somma = a+b+c;
    media = somma/3;
    prodotto = a*b*c;
    cout<<"somma= "<<somma<<endl<<"media= "<<media<<endl<<"prodotto= "<<prodotto<<endl;
    return 0;
}