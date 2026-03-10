#include<iostream>
#include<string.h>
using namespace std;

class bank{
    private:
    string accName;
    string accNumber;
    string accType;
    double balamt;
    public:
    void deposit(double amt){
        this->balamt+=amt;
        cout<<balamt<<" is deposited to ACCOUNT NO::"<<accNumber<<endl;
        cout<<"ACCOUNT BALANCE::"<<this->balamt<<endl;
    }
    void withdraw(double amt){
        this->balamt-=amt;
        cout<<balamt<<" is withdrawn from ACCOUNT NO::"<<accNumber<<endl;
        cout<<"ACCOUNT BALANCE::"<<this->balamt<<endl;
    }
    void display(){
        cout<<"NAME OF ACCOUNT HOLDER::"<<this->accName<<endl;
        cout<<"Balance Amount::"<<this->balamt<<endl;
        cout<<"Account Type::"<<accType<<endl;
    }
    void createacc(){
    cout<<"Enter the NAME OF ACCOUNT HOLDER::"<<endl;
    cin>>accName;
    cout<<"Enter the Initial Balance Amount::"<<endl;
    cin>>balamt;
    cout<<"Enter the Account Number::"<<endl;
    cin>>accNumber;
    cout<<"Enter the Account type::"<<endl;
    cin>>accType;
    
}
void choice(int i){
    cout<<"-----"<<i+1<<"TH Person Bank Details----"<<endl;
    char ch;double damt;double wamt;
    cout<<"Enter 1 for creating this account if already created please ignore this::"<<endl;
    cout<<"Enter 2 for withdrawing::"<<endl;
    cout<<"Enter 3 for depositing::"<<endl;
    cout<<"Enter 4 to exit from this Account"<<endl;
    cout<<"Enter the choice::"<<endl;
    cin>>ch;
    if(ch=='3'){
    cout<<"Enter the amount to be deposited::"<<endl;
    cin>>damt;
    deposit(damt);
    choice(i);
    }
    if(ch=='2'){
    cout<<"Enter the amount to be withdraw::"<<endl;
    cin>>wamt;
    withdraw(wamt);
    choice(i);
    }
    if(ch=='1'){
        createacc();
        cout<<"Account is created Successfully!!!!"<<endl;
        choice(i);
    }
}
};

  int main(){
    cout<<"------Welcome to Black Pearl Bank------"<<endl;
    bank obj[10];
    int i = 0;
    char ch;

    while (true) {
        cout<<"\nEnter '0' to create a new account"<<endl;
        cout<<"Enter 'T' to show transaction history"<<endl;
        cout<<"Enter 'C' to access existing accounts"<<endl;
        cout<<"Enter 'E' to exit"<<endl;
        cin>>ch;

        switch(ch){
            case '0':
                if (i < 10) {
                    obj[i].choice(i);
                    i++;
                } else {
                    cout<<"Maximum number of accounts reached."<<endl;
                }
                break;

            case 'T':
            case 't':
                for(int j=0; j<i; j++){
                    obj[j].display();
                }
                break;

            case 'C':
            case 'c':
                for(int j=0; j<i; j++){
                    obj[j].choice(j);
                }
                break;

            case 'E':
            case 'e':
                cout<<"Thank you for using Black Pearl Bank!"<<endl;
                exit(0);

            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }

    return 0;
}