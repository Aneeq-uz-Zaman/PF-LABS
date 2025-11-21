#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    int runs;
    int hundreds;
    int wickets;
    int catches;
    bool availability;
};

void listPlayers(Player* players, int count) {
    for (int i = 0; i < count; ++i) {
        if (players[i].name.empty() == false) {
            cout << "Name: " << players[i].name
                 << ", Runs: " << players[i].runs
                 << ", Hundreds: " << players[i].hundreds
                 << ", Wickets: " << players[i].wickets
                 << ", Catches: " << players[i].catches
                 << ", Availability: " << (players[i].availability ? "Yes" : "No") << endl;
        }
    }
}

void searchPlayer(Player* players, int count, const string& name) {
    for (int i = 0; i < count; ++i) {
        if (players[i].name == name) {
            cout << "Name: " << players[i].name
                 << ", Runs: " << players[i].runs
                 << ", Hundreds: " << players[i].hundreds
                 << ", Wickets: " << players[i].wickets
                 << ", Catches: " << players[i].catches
                 << ", Availability: " << (players[i].availability ? "Yes" : "No") << endl;
            return;
        }
    }
    cout << "Player not found." << endl;
}

void addPlayer(Player* players, int count) {
    for (int i = 0; i < count; ++i) {
        if (players[i].name.empty() == true) {
            cout << "Enter name: ";
            cin >> players[i].name;
            cout << "Enter runs: ";
            cin >> players[i].runs;
            cout << "Enter hundreds: ";
            cin >> players[i].hundreds;
            cout << "Enter wickets: ";
            cin >> players[i].wickets;
            cout << "Enter catches: ";
            cin >> players[i].catches;
            cout << "Is the player available (1 for Yes, 0 for No): ";
            cin >> players[i].availability;
            cout << "Player added successfully." << endl;
            return;
        }
    }
    cout << "No space to add a new player." << endl;
}

void removePlayer(Player* players, int count, const string& name) {
    for (int i = 0; i < count; ++i) {
        if (players[i].name == name) {
            players[i] = Player{};
            cout << "Player removed successfully." << endl;
            return;
        }
    }
    cout << "Player not found." << endl;
}

void updatePlayer(Player* players, int count, const string& name) {
    for (int i = 0; i < count; ++i) {
        if (players[i].name == name) {
            cout << "Enter new runs: ";
            cin >> players[i].runs;
            cout << "Enter new hundreds: ";
            cin >> players[i].hundreds;
            cout << "Enter new wickets: ";
            cin >> players[i].wickets;
            cout << "Enter new catches: ";
            cin >> players[i].catches;
            cout << "Is the player available (1 for Yes, 0 for No): ";
            cin >> players[i].availability;
            cout << "Player updated successfully." << endl;
            return;
        }
    }
    cout << "Player not found." << endl;
}

int main() {
    int count;
    cout << "Enter the number of potential players: ";
    cin >> count;

    Player* players = new Player[count]{};

    int choice = -1;
    while (choice != 0) {
        cout << "\nMenu:\n"
             << "0: Close Program\n"
             << "1: List\n"
             << "2: Name Search\n"
             << "3: Add New\n"
             << "4: Remove by Name\n"
             << "5: Update by Name\n"
             << "Your Choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Program closed." << endl;
        }
        else if (choice == 1) {
            listPlayers(players, count);
        }
        else if (choice == 2) {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            searchPlayer(players, count, name);
        }
        else if (choice == 3) {
            addPlayer(players, count);
        }
        else if (choice == 4) {
            string name;
            cout << "Enter name to remove: ";
            cin >> name;
            removePlayer(players, count, name);
        }
        else if (choice == 5) {
            string name;
            cout << "Enter name to update: ";
            cin >> name;
            updatePlayer(players, count, name);
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    delete[] players;
    return 0;
}
