#include <iostream>

using namespace std;

int main()
{
    /* Program wczytujacy liczbe n i obliczajacy sume od 1 do n */
    int n,i=0,suma=0;
    cout<<"Podaj ile liczbe"<<endl;
    cin>>n;
    while(i<=n){
        suma=suma+i;
        i++;
    }
    cout<<"Suma wynosi "<<suma;
}
