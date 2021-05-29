#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string filename;
    if (argc == 2) {
        filename = argv[1];
    } else {
        std::cout << "Enter a file to read\n";
        std::cin >> filename;
    }

    std::ifstream fileObject(filename);
    std::ostringstream ImgData; // Image data goes to stringstream

    fileObject >> ImgData.rdbuf(); // File data goes into ImgData
    int len =
        ImgData.str().length(); // Get ImgData as a string and get it's length

    for (int i = 0; i < len; i++) {
        switch (ImgData.str()[i]) { // Get string representation
        case '0':
            cout << "\033[30m\u2587"; // Black square
            break;
        case 'R':
            cout << "\033[31m\u2587"; // Red square
            break;
        case 'G':
            cout << "\033[32m\u2587"; // Green square
            break;
        case 'O':
            cout << "\033[33m\u2587"; // Orange square
            break;
        case 'B':
            cout << "\033[34m\u2587"; // Blue square
            break;
        case 'M':
            cout << "\033[35m\u2587"; // Magenta square
            break;
        case 'C':
            cout << "\033[36m\u2587"; // Cyan square
            break;
        case 'L':
            cout << "\033[37m\u2587"; // Light gray square
            break;
        case 'D':
            cout << "\033[39m\u2587"; // Default color
            break;
        case 'N':
            cout << "\n"; // N newline
            break;
        case '\n': // ignore newlines
            break;
        default:
            cout << "\033[39m\u2587"; // Return to default color
            cerr << "Undefined character in image!";
            exit(1); // exit with error
        }
    }
}
