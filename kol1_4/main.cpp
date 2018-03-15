#include <iostream>

using namespace std;

int main()
{
    /* Program wczytujacy 3 liczby i wyswietlajacy najmniejsza z nich */
    float a,b,c;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
    cout<<"Podaj trzecia liczbe"<<endl;
    cin>>c;
    /* porownywanie liczb */
    if(a>b and a>c){
        cout<<"Najwieksza liczba to: "<<a;
    }else if(b>a and b>c){
        cout<<"Najwieksza liczba to: "<<b;
    }else if(c>a and c>b){
        cout<<"Najwieksza liczba to: "<<c;
    }else if(a==b and a==c){
        cout<<"Najwieksza liczba to: "<<a;
    }else if(b==a and b==c){
        cout<<"Najwieszka liczba to: "<<b;
    }else if(c==a and c==b){
        cout<<"Najwieksza liczba to: "<<c;
    }else if(a>b and a==c){
        cout<<"Najwieszka liczba to: "<<a;
    }else if(b>a and b==c){
        cout<<"Najwieszka liczba to: "<<b;
    }else if(c>a and c==b){
        cout<<"Najwieksza liczba to: "<<c;
    }

}
