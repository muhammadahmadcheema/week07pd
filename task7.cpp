#include<iostream>
using namespace std;

void patients(int visit);

main(){

int visit;

    cout << "Enter number of days you visited hospital: ";
    cin >> visit;

    patients(visit);

}


void patients(int visit){
    
    int doctors = 7;
    int treated = 0;
    int untreated = 0;

    for(int count = 1; count <= visit; count++){
        int patients;

        cout << endl << "No. of patients who visited on day " << count << ":";
        cin >> patients;

            if(count % 3 == 0 && count != 0 && untreated > treated){
            doctors++;
            }

            if(patients <= doctors){
                treated = treated + patients;
            }
            else if(patients > doctors){
                treated = treated + doctors;
            }

            if(patients - doctors >= 0){
                untreated = untreated + (patients - doctors);
            }


    }

    cout << endl << "Treated Patients: " << treated;

    cout << endl << "Untreated Patients: " << untreated;

}