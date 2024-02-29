#include "iostream"
#include "string"

using namespace std;

int main() {
    string line;

    while(getline(cin, line)) {
        string new_string;
        int count = 0;
        for(int i = 0; line[i] != '\0'; i++) {
            if(line[i] == ' ') {
                cout << ' ';
            }
            else {
                count++;
                if(count % 2 != 0) {
                    cout << char(toupper(line[i]));
                }
                    
                else {
                    cout << char(tolower(line[i]));
                }
                    
            }
        }

        cout << endl;
    }
    return 0;
}
