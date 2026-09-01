// including string header for using std::string and iostream for input/output operations. The program initializes a string with "Hello, World!" and then prints its length using the length() method of the std::string class. The output will display the length of the string, which is 13 characters.
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::cout << "Length of the string: " << str.length() << std::endl;
    return 0;
} 

//without it

#include <iostream>
using namespace std;

int main(){
    string str ="hey Ghosty";
    cout << "Length of the string: " << str.length() << endl;

    return 0;
}