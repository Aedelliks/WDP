#include <iostream>

using namespace std;

int main()
{

    /* Program obliczajacy n-ty wyraz ciagu Fibonacciego */

    int a,f1=0,f2=1,f3;
    cout<<"Ktory wyraz ciagu Fibonacciego obliczyc ?"<<endl;
    cin>>a;
    if(a==1){
        cout<<"Pierwszy wyraz ciagu wynosi: 0"<<endl;
    }else if(a==2){
        cout<<"Drugi wyraz ciagu wynosi: 1"<<endl;
    }else{
    for(int i=3;i<=a;i++){
        // Poniiewa¿ pierwsze dwa wyrazy sa dane zaczynamy obliczanie od 3-ciego wyrazu
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    cout<<a<<" wyraz ciagu wynosi: "<<f3;
    }


}
