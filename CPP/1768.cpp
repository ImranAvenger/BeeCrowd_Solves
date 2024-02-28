#include <iostream>

using namespace std;

void drawTree(int size) {
    // trunk size 
    int t_size = size;

    // draw the main part of tree
    int space = size / 2;
    int line = space + 1;
    int temp_space = space;
    int temp_line = line;

    while(size > 0) {
        while(temp_line > 0) {
            if(temp_space != 0) {
                cout << " ";
                temp_space--;
            }
            else {
                cout << "*";
            }
            temp_line--;
        }

        cout << endl;

        space--;
        temp_space = space;
        line++;
        temp_line = line;

        size -= 2;
    }

    // draw the trunk 
    int t_space = t_size / 2;
    int t_line = t_space + 1;
    int t_temp_space = t_space;
    int t_temp_line = t_line;

    for(int i = 0; i < 2; i++) {
       while(t_temp_line > 0) {
            if(t_temp_space != 0) {
                cout << " ";
                t_temp_space--;
            }
            else {
                cout << "*";
            }
            t_temp_line--;
        }

        cout << endl;

        t_space--;
        t_temp_space = t_space;
        t_line++;
        t_temp_line = t_line;
    }
}

int main() {
    int size;
    
    while(cin >> size) {
        drawTree(size);
        cout << endl;
    }
        
    return 0;
}
