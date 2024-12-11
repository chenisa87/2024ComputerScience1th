#include<iostream>
using namespace std;

bool isLowercase(char c) {
    return (c >= 'a' && c <= 'z');
}

int main() {
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        int upper_words[26] = {0};
        int lower_words[26] = {0};
        int mx_word_ct = 0;

        for (char c : line) {
            if (isalpha(c)) {
                if (isLowercase(c)) {
                    lower_words[c - 'a']++;
                    mx_word_ct = max(mx_word_ct, lower_words[c - 'a']);
                } else {
                    upper_words[c - 'A']++;
                    mx_word_ct = max(mx_word_ct, upper_words[c - 'A']);
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            if (upper_words[i] == mx_word_ct) cout << char(i + 'A');
        }
        for (int i = 0; i < 26; i++) {
            if (lower_words[i] == mx_word_ct) cout << char(i + 'a');
        }
        cout << " " << mx_word_ct << "\n";
    }
    return 0;
}
