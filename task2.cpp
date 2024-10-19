#include<iostream>
using namespace std;

void upper(int rowsize);
void lower(int rowsize);

main(){

    int rowsize;
    cout << "Enter desired number of rows: ";
    cin >> rowsize;

    rowsize = rowsize /2;

    upper(rowsize);
    lower(rowsize);
}

void upper(int rowsize){

    for(int row = 1; row <= rowsize; row++){
        for(int col = 1; col <= rowsize - row; col++){
            cout << " ";
        }
        for(int col = 1; col <= row; col++){
            cout << "*";
        }

        cout << endl;
    }

}

void lower(int rowsize){

    for(int row = rowsize; row >= 1; row--){
        for(int col = 1; col <= rowsize - row; col++){
            cout << " ";
        }
        for(int col = 1; col <= row; col++){
            cout << "*";
        }

        cout << endl;
    }


}