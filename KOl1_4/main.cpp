#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int k=5;
    cout<<"Wprowadz 5 elementow do tablicy"<<endl;
    int tab[n];
    int tab2[k];
    for(int i=0; i<n; i++){
        cin>>tab[i];
    }
    for(int i=0; i<n; i++){
        if(tab[i]==0){
            cout<<"zero zosta³o zapisane na indeksie: "<<i<<endl;
        }
    }
}

