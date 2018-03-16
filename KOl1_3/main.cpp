#include <iostream>

using namespace std;
//wyswietl ile razy zostalo wprowadzone zero i numery odpowiednich pozycji
int main()
{
    int n=15;
    cout<<"Wprowadz 15 elementow do tablicy"<<endl;
    int tab[n];
    int x=0;
    for(int i=0; i<n; i++){
            cin>>tab[i];
            if(tab[i]==0){
                x=x+1;
            }

    }
    for(int i=0; i<15; i++){
        cout<<tab[i]<<" ";
    }
    if(x==0){
        cout<<"\nNie wprowadzono ani razu cyfry 0"<<endl;
    }
    else{
    cout<<"\nZero zostalo wprowadzone "<<x<<" razy"<<endl;
    for(int i=0; i<n; i++){
        if(tab[i]==0){
            cout<<"zero zosta³o zapisane na indeksie: "<<i<<endl;
        }
    }
}
}
