#include <iostream>

using namespace std;

int main()
{

    /* Program rozwiazujacy rownanie liniowe Ax+B=0*/
    float a,b;
    cout<<"Podaj wartosc wspolczynnika przy x (A)"<<endl;
    cin>>a;
    cout<<"Podaj wartos wyrazu wolnego (B)"<<endl;
    cin>>b;
    if(a==0){
            if(b==0){
                cout<<"Rownanie tozsamosciwowe, ma nieskonczenie wiele rozwiazan"<<endl;
            }else{
                cout<<"Rownanie sprzeczne, brak rozwiazan"<<endl;
            }
    }else{
        cout<<"Rozwiazanie rownania to "<<-b/a;
    }

}
