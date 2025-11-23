#include <iostream>
#include <string>
using namespace std;

// Constants
const int MAX_ENTRIES = 100;

// Global arrays
string assets[MAX_ENTRIES];
float assetValues[MAX_ENTRIES];
int assetCount = 0;

string budgets[MAX_ENTRIES];
float budgetAmounts[MAX_ENTRIES];
int budgetCount = 0;

string expenses[MAX_ENTRIES];
float expenseAmounts[MAX_ENTRIES];
int expenseCount = 0;

string borrowers[MAX_ENTRIES];
float loanAmounts[MAX_ENTRIES];
int loanCount = 0;

// Function declarations
void createAsset();
void manageBudget();
void trackExpenses();
void lendFunds();
void viewReports();
void secureLogout();

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n--- Financial Management System ---\n";
        cout << "1. Create / Manage Assets\n";
        cout << "2. Manage Budget\n";
        cout << "3. Track Expenses\n";
        cout << "4. Lend Funds\n";
        cout << "5. View / Monitor Reports\n";
        cout << "6. Logout\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAsset(); break;
            case 2: manageBudget(); break;
            case 3: trackExpenses(); break;
            case 4: lendFunds(); break;
            case 5: viewReports(); break;
            case 6: secureLogout(); running = false; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

// Function definitions
void createAsset() {
    if (assetCount < MAX_ENTRIES) {
        cout << "Enter asset name: ";
        cin >> assets[assetCount];
        cout << "Enter asset value: ";
        cin >> assetValues[assetCount];
        assetCount++;
        cout << "Asset saved and categorized.\n";
    } else {
        cout << "Asset storage full.\n";
    }
}

void manageBudget() {
    if (budgetCount < MAX_ENTRIES) {
        cout << "Enter budget category: ";
        cin >> budgets[budgetCount];
        cout << "Enter budget amount: ";
        cin >> budgetAmounts[budgetCount];
        budgetCount++;
        cout << "Budget saved and categorized.\n";
    } else {
        cout << "Budget storage full.\n";
    }
}

void trackExpenses() {
    if (expenseCount < MAX_ENTRIES) {
        cout << "Enter expense description: ";
        cin >> expenses[expenseCount];
        cout << "Enter expense amount: ";
        cin >> expenseAmounts[expenseCount];
        expenseCount++;
        cout << "Expense saved and categorized.\n";
    } else {
        cout << "Expense storage full.\n";
    }
}

void lendFunds() {
    if (loanCount < MAX_ENTRIES) {
        cout << "Enter borrower name: ";
        cin >> borrowers[loanCount];
        cout << "Enter loan amount: ";
        cin >> loanAmounts[loanCount];
        loanCount++;
        cout << "Loan recorded and categorized.\n";
    } else {
        cout << "Loan storage full.\n";
    }
}

void viewReports() {
    cout << "\n--- Financial Report ---\n";
    cout << "Assets:\n";
    for (int i = 0; i < assetCount; i++)
        cout << assets[i] << ": $" << assetValues[i] << "\n";

    cout << "\nBudgets:\n";
    for (int i = 0; i < budgetCount; i++)
        cout << budgets[i] << ": $" << budgetAmounts[i] << "\n";

    cout << "\nExpenses:\n";
    for (int i = 0; i < expenseCount; i++)
        cout << expenses[i] << ": $" << expenseAmounts[i] << "\n";

    cout << "\nLoans:\n";
    for (int i = 0; i < loanCount; i++)
        cout << borrowers[i] << ": $" << loanAmounts[i] << "\n";
}

void secureLogout() {
    cout << "Secure logout complete. Goodbye!\n";
}

