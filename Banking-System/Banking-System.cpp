#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    void getDetails()
    {

        cout << "Enter The Account Number : ";
        cin >> accountNumber;
        cout << "Enter The Account Holder Name : ";
        cin >> accountHolderName;
        cout << "Enter The Account Balance : ";
        cin >> balance;
    }

    void showDetails()
    {
        cout << endl;
        cout << "==== Your Account Deatials ====" << endl;
        cout << "A/C Number : " << accountNumber << endl;
        cout << "A/C Name : " << accountHolderName << endl;
        cout << "A/C balance : " << balance << endl;
    }

    double deposit()
    {
        double amount;
        cout << "Enter Your Deposit Amount : ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << amount << " deposited sucessfully..." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }
    double showBalance()
    {

        return balance;
    }

    void setBalance(float newBalance)
    {
        balance = newBalance;
    }

    virtual double withdraw()
    {
        double amount;
        cout << "Enter Your Withdraw Amount : ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " Withdrawed sucessfully..." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance for withdrawal." << endl;
        }
        else
        {
            cout << "Invalid withdraw amount." << endl;
        }
    }

    virtual void calculateInterest()
    {
        cout << " nothing to calculate interest in base class" << endl;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }

    void menu()
    {

        int choice;
        do
        {
            cout << "1. Deposit Amount" << endl;
            cout << "2. Withdraw Amount" << endl;
            cout << "3. Get Balance" << endl;
            cout << "4. Display Account " << endl;
            cout << "0. Exit" << endl;

            cout << "Enter Your choice... : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                cout << "Your Current Balance is : " << showBalance() << endl;
                break;
            case 4:
                showDetails();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid..." << endl;
                break;
            }

        } while (choice != 0);
    }
};
class SavingAccount : public BankAccount
{
public:
    float interestRate;

    void calculateInterest() override
    {
        cout << "Enter Your interestRate : ";
        cin >> interestRate;
        float interest = (showBalance() * interestRate) / 100;
        cout << "Your Interestrate (" << interestRate << "%) for amount " << showBalance() << " is : " << interest << endl;
        cout << "Saving Account Created Successfully..." << endl;
        setBalance(showBalance() + interest);
    }
};
class CurrentAccount : public BankAccount
{
private:
    float overdraftLimit;

public:
    double withdraw() override
    {
        double amount;
        cout << "Enter Your Withdraw Amount : ";
        cin >> amount;

        if (amount > 0 && amount <= showBalance() + overdraftLimit)
        {
            double newBalance = showBalance() - amount;

            if (newBalance < 0)
            {
                double overdraftUsed = -newBalance;
                overdraftLimit -= overdraftUsed;
                setBalance(0);
                cout << "overdraft used : " << overdraftUsed << endl;
                cout << "Remaining overdraft limit: " << overdraftLimit << endl;
            }

            cout << amount << " Withdrawed successfully..." << endl;
            cout << "Current Account Created Successfully..." << endl;
        }
        else
        {
            cout << "Invalid withdraw amount." << endl;
            return 0;
        }
    }

    void setOverdraftLimit()
    {
        cout << "Enter Your Overdraft Limit : ";
        cin >> overdraftLimit;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    int term;
    float interestRate;

public:
    void setTerm()
    {
        cout << "Enter the term (in months) for Fixed Deposit: ";
        cin >> term;
        cout << "Enter Your interestRate : ";
        cin >> interestRate;

        if (term <= 0)
        {
            cout << "Invalid term. Please enter a positive number." << endl;
            return;
        }
    }
    void calculateInterest() override
    {
        float interest = (showBalance() * interestRate * term) / 1200;
        float maturityAmount = showBalance() + interest;
        cout << "Fixed Deposit Amount Is " << showBalance() << " Interest (" << interestRate << "%) for " << term << " months: " << interest << endl;
        cout << "Maturity Amount: " << maturityAmount << endl;
        cout << "Fixed Deposit Account Created Successfully..." << endl;

        setBalance(maturityAmount);
    }
};

int main()
{

    int choice;

    BankAccount *a1;
    BankAccount *accounts[100];
    int acCount = 0;
    SavingAccount s1;
    CurrentAccount c1;
    FixedDepositAccount f1;

    BankAccount* matchedAC = NULL;

    do
    {
        cout << endl
             << "==== Welcome To Bank Management System =====" << endl;
        cout << "1. Create Saving Account" << endl;
        cout << "2. Create Current Account" << endl;
        cout << "3. Create Fixed Deposit Account" << endl;
        cout << "4. Display All Account" << endl;
        cout << "5. Manage Account" << endl;
        cout << "0. Exit..." << endl;

        cout << "Enter Your Account type : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "----- Saving A/C ------" << endl;
            s1.getDetails();
            s1.calculateInterest();

            s1.menu();
            accounts[acCount] = &s1;
            acCount++;

            break;

        case 2:
            cout << "----- Current A/C -------" << endl;
            c1.getDetails();
            c1.setOverdraftLimit();
            c1.withdraw();
            c1.menu();
            accounts[acCount] = &c1;
            acCount++;
            break;
        case 3:
            cout << "----- Fixed Deposit A/C ------" << endl;
            f1.getDetails();
            f1.setTerm();
            a1 = &f1;
            f1.calculateInterest();

            f1.menu();
            accounts[acCount] = &f1;
            acCount++;
            break;

        case 4:
            cout << endl << "===== All Accounts =====" << endl;
            for (int i = 0; i < acCount; i++)
            {
                cout << "\n--- Account [" << i + 1 << "] ---" << endl;
                accounts[i]->showDetails();
            }

            break;

        case 5:
            int accNo;

            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < acCount; i++)
            {
                if (accounts[i]->getAccountNumber() == accNo)
                {
                    matchedAC = accounts[i];
                    break;
                }
            }

            if (matchedAC != NULL)
            {
                cout << "Account Found!" << endl;
                matchedAC->menu();
            }
            else
            {
                cout << "Account not found." << endl;
            }

            break;
        case 0:
            cout << "Thank you Visit Again...." << endl;
            break;

        default:
            cout << "Invalid Choice..." << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}
