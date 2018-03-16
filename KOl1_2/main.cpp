#include <iostream>

using namespace std;

int main()
{
    int max=0;
    int n;
    cout<<"Program wyswietla najwieksza liczbe z wprowadzonych"<<endl;
    cout<<"Ile elementow ma miec tablica? "<<endl;
    cin>>n;
    int tab[n];
    cout<<"Wprowadz elementy do tablicy"<<endl;
    for(int i=0; i<n; i++){
        cin>>tab[i];
    }
    cout<<"Wprowadzone elementy to: "<<endl;
    for(int i=0; i<n; i++){
        cout<<tab[i]<<" ";
    }

    for(int i=0; i<n; i++){
        if(tab[i+1]>tab[i]){
            max=tab[i];
        }
    }
    cout<<"\nNajwikeszy element to: "<<max;


}
