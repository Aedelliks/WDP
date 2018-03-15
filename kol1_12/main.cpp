#include <iostream>

using namespace std;

int main()
{
    /* Za pomoca petli oblicz sume liczb od 1 do 10 */
    int i=0,suma=0;
    while(i<=10){
        suma=suma+i;
        i++;
    }
    cout<<"suma wynosi "<<suma;
}
