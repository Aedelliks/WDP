#include <iostream>

using namespace std;

int main()
{
    /* Wczytaj 10 liczb i wyswietl najwieksza */
    int max;
    int tablica[10];
    cout<<"Podaj 10 liczb"<<endl;
    for(int i=0;i<10;i++){
        cin>>tablica[i];
    }
    max=0;
    for(int i=0; i<10; i++){
        if(tablica[i]>max){
            max=tablica[i];
        }
    }
    cout<<"Najwieszka liczba wynosi "<<max;
}
