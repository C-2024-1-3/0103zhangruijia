#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (isalpha(c)) {
            c = tolower(c);
            counts[c - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26] = { 0 };

    cout << "������һ���ַ���: ";
    cin.getline(s, 100);

    count(s, counts);

    cout << "��ĸ���ִ������£�" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }

    return 0;
}
