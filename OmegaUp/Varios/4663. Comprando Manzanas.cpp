#include <iostream>

using namespace std;
long long int num;
int main()
{
    cin >> num;
    num/=12;
    cout << num << " ";
    if(num == 1){
        cout << "docena de manzanas.";
    } else {
        cout << "docenas de manzanas.";
    }

    return 0;
}