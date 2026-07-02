#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string inventory[3] = {"Empty", "Empty", "Empty"};

void loadInventory() {
    ifstream inFile("inventory.txt");
    if (inFile.is_open()) {
        for (int i = 0; i < 3; i++) {
            if (!getline(inFile, inventory[i])) {
                inventory[i] = "Empty";
            }
        }
        inFile.close();
    }
}

void saveInventory() {
    ofstream outFile("inventory.txt");
    for (int i = 0; i < 3; i++) {
        outFile << inventory[i] << endl;
    }
    outFile.close();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: inventory [view|add <item>]" << endl;
        return 1;
    }

    string command = argv[1];
    loadInventory();

    if (command == "view") {
        cout << "---- Inventory ----" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Slot " << i + 1 << ": " << inventory[i] << endl;
        }
    }
    else if (command == "add") {
        if (argc < 3) {
            cout << "Please specify an item to add." << endl;
            return 1;
        }
        string item = argv[2];
        bool itemAdded = false;
        for (int i = 0; i < 3; i++) {
            if (inventory[i] == "Empty") {
                inventory[i] = item;
                itemAdded = true;
                break;
            }
        }
        if (itemAdded) {
            cout << "Added: " << item << endl;
        } else {
            cout << "Inventory is full!" << endl;
        }
    }
    else {
        cout << "Unknown command: " << command << endl;
        return 1;
    }

    saveInventory();
    return 0;
}
