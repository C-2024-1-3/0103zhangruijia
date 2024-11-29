#include <iostream>
#include <cctype> 
using namespace std;

int parseHex(const char* const hexString) {
    int decimal = 0;  /
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = tolower(hexString[i]);  
        int hexValue;

        
        if (c >= '0' && c <= '9') {
            hexValue = c - '0';  
        }
        else if (c >= 'a' && c <= 'f') {
            hexValue = c - 'a' + 10;  
        }
        else {
           
            return 0;
        }

        decimal = decimal * 16 + hexValue;  
    }
    return decimal;
}

int main() {
    const char* hexStr = "A5";  
    int result = parseHex(hexStr); 
    cout << "Hexadecimal " << hexStr << " in decimal is " << result << endl; 
    return 0;
}
