#include <iostream>
#include <string>
#include <fstream>


std::string display_image(const std::string& file_name) {
    std::ifstream image_file;
    image_file.open(file_name);
    
    std::string img_data;  // The data of the Image will go to this string
    image_file >> img_data;  // Put the data of the image into ImgData
    
    int length = img_data.length();
    
    std::string image = "";
    
    for(int i = 0; i < length; i++) {             // I used a while loop because the forloop won't work for some reason
        switch(img_data[i]) {
            case 'Z':
                image += "\033[30m\u2587";  // black
                break;
            case 'R':
                image += "\033[31m\u2587";  // red
                break;
            case 'G':
                image +="\033[32m\u2587";  // green
                break;
            case 'O':
                image += "\033[33m\u2587";  // orange
                break;
            case 'B':
                image += "\033[34m\u2587";  // blue
                break;
            case 'M':
                image += "\033[35m\u2587";  // Magenta
                break;
            case 'C':
                image += "\033[36m\u2587";  // Cyan
                break;
            case 'L':
                image += "\033[37m\u2587";  // Light gray
                break;
            case 'D':
                image += "\033[39m\u2587";  // default color
                break;
            case 'N':
                image += "\n";  // newline
                break;
            default:
                image += "";
                break;
        };
    }
    
    return image;
}

int main(int argc, char* argv[]) {
    std::cout << display_image(argv[1]) << std::endl;
    
}
