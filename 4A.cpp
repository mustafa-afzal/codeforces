#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int x;
    cin >> x;
    string word;
    string res;
    for (int i = 0; i < x; i++) {
        res = "";
        cin >> word;
        if (word.length() > 10) {
            res += string(1, word[0]);
            res += to_string(word.length() - 2);
            res += string(1, word[word.length() - 1]);
            cout << res << endl;
        }
        else {
            cout << word << endl;
        }
    }
}