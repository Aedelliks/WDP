#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Program wpisuje elementy do tablicy i je nastepnie wyswietla"<<endl;
    cout<<"Ile elementow ma miec tablica? "<<endl;
    cin>>n;
    cout<<"Wprowadz elementy"<<endl;
    int tab[n];
    for(int i=0; i<n; i++){
        cin>>tab[i];
    }
    cout<<"Wyœwietlenie tablicy"<<endl;
    for(int i=0; i<n; i++){
        cout<<tab[i]<<" ";
    }
    cout<<"Wyswietlenie elementow w odwrotnej kolejnosci"<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<tab[i]<<" ";
    }
}
