#include <iostream>

using namespace std;

class bank

{
    int pin;
    float amt=0;
    float tot=0;
public:
    void pin_enter()
    {
     cout<<"\n Enter your pin number please: \n";
     cin>>pin;
    }
    void deposit()
    {
     cout<<"\n Enter amount to be deposited: \n";
     cin>>amt;
    tot= tot+amt;
    cout<<"New balance after deposit is: "<<tot;

    }
    void  withdraw()
    {
        int a;
     cout<<"\n Enter amount to withdraw:\n";
     cin>>a;
    tot= tot-a;
    cout<<" Available balance after withdraw: "<<tot;
    }
    void balance()
    {
        cout<<"\n The current balance available is: "<<tot;
    }
    };
int main()
{
    bank b;
    int ch;

        cout<<" \n ---- WELCOME TO YOUR BANK--- \n ";
        b.pin_enter();
        while(1){
   cout<<" \n Enter your choice:\n 1: Balance Enquiry \n2: Cash Deposit \n3: Cash Withdraw \n4: Exit \n";
   cin>>ch;
   switch(ch)
   {
   case 1:
    b.balance();
    break;
    case 2:
    b.deposit();
    break;
    case 3:
    b.withdraw();
    break;
    case 4:
        cout<<"\n Thank you for banking with us, have a nice day! \n";
    exit(0);
    break;
    default:
    cout<<" \n Wrong Input!! Invalid choice!! \n";
    break;

   }
    }

    return 0;
}
