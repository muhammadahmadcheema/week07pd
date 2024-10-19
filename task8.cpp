#include<iostream>
#include<iomanip>
using namespace std;

void cargofinder(int count);

main(){
    
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;

    cargofinder(count);

}

void cargofinder(int count){

    float tonnage = 0;
    float total, minibus, truck, train;

    for(int i=1; i <= count; i++){


        cout << endl << "Enter the tonnage of cargo: " << i << ": ";
        cin >> tonnage;

        total = tonnage + total;

        if(tonnage <= 3){
            minibus = minibus + tonnage;
        }

        if(tonnage > 3 && tonnage <= 11){
            truck = truck + tonnage;
        }

        if(tonnage > 11){
            train = train + tonnage;
        }
    }

    float avgprice = ((minibus * 200)+(truck * 175)+(train * 120)) / total;
    float percminibus = minibus / total * 100;
    float perctruck = truck / total * 100;
    float perctrain = train / total * 100;

    cout << endl << fixed << setprecision(2) << avgprice;
    cout << endl << fixed << setprecision(2) << percminibus << "%";
    cout << endl << fixed << setprecision(2) << perctruck << "%";
    cout << endl << fixed << setprecision(2) << perctrain << "%";

}