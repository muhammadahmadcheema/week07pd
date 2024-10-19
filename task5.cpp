#include<iostream>
using namespace std;

bool prime(int num);

main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    bool result = prime(num);
    cout << endl << result;
}

bool prime(int num){
    if(num < 2){
        return false;
    }
    for(int count = 2; count < num; count++){
        if(num % count == 0){
            return false;
        }
    }
    return true;
}