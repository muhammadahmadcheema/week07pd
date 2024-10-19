#include<iostream>
using namespace std;

void printstars(int rowsize);

main(){

    int rowsize;
    cout <<"Enter the desired number of rows: ";
    cin >> rowsize;
    printstars(rowsize);
}


void printstars(int rowsize){

    for(int row = rowsize; row >= 0; row--){

        for(int col = row; col >= 0; col--){
            cout << "*";
        }

        cout << endl;
    }

}