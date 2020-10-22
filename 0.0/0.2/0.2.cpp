#include <iostream>
using namespace std;
int main()
{   
    int a, b, somma, prodotto, differenza, quoziente, resto;
    cout<<"Inserisci il primo numero ";
    cin>> a;
    cout<<"Inserisci il secondo numero ";
    cin>>b;
    somma = a+b;
    prodotto = a*b;
    differenza = a-b;
    quoziente = a/b;
    resto = a%b;
    cout<<"somma="<<somma<<endl<<"prodotto="<<prodotto<<endl<<"differenza="<<differenza<<endl;
        if (b!=0){
        cout<<"quoziente="<<quoziente<<endl<<"resto="<<resto;
        }else{
        cout<<"err: impossibile dividere per 0";
        }
    return 0;
}