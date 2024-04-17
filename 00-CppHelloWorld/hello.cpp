#include <iostream>
#include <fstream>

int main()
{
    std::ofstream myFile("output.txt");
    std::cout.rdbuf(myFile.rdbuf());
    std::cout << "Hello World\n";
}