#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;
    int main() {
        for (const auto& entry : fs::directory_iterator(".")) {
            if (fs::is_directory(entry)) {
                cout << "Folder: " << entry.path().filename() << endl;
            }
            if (fs::is_regular_file(entry)) {
                cout << "File: " << entry.path().filename() << endl;
            }
            }
    }