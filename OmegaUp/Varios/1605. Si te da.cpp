#include <iostream>

using namespace std;
int inicio,Final,i=0,ant,sig,resul,pasos=0;
int main()
{
    cin>>inicio>>Final;
    cout<<inicio<<" "<<Final<<" ";
    while(ant!=inicio or sig!=Final){
        if(pasos==0){
            ant=inicio;
            sig=Final;
        }
        resul=(ant+sig)%10;
        cout<<resul<<" ";
        ant=sig;
        sig=resul;
        pasos++;
    }
    cout<<endl<<pasos;
    return 0;
}