#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;
//created a class which includes fuctions of bank
class Bank{
    private:
        int pin;
        float balance;
        string name, fname, password, id, phone;
    public:
        void Menu();
        void Bank_management();
        void ATM_management();
        void new_user();
        void already_user();
        void deposite();
        void withdraw();

};
//defining the the fuctions of the class one by one starting with the menu fuction which allow user to choose what bank offers
void Bank::Menu(){
    p:
    int choice;
    {
        system("clear");
        cout<<"\n\n\t\tControl Pannel";
        cout<<"\n\n1. BANK MANAGEMENT";
        cout<<"\n\n2. ATM MANAGEMENT";
        cout<<"\n\n3. EXIT";
        cout<<"\n\nEnter your choice\n";
        cin>>choice;

        switch (choice)
        {
            case 1:{
                system("clear");
                string Email;
                string password;
                int pin;
                
                cout<<"login your account\n";
                cout<<"Enter Email Id\n";
                cin>>Email;
                cout<<"Enter Password\n";
                cin>> password;

                if(Email == "kritika" && password == "01134"){
                    cout<<"Enter your 4 digit pin\n";
                    cin>>pin;
                    cin.ignore();
                    if(pin == 1234){
                        Bank_management();
                    }
                    else{
                        cout<<"Invalid Pin";
                        cin.get();
                    }
                }
                else{
                    cout<<"Email or Password is wrong";
                    cin.get();
                }
                break;
            }

            case 2:
                ATM_management();
                break;

            case 3:
                exit(0);
                break;

            default:
                cout<<"Invalid Choice";
        }
    } 
    getchar();
    goto p;  

    
}

// defining Bank_management
void Bank::Bank_management(){
    p:
    system("clear");
    int choice;
    cout<<"\n\n\n\t\tBank management system";
    cout<<"\n\n 1. New User";
    cout<<"\n\n 2. Already User";
    cout<<"\n\n 3. Deposit";
    cout<<"\n\n 4. Withdraw";
    cout<<"\n\n 5. Transfer Option";
    cout<<"\n\n 6. Payment Option";
    cout<<"\n\n 7. Search User Record";
    cout<<"\n\n 8. Edit User Record";
    cout<<"\n\n 9. Delete User Records";
    cout<<"\n\n 10. Show All Records";
    cout<<"\n\n 11. Payment Records";
    cout<<"\n\n 12. Go back";
    cout<<"\n\n Enter your choice";
    cin>>choice;

    switch(choice){
        case 1:
            new_user();
            break;
        case 2:
            already_user();
            break;
        case 3:
            deposite();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            Menu();
        default:
            cout<<"invalid choice";
    }
    getchar();
    goto p;
}

//defing ATM_management
void Bank::ATM_management(){
    p:
    system("clear");
    int choice;
    cout<<"\n\n\n\t\tATM management system";
    cout<<"\n\n 1. User login and check balance";
    cout<<"\n\n 2. Withdraw amount";
    cout<<"\n\n 3. Account Details";
    cout<<"\n\n 4. Go back";
    cout<<"\n\n Enter your choice";
    cin>>choice;

    switch(choice){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            Menu();
        default:
            cout<<"invalid choice";
    }
    getchar();
    goto p;
}

// defining new user function given in bank management
void Bank::new_user(){
    p:
    system("clear");
    fstream file;
    int p;
    string i, n, f, pa, ph;
    float b;
    cout<<"\n\n\n\t\t\tNew User";
    cout<<"\n\nEnter user id : ";
    cin>>id;
    cout<<"\n\nEnter your password : ";
    cin>>password;
    cout<<"\n\nEnter your name : ";
    cin>>name;
    cout<<"\n\nEnter father name : ";
    cin>>fname;
    cout<<"\n\nEnter your current balance : ";
    cin>>balance;
    cout<<"\n\nEnter your phone number : ";
    cin>>phone;
    cout<<"\n\nEnter your pin : ";
    cin>>pin;

    //making a file to store the above data
    file.open("bank_detail.txt", ios::in);
    if(!file){
        file.open("bank_detail.txt", ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<password<<" "<<balance<<" "<<phone<<" "<<pin;
        file.close();
    }
    else{
        file>>i>>n>>f>>pa>>b>>ph>>p;
        while(!file.eof()){
            if(i==id){
                cout<<"\n\n\tid already exist";
                getchar();
                goto p;
            }
            file>>i>>n>>f>>pa>>b>>ph;
        }
        file.close();
        file.open("bank_detail.txt", ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<password<<" "<<balance<<" "<<phone<<" "<<pin;
        file.close();
    }
    cout<<"\n\n\t\tadded new user succesfully";

}

//defining already user function for bank management
void Bank::already_user(){
    system("clear");
    fstream file;
    cout<<"\n\n\tAlready user";
    string test_id;
    bool user_found = false;
    file.open("bank_detail.txt", ios::in);
    if(!file){
        cout<<"\n\n*** UNABLE TO OPEN THE FILE ***";
    }
    else{
        cout<<"\n\nEnter id : ";
        cin>>test_id;
        cout<<"sdfghj";
        file>>id>>name>>fname>>password>>balance>>phone>>pin;
        while(!file.eof()){
            if(test_id == id){
                system("clear");
                cout<<"\n\nuser already exist";
                cout<<"\n\nuser id : "<<id<<"password : "<<password<<"pin : "<<pin;
                user_found = true;
                break;
            }            
        }
        file.close();
        if(!user_found){
            cout<<"User Id not found";
        }
    
    }
}

//definig deposite 

void Bank::deposite(){
    system("clear");
    fstream file;
    fstream d_file;
    cout<<"\n\n\tAmount to be deposite";
    string test_id;
    float d_amount;
    bool user_found = false;
    file.open("bank_detail.txt", ios::in);
    if(!file){
        cout<<"\n\n*** UNABLE TO OPEN THE FILE ***";
    }
    else{
        cout<<"\n\nEnter id : ";
        cin>>test_id;
        file.open("d_file.txt", ios::app|ios::out);
        file>>id>>name>>fname>>password>>balance>>phone>>pin;
        while(!file.eof()){
            if(test_id == id){
                system("clear");
                cout<<"Enter amount to be deposited : ";
                cin>>d_amount;
                balance += d_amount;
                d_file<<" "<<id<<" "<<name<<" "<<fname<<" "<<password<<" "<<balance<<" "<<phone<<" "<<pin;
                cout<<"\n\n\amount deposited successfully";
                user_found = true;
                break;
            }
        }
        file.close();
        d_file.close();
        if(!user_found){
            cout<<"User Id not found";
        }
    }
}


void Bank::withdraw(){

}



int main(){
    Bank obj;
    obj.Menu();
    return 0;
}