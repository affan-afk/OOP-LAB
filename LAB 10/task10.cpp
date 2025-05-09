#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("data_records.txt");

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file.seekg(18, ios::beg);

    string record;
    getline(file, record);
    cout << "Third record: " << record << endl;

    file.close();
    return 0;
}
