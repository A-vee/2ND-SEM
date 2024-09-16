/* 5. Write a C++ program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a derived class called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred. */
#include <iostream>
using namespace std;

class BankAccount
{
	public:
		int currentBal;
		int afterwithdraw;
		void  deposit()
		{
            int depositAmt;
		    cout<<"The current Balance  is : "<<currentBal<<endl;
            cout<<"Enter the amount you want to deposit : ";
		    cin>>depositAmt;
            currentBal+=depositAmt;
		    cout<<"After deposit your balance is : "<<currentBal<<endl;
		
	    }
		void withdraw()
		{
		    int withdrawamt;
	        cout<<"Enter the amount you want to withdraw : ";
	        cin>>withdrawamt;
		    if(withdrawamt>currentBal)
			{
		        cout<<"There is not enough money to complete your transaction";
		    }
		    int afterwithdraw = currentBal - withdrawamt;
	        currentBal=afterwithdraw;
	        cout<<"After withdraw your amount is : "<<currentBal<<endl;		
		}
	    BankAccount()
		{
	        currentBal = 0;
	    }
};

class SavingAccount :public BankAccount
{
    public: 
    void withdraw()
	{
        if(currentBal<100)
		{
            cout<< "There should be atleast 100 rupees in your Savings Account for withdrawl" ;
        }
		else
		{
            BankAccount::withdraw();
        }  
    }
};

int main()
{
    SavingAccount obj1;
    obj1.deposit();
    obj1.withdraw();
}

/*
The current Balance  is : 0
Enter the amount you want to deposit : 25000
After deposit your balance is : 25000
Enter the amount you want to withdraw : 15000
After withdraw your amount is : 10000
*/
