#include <iostream>

using namespace std;

int main()
{
    /* Program sumujacy 10 podanych liczb */
    float a,i=0,d=0;
    cout<<"Podaj 10 liczb"<<endl;
    while(i<10){
        cin>>a;
        d=d+a;
        i++;
    }
    cout<<"Suma liczb wnosi :"<<d;
}
