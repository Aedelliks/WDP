#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /* program sprawdzajcy czy podane boki tworza trojkat,
    jezeli tak to obliczane jest jego pole */

    float a,b,c,o,p;
    cout<<"Podaj dlugosci bokow potencjalnego trojkata"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    //sprawdzenie warunku i obliczenie pola
    if((a+b)>c or (a+c)>b or (b+c)>a){
        o=(a+b+c)/2;
        p=sqrt(o*(o-a)*(o-b)*(o-c));
        if(a==o or b==o or c==o){
            cout<<"Podane dlugosci bokow nie tworza trojkata: ";
        }else{
        cout<<"Podane dlugosci tworza trojkat o polu: "<<p;
        }
    }else{
        cout<<"Podane dlugosci bokow nie tworza trojkata";
    }
}
