#include <iostream>
#include <string>
using namespace std;

// Constants
const int MAX_USERS = 10;
const int MAX_ENTRIES = 100;

// User database
string usernames[MAX_USERS];
string passwords[MAX_USERS];
int userCount = 0;

// Financial data arrays
string assets[MAX_ENTRIES], assetTags[MAX_ENTRIES];
float assetValues[MAX_ENTRIES];
int assetCount = 0;

string budgets[MAX_ENTRIES], budgetTags[MAX_ENTRIES];
float budgetAmounts[MAX_ENTRIES];
int budgetCount = 0;

string expenses[MAX_ENTRIES], expenseTags[MAX_ENTRIES];
float expenseAmounts[MAX_ENTRIES];
int expenseCount = 0;

string borrowers[MAX_ENTRIES], loanTags[MAX_ENTRIES];
float loanAmounts[MAX_ENTRIES];
int loanCount = 0;

// Function declarations
void registerUser();
bool loginUser(string &currentUser);
void dashboard(string currentUser);
void createAsset();
void manageBudget();
void trackExpenses();
void lendFunds();
void viewReports();
void showAnalytics();
void secureLogout();

int main() {
    int choice;
    string currentUser;

    while (true) {
        cout << "\n--- Welcome to Financial Management System ---\n";
        cout << "1. Register\n2. Login\n3. Exit\nChoose: ";
        cin >> choice;

        switch (choice) {
            case 1: registerUser(); break;
            case 2:
                if (loginUser(currentUser)) {
                    dashboard(currentUser);
                }
                break;
            case 3: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid choice.\n";
        }
    }
}

// Register new user
void registerUser() {
    if (userCount < MAX_USERS) {
        cout << "Enter new username: ";
        cin >> usernames[userCount];
        cout << "Enter new password: ";
        cin >> passwords[userCount];
        userCount++;
        cout << "Registration successful!\n";
    } else {
        cout << "User limit reached.\n";
    }
}

// Login existing user
bool loginUser(string &currentUser) {
    string uname, pword;
    cout << "Username: ";
    cin >> uname;
    cout << "Password: ";
    cin >> pword;

    for (int i = 0; i < userCount; i++) {
        if (usernames[i] == uname && passwords[i] == pword) {
            cout << "Login successful!\n";
            currentUser = uname;
            return true;
        }
    }
    cout << "Login failed.\n";
    return false;
}

// Dashboard
void dashboard(string currentUser) {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n--- Dashboard (" << currentUser << ") ---\n";
        cout << "1. Create / Manage Assets\n";
        cout << "2. Manage Budget\n";
        cout << "3. Track Expenses\n";
        cout << "4. Lend Funds\n";
        cout << "5. View / Monitor Reports\n";
        cout << "6. View Analytics Summary\n";
        cout << "7. Logout\n-------------------------\n";
        cin >> choice;

        switch (choice) {
            case 1: createAsset(); break;
            case 2: manageBudget(); break;
            case 3: trackExpenses(); break;
            case 4: lendFunds(); break;
            case 5: viewReports(); break;
            case 6: showAnalytics(); break;
            case 7: secureLogout(); running = false; break;
            default: cout << "Invalid choice.\n";
        }
    }
}

// Asset Management
void createAsset() {
    if (assetCount < MAX_ENTRIES) {
        cout << "Enter asset name: ";
        cin >> assets[assetCount];

        cout << "Enter asset value (PHP): ";
        cin >> assetValues[assetCount];

        cout << "Enter asset category tag: ";
        cin >> assetTags[assetCount];

        assetCount++;
        cout << "Asset saved and categorized.\n";
    } else {
        cout << "Asset storage full.\n";
    }
}

// Budget Management
void manageBudget() {
    if (budgetCount < MAX_ENTRIES) {
        cout << "Enter budget category: ";
        cin >> budgets[budgetCount];

        cout << "Enter budget amount (PHP): ";
        cin >> budgetAmounts[budgetCount];

        cout << "Enter budget tag: ";
        cin >> budgetTags[budgetCount];

        budgetCount++;
        cout << "Budget saved and categorized.\n";
    } else {
        cout << "Budget storage full.\n";
    }
}

// Expense Tracking
void trackExpenses() {
    if (expenseCount < MAX_ENTRIES) {
        cout << "Enter expense description: ";
        cin >> expenses[expenseCount];

        cout << "Enter expense amount (PHP): ";
        cin >> expenseAmounts[expenseCount];

        cout << "Enter expense tag: ";
        cin >> expenseTags[expenseCount];

        expenseCount++;
        cout << "Expense saved and categorized.\n";
    } else {
        cout << "Expense storage full.\n";
    }
}

// Lending Funds
void lendFunds() {
    if (loanCount < MAX_ENTRIES) {
        cout << "Enter borrower name: ";
        cin >> borrowers[loanCount];

        cout << "Enter loan amount (PHP): ";
        cin >> loanAmounts[loanCount];

        cout << "Enter loan tag: ";
        cin >> loanTags[loanCount];

        loanCount++;
        cout << "Loan recorded and categorized.\n";
    } else {
        cout << "Loan storage full.\n";
    }
}

// Reports
void viewReports() {
    cout << "\n--- Financial Report ---\n";

    cout << "\nAssets:\n";
    for (int i = 0; i < assetCount; i++)
        cout << assets[i] << " [" << assetTags[i] << "]: PHP " << assetValues[i] << "\n";

    cout << "\nBudgets:\n";
    for (int i = 0; i < budgetCount; i++)
        cout << budgets[i] << " [" << budgetTags[i] << "]: PHP " << budgetAmounts[i] << "\n";

    cout << "\nExpenses:\n";
    for (int i = 0; i < expenseCount; i++)
        cout << expenses[i] << " [" << expenseTags[i] << "]: PHP " << expenseAmounts[i] << "\n";

    cout << "\nLoans:\n";
    for (int i = 0; i < loanCount; i++)
        cout << borrowers[i] << " [" << loanTags[i] << "]: PHP " << loanAmounts[i] << "\n";
}

// Analytics Summary
void showAnalytics() {
    float totalAssets = 0, totalBudget = 0, totalExpenses = 0, totalLoans = 0;

    for (int i = 0; i < assetCount; i++) totalAssets += assetValues[i];
    for (int i = 0; i < budgetCount; i++) totalBudget += budgetAmounts[i];
    for (int i = 0; i < expenseCount; i++) totalExpenses += expenseAmounts[i];
    for (int i = 0; i < loanCount; i++) totalLoans += loanAmounts[i];

    cout << "\n--- Analytics Summary ---\n";
    cout << "Total Assets: PHP " << totalAssets << "\n";
    cout << "Total Budget: PHP " << totalBudget << "\n";
    cout << "Total Expenses: PHP " << totalExpenses << "\n";
    cout << "Total Loans: PHP " << totalLoans << "\n";
}

// Logout
void secureLogout() {
    cout << "Secure logout complete. Returning to main menu...\n";
}
