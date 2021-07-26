#include <iostream>

using namespace std;
int n1,n2,grande1=0,grande2=0,chico1,chico2,med1,med2,decena=0,total=0,i,j,k,l,m;
int main()
{
    cin>>n1>>n2;
    med1=n1;
    med2=n2;
    while(med1>0 or med2>0){
        if(med1>9){
           grande1=((med1/10)*10);
        } else {
            grande1=0;
        }
        if(med2>9){
           grande2=((med2/10)*10);
        } else {
            grande2=0;
        }
        chico1=med1-grande1;
        chico2=med2-grande2;
        if(chico1+chico2+decena>9){
            total++;
            decena=1;
        } else {
            decena=0;
        }
        if(med1>0)med1/=10;
        if(med2>0)med2/=10;
    }

    cout << total << endl;
    return 0;
}