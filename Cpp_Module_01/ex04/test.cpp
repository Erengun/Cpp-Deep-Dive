#include <iostream>
#include <fstream>

int main() {
    std::ofstream outfile("test.txt");
    if (outfile.is_open()) {
        outfile << "Hello World!\nThis is a test file.\nLet's try to replace some words.\n";
        outfile.close();
        std::cout << "Test file created." << std::endl;
    } else {
        std::cerr << "Unable to create the test file." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
