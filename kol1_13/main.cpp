#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /* Program obliczajacy rownanie kwadratowe Ax^2+Bx+C=0 */

    float a,b,c,x1,x2,delta;
    cout<<"Podaj wspolczynnik A"<<endl;
    cin>>a;
    cout<<"Podaj wspolczynnik B"<<endl;
    cin>>b;
    cout<<"Podaj wspolczynnik C"<<endl;
    cin>>c;
    // Sprawdzenie czy rownanie jest kwadratowe
    if(a==0){
        cout<<"Rownanie jest pierwszego stopnia"<<endl;
        if(b==0){
            if(c==0){
                cout<<"Rownanie jest tozsamosciowe"<<endl;
            }
            else{
                cout<<"Rownanie jest sprzeczne";
            }

        }else{
            cout<<"Rozwiazanie rownania ma postac "<<(-c)/b;
        }
    }
    else{
        cout<<"Rownanie jest drugiego stopnia"<<endl;
        // oliczamy rowanie drugiego stopnia, delta i pierwisatki
        delta=b*b-(4*a*c);
        if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<"Rozwiazania rownania to x1="<<x1<<" oraz x2="<<x2;
        }
        else if(delta==0){
            x1=-b/(2*a);
            cout<<"Rozwiazanie rownania to x="<<x1;
        }
        else if(delta<0){
            cout<<"Rownanie nie ma rozwiazan";
        }
    }
}
