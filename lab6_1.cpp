#include<iostream>
using namespace std;

int main(){
    int num;
    int i = 0;
    int Even = 0;
    int Odd = 0;
    while (i < 1){
        cout << "Enter an integer: ";
        cin >> num;
        if(num == 0){
            i++;
        }
        else if (num %2==0){
            Even++;
        }
        else if (num %2!=0){
            Odd++;
        }
     }
    
cout << "#Even numbers = " << Even <<"\n";

cout << "#Odd numbers = " << Odd;
return 0;
}