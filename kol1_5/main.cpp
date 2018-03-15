#include <iostream>

using namespace std;

int main()
{
    /* program podajacy najwieksza  liczbe */
    long a,b,c;
    long m=-999999;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
    cout<<"Podaj trzecia liczbe"<<endl;
    cin>>c;
    if(b>m){
        m=b;
    }
    if(a>m){
        m=a;
    }
    if(c>m){
        m=c;
    }
    cout<<"Najwieksze jest: "<<m;

}
