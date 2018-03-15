#include <iostream>

using namespace std;

int main()
{
    /*Program wczytujacy 2 zmienne
    i wyswietlajacy wieksza z nich */

    float a,b;
    cout<<"Poda dwie liczby"<<endl;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"Wieksza liczba to: "<<a;
    }else if(a==b){
        cout<<"Obie liczby sa rowne: a=b => "<<a<<"="<<b;
    }else{
        cout<<"Wieksza liczba to: "<<b;
    }

}
