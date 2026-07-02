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
                inventory[i] = "Empty"; // Fallback if a line is missing
            }   
        }
        inFile.close()
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
        cout << "Bro";
        return 1;
    }
    
    string command = argv[1];
    loadInventory();
    if (command == "view") {
        cout << "---- Inventory ----" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Slot " << i+1 << " :" << inventory[i] << endl;
        }
        
    }
    else if (command == "add") {
        string item = argv[2];
        bool itemAdded = false;
        for (string &slot : inventory)
    }
    saveInventory();
    return 0;
    
    
}