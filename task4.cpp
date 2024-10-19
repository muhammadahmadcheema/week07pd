#include<iostream>
using namespace std;

void triangle(int num);

main(){

    int num;
    cout << "Enter number of triangle: ";
    cin >> num;

    triangle(num);
}

void triangle(int num){
int triangle = 0;
int add = 0;
    for(int count = 1; count <= num; count++){
        triangle = triangle + add;
        add = add + 1;
        triangle = triangle + 1;
    }
    cout << triangle;
}

