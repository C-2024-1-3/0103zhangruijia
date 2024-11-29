#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;

    while (s2[i] != '\0') {
        int start = i;
        while (s1[j] != '\0' && s1[j] == s2[i]) {
            i++;
            j++;
        }
        if (s1[j] == '\0') {
            return start;  
        }

        
        i = start+1;
        j = 0;
    }

    return -1; 
}

int main() {
    char s1[81], s2[81]; 

   
    cout << "请输入第一个字符串（s1）: ";
    cin.getline(s1, 81); 
    cout << "请输入第二个字符串（s2）: ";
    cin.getline(s2, 81);

    
    int result = indexOf(s1, s2);

    
    if (result != -1) {
        cout << "子串 '" << s1 << "' 在 '" << s2 << "' 中的起始位置是: " << result << endl;
    }
    else {
        cout << -1;
    }

    return 0;
}
