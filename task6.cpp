#include<iostream>
using namespace std;

int primorial(int num);
bool prime(int num);

main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = primorial(num);
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


int primorial(int num){

int i = 2;
int product = 1;
int count = 1;

while(count <= num){
    if(prime(i)){
        product = product * i;
        count++;
    }
        i++;
}
    return product;
}