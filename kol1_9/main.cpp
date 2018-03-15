#include <iostream>

using namespace std;

int main()
{
    /* Program obliczajacy sume i srednia arytmetyczna
    ciagu wprowadzonych znakow, ciag znakow zakonczony 0 */

    float i=0,a,d=0;
    cout<<"Wprowadz ciag znakow"<<endl;
    while(a!=0){
        cin>>a;
        d=d+a;
        i++;
    }
    cout<<"Suma wynosi: "<<d<<endl;
    cout<<"Srednia arytmetyczna wynosi: "<<d/i;
}
