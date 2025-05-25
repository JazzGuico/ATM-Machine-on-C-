#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
using namespace std;

string accName;
int accN;
int depAmo;
int accBal;
int accNum;

void accDetails() 
{
    cout << "Enter Name: ";
    cin.ignore();
    getline (cin, accName);
    cout <<"Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Balance: ";
    cin >> accBal;
}

void accData () 
{
    system ("cls");
    cout << "Amount name is " << accName;
    cout << "\nAccount Number is " << accNum;
    cout << "\nAmount balance is " << accBal;
    cout << endl;
}

void deposit() 
{
    system ("cls");
    cout << "Enter ammount to deposit : ";
    cin >> depAmo;
    accBal = accBal + depAmo;
    cout << "The current balance is : " << accBal;
    cout << endl;
}

void balance () 
{
    system ("cls");
    cout << "Your Accoutn name " << accName;
    cout << "Your account balance is " << accBal;
    cout << endl;
}

void withdraw () 
{
    system ("cls");
    int wit;
    cout << "Enter amount to withdraw : ";
    cin >> wit;
    accBal = accBal - wit;
    cout << "Your current balance is " << accBal;
    cout << endl;
}

int main (){
    int choice;
    while (1)
    {
        cout << "\n[1] Enter Account Details";
        cout << "\n[2] View Account Details";
        cout << "\n[3] Deposit";
        cout << "\n[4] Show Balance";
        cout << "\n[5] Withdraw";
        cout << "\n[6] Exit";
        cout <<"\nEnter your choice : ";
        cin >> choice;
        cout << endl;
        switch(choice)
        {
            //if choice is equal to 1
            case 1: 
            accDetails();
            break;
            //if choice is equal to 2
            case 2:
            accData();
            break;
            //if choice is equal to 3
            case 3:
            deposit();
            break;
            //if choice is equal to 4
            case 4:
            balance();
            break;
            //if choice is equal to 5
            case 5:
            withdraw ();
            break;
            //if choice is equal to 6
            case 6:
            exit(1);
            break;
            default:
            cout << "/nInvalid choice";
        }
    }
    
    
return 0;    
}

