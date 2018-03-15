#include <iostream>

using namespace std;

int main()
{
    /* Program obliczajcy silnie */
    int a,silnia=1;
    cout<<"Podaj liczbe, aby obliczyc jej silnie"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        silnia=silnia*i;
    }
    cout<<"Silnia wynosi "<<silnia;
}
