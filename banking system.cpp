#include <iostream>
#include <iomanip> 
using namespace std; 


void showBalance(double balance) {
   
    cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
}


double deposit() {
    double amount = 0;
    cout << "Enter the amount to be deposited: ";
    cin >> amount;

    if (amount < 0) {
        cout << "Invalid amount. Please enter a positive number." << endl;
        return 0;
    } else {
        return amount;
    }
}

double withdraw(double balance) {
    double amount;
    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;

   
    if (amount > balance) { 
        cout << "Transaction failed: Insufficient balance." << endl;
        return 0; 
    } 
   
    else if (amount <= 0) {
        cout << "Invalid amount. Please enter a value greater than zero." << endl;
        return 0; 
    }
    else {
        return amount; 
    }
}

int main() {
    double balance = 0; 
    int option; 

    do {
        cout << "\n***************************** " << endl;
        cout << "   BANKING MANAGEMENT SYSTEM  " << endl;
        cout << "***************************** " << endl;
        cout << "1. View Balance " << endl;
        cout << "2. Deposit Money " << endl;
        cout << "3. Withdraw Money " << endl;
        cout << "4. Exit " << endl;
        cout << "Choose an operation (1-4): ";
        cin >> option;

        switch (option) {
            case 1:
                showBalance(balance); 
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                
                balance -= withdraw(balance); 
                showBalance(balance);
                break;
            case 4:
                
                break;
            default:
                cout << "Error: Please enter a valid menu option." << endl;
                break;
        }

    } while (option != 4); 

    cout << "Thank you for using our banking system. Goodbye!" << endl;

    return 0;
}