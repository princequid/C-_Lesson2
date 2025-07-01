#include <iostream>

using namespace std;
int main() {
    /*withdraw a maximum of 500
    withdraws > 300 charge = (0.04*amount)/300
    insufficient money
    informs customer and gives him an option to withdraw money
    at a charge of 25
    no money or negative
    The ATM denies withdraw
    Amount is > 500 informs about the max
    entries
    amount to be withdrawn
    debits account and service charges
    main balance
    balance1  balance2 balance3
     */
    string name;
    int accountNumber;
    float withdrawalAmount;
    float debit;
    float balance;
    float mainBalance;
    float balance1;
    float balance2;
    float balance3;
    float charge;
    int borrow;
    float totalAmount;

    cout<<"Enter your surname: \n";
    cin>>name;
    // Customer enters the allocated account number
    cout<<"Enter your account number: \n";
    cin>>accountNumber;
    balance1=2500;
    balance2 =100;
    balance3=-200;
    //checking for the validity of account number
    if (accountNumber==123451 ||accountNumber==123452||accountNumber==123453) {
        if (accountNumber == 123451) {
            mainBalance = balance1;
        }else if (accountNumber == 123452) {
            mainBalance = balance2;
        }else if (accountNumber == 123453) {
            mainBalance = balance3;
        }else {
            cout<<"Wrong account number. \n";
        }//program terminate after wrong account number input
    }else{ cout<<"Enter a valid account number \n";
        return 0;
    }
    //Customer enters an amount to withdraw which should be less than or equal to $500
    cout<<"Enter your amount to withdraw: \n";
    cin>>withdrawalAmount;
        //checking for the withdrawal amount and processing the charges
        if (withdrawalAmount<= 500 && withdrawalAmount > 0) {
            if(  withdrawalAmount <= mainBalance) {
                if (withdrawalAmount > 300) {
                    charge=(0.04*withdrawalAmount)/300;
                }else{charge=0;}
                balance=mainBalance - (withdrawalAmount + charge);

            } else if ( withdrawalAmount > mainBalance && mainBalance > 0) {
                cout<<"Insufficient balance. \n";
                cout<<"Current balance: $" <<mainBalance <<endl;
                cout<<"Enter 1 to borrow from us or 0 to exit: \n";
                cin>>borrow;
                if (borrow == 1) {
                    charge= 25 ;
                }else{charge=0, withdrawalAmount = 0;}
                balance=mainBalance - (withdrawalAmount + charge);
            }else if ( mainBalance <=0) {
                cout<<"No money in your account or you are owing the bank already.  \n";
                cout<<"Top up to withdraw. \n";
                return 0;
            }
            //printing out the details of the transaction
            totalAmount = withdrawalAmount + charge;
            cout<<"*********************************** \n";
            cout<<"          ATM TRANSACTION \n";
            cout<<"*********************************** \n";
            cout<<"TERMINAL#                  A63B555 \n";
            cout<<"DATE:              10:32 01/07/2025 \n";
            cout<<"CARD NUMBER:               " <<accountNumber <<endl;
            cout<<"CUSTOMER NAME:             " <<name <<endl;
            cout<<"REQUESTED AMOUNT:          $" <<withdrawalAmount <<endl;
            cout<<"TERMINAL FEE:              $" <<charge <<endl;
            cout<<"TOTAL AMOUNT:              $" <<totalAmount <<endl;
            cout<<"AMOUNT WITHDRAWN:          $"<<withdrawalAmount <<endl;
            cout<<"BALANCE:                   $" <<balance <<endl;
            cout<<" \n";
            cout<<"*********************************** \n";
        }else {
            cout<<"You have exceeded the maximum withdrawal amount of $500 \n";
        }
}