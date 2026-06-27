#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;
int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please enter an extension. (.txt, .exe, .png)";
    }
    string targetExt = argv[1];
    
    for (const auto& entry : fs::directory_iterator(".")) {
        if (entry.path().extension() == targetExt) {
            cout << "File: " << entry.path().filename() << endl;
        }
    }
}