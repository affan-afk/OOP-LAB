#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("large_log.txt", ios::in);

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char buffer[11];
    buffer[10] = '\0';

    file.read(buffer, 10);
    cout << "First 10 characters: " << buffer << endl;
    streampos pos1 = file.tellg();
    cout << "Position after first read: " << pos1 << endl;

    file.read(buffer, 10);
    cout << "Next 10 characters: " << buffer << endl;
    streampos pos2 = file.tellg();
    cout << "Position after second read: " << pos2 << endl;

    file.close();
    return 0;
}
