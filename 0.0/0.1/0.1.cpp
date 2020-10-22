#include <iostream>
using namespace std;
int main()
{
    int nfattori, prodotto=1, a;
    cout<<"numero di fattori da moltiplicare= ";
    cin>>nfattori;
    while(nfattori>0){
        cout<<"inserire un numero ";
        cin>>a;
        prodotto*=a;
        nfattori--;
    }
    cout<<"prodotto= "<<prodotto;
}