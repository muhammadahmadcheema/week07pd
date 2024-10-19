#include<iostream>
using namespace std;

void amplify(int num);

main(){
    int num;
    cout << "Enter the number to amplify: ";
    cin >> num;

    amplify(num);
}

void amplify(int num){

    for(int count = 1; count <= num; count ++){
        if(count % 4 == 0){
            int amplify = count * 10;
            cout << amplify << ", ";
        }
        else if(count % 4 != 0){
            cout << count << ", ";
        }

    }

}