#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
    string filename;
    if (argc == 2) {
        filename = argv[1];
    }
    else{
        std::cout << "Enter a file to read\n";
        std::cin >> filename;
    }
    std::ifstream fileObject(filename);

    std::ostringstream ImgData;  // The data of the Image will go to this string
    fileObject>>ImgData.rdbuf();  // Put the data of the image file into ImgData
    int len=ImgData.str().length();  // get ImgData as a string and put the length of Imgdata into a var
    while(int i=0, i<len, i++) {             // I used a while loop because the forloop won't work for some reason
        switch(ImgData.str()[i]) { // get the string representation
        case '0':
              cout << "\033[30m\u2587";  // if image has 0. Make a black square
              break;
        case 'R':
              cout << "\033[31m\u2587";  // if image has R. Make a red square
              break;
        case 'G':
              cout << "\033[32m\u2587";  // if image has G. Make a green square
              break;
        case 'O':
              cout << "\033[33m\u2587";  // if image has O. Make an Orange square
              break;
        case 'B':
              cout << "\033[34m\u2587";  // if image has B. Make a blue square
              break;
        case 'M':
              cout << "\033[35m\u2587";  // if image has M. Make a Magenta square
              break;
        case 'C':
              cout << "\033[36m\u2587";  // if image has C. Make a Cyan square
              break;
        case 'L':
              cout << "\033[37m\u2587";  // if image has L. Make a Light gray square
              break;
        case 'D':
              cout << "\033[39m\u2587";  // if image has D. Use the default color
              break;
        case '\n':
              break;
        case 'N':
              cout << "\n";  // if image has N. Make a Newline
              break;
        default:
              cerr << "Undefined character!";
        };
        i++;

    }
}
