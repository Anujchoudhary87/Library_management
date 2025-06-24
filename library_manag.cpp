#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

struct UserData {
    string name;
    char section;
    string laptopBrand;
    int libraryBooks;
    int personalBooks;
    int notebooks;
    UserData* next;
};

unordered_map<string, string> credentials; // entryNumber -> password
unordered_map<string, bool> loggedIn;
UserData* head = nullptr;
UserData* lastPtr = nullptr;

// Function to pause screen
void pause() {
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}

// Sign-Up
void signUp() {
    string entry, password;

    cout << "\n--- Sign Up ---\n";
    cout << "Enter Entry Number (e.g., 2023CSE105): ";
    cin >> entry;

    if (credentials.find(entry) != credentials.end()) {
        cout << "⚠️ Entry already registered. Please login.\n";
        pause();
        return;
    }

    cout << "Create Password: ";
    cin >> password;

    credentials[entry] = password;
    loggedIn[entry] = false;
    cout << "✅ Sign-up successful!\n";
    pause();
}

// Login
bool login(string& loggedUser) {
    string entry, password;

    cout << "\n--- Login ---\n";
    cout << "Enter Entry Number: ";
    cin >> entry;

    if (credentials.find(entry) == credentials.end()) {
        cout << "❌ Entry not found. Please sign up first.\n";
        pause();
        return false;
    }

    cout << "Enter Password: ";
    cin >> password;

    if (credentials[entry] != password) {
        cout << "❌ Incorrect password.\n";
        pause();
        return false;
    }

    cout << "✅ Login successful.\n";
    loggedUser = entry;
    loggedIn[entry] = true;
    return true;
}

// Post-login data entry
void fillDetails(const string& entry) {
    UserData* user = new UserData();

    cin.ignore();
    cout << "\n--- Fill Library Details ---\n";
    cout << "Name: ";
    getline(cin, user->name);

    cout << "Section (A/B/C): ";
    cin >> user->section;
    cin.ignore();

    cout << "Laptop Brand: ";
    getline(cin, user->laptopBrand);

    cout << "Number of Library Books: ";
    cin >> user->libraryBooks;
    cout << "Number of Personal Books: ";
    cin >> user->personalBooks;
    cout << "Number of Notebooks: ";
    cin >> user->notebooks;
    user->next = nullptr;

    // Append to linked list
    if (!head) {
        head = lastPtr = user;
    } else {
        lastPtr->next = user;
        lastPtr = user;
    }

    cout << "✅ Library record saved for " << entry << ".\n";
    pause();
}

// Display all records (Admin-style view)
void viewAll() {
    if (!head) {
        cout << "No library records found.\n";
        return;
    }

    cout << "\n--- All Library Records ---\n";
    UserData* temp = head;
    int count = 1;

    while (temp) {
        cout << "\nUser #" << count++ << "\n";
        cout << "Name: " << temp->name << "\n";
        cout << "Section: " << temp->section << "\n";
        cout << "Laptop Brand: " << temp->laptopBrand << "\n";
        cout << "Library Books: " << temp->libraryBooks << "\n";
        cout << "Personal Books: " << temp->personalBooks << "\n";
        cout << "Notebooks: " << temp->notebooks << "\n";
        temp = temp->next;
    }

    pause();
}

// Main Menu
int main() {
    int choice;
    string loggedUser = "";

    while (true) {
        cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1 --> Sign Up\n";
        cout << "2 --> Login\n";
        cout << "3 --> View All Records (Admin)\n";
        cout << "4 --> Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                signUp();
                break;
            case 2:
                if (login(loggedUser)) {
                    fillDetails(loggedUser);
                }
                break;
            case 3:
                viewAll();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
                pause();
        }
    }

    return 0;
}
