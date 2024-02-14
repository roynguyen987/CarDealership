#include <iostream>
#include "Car.h"
#include "Dealership.h"
using namespace std;

void dealershipConfig(Dealership d){
    int choice = 99;
    while (choice != 0) {
        cout << "Select an option.\n1. View cars in Dealership.\n2. Add a new Car to dealership\n3. Delete a Car in dealership. \n4. Exit.\n";
        cin >> choice;
        int year1;
                string make1;
                string model1;
                double price1;
                int id1;
                string used1;
                bool used2;
                int removeId;
        switch (choice) {
            case 1: //View the cars in the Dealership
                d.printCars();
                break;
            case 2: //Add a new car to the Dealership
                cout << "Enter the year of the car: ";
                cin >> year1;
                cout << "Enter the make of the car: ";
                cin >> make1;
                cout << "Enter the model of the car: ";
                cin >> model1;
                cout << "Enter a unique id for the car (integer only): ";
                try{
                    cin >> id1;
                } catch(invalid_argument const& ex) {
                    cout << "Error, not an integer: " << ex.what() << '\n';
                    break;
                }
                cout << "Enter the price of the car: ";
                cin >> price1;
                cout << "Used? Y/N";
                cin >> used1;
                if(used1 == "Y"){
                    used2 = true;    
                }
                else if(used1 == "N"){
                    used2 = false;
                }
                else{
                    cout << "Error, invalid input." << endl;
                    break;
                }
                d.addCar(Car(make1,model1,year1,id1, price1,used2));
                cout << "Car added successfully!"<<endl;
                break;
            case 3: //Remove a car from the Dealership
                cout << "Enter the ID of the car to be removed." << endl;
                cin >> removeId;
                d.deleteCar(removeId);
                cout << "The selected car has been removed." << endl;
                break;
            case 4:
                return;

                


                
            
        }
    }



}


int main() {
    int choice = 999;
    string tempDealerName;
    vector <Dealership> dealershipList;
    int index = -1;
    int dealershipChoice; 
    int choiceIndex = 99;
    while(choice != 0){
        cout << "Select an option.\n1. Select a dealership.\n2. Add a new Dealership\n3. Exit. \n";
        cin >> choice;
        switch (choice) {
            case 1:
            if (!dealershipList.empty()) {
                cout << "Choose the number of the dealership you want to select:\n";
                for (int i = 0; i < dealershipList.size(); i++){
                    cout << i + 1 << ": "<< dealershipList.at(i).name << endl; 
                }
                cin >> dealershipChoice;
                choiceIndex = dealershipChoice - 1;
                if ((choiceIndex >= 0) && (choiceIndex <= dealershipList.size())){
                    index = choiceIndex;
                } else{
                    cout << "Invalid input, please enter a number between 1 and " << dealershipList.size() << "\n";
                    cerr << "Invalid input! Please enter a number between 1 and " << dealershipList.size() << "\n";
                    cout << "Invalid selection, please try again." << endl; 
                    break;
                }
                dealershipConfig(dealershipList.at(choiceIndex));
            case 2:
                cout << "Enter the name of the dealership: \n";
                cin >> tempDealerName;
                dealershipList.push_back(Dealership(tempDealerName));
                cout << "Dealership added successfully. \n" ;
                break;

            case 3:
                return 0;

    }
    }
    }



    return 0;
}
