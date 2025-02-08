//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "enter the 1st dimension of the 3d array:";
    cin >>x;
    cout << "enter the 2nd dimension of the 3d array:";
    cin >>y;
    cout << "enter the 3rd dimension of the 3d array:";
    cin >>z;
    int ***array = new int**[x];
    for (int i = 0; i < x; i++) {
        array[i] = new int*[y];

        for (int j = 0; j < y; j++) {
            array[i][j] = new int[z];
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "enter element at position ("<<i<<", "<<j<<", "<<k<< "): ";
                cin>>array[i][j][k];
            }
        }
    }

    cout << "elements of the 3d array are:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout<<"array["<<i<<"]["<<j<<"]["<<k<<"] = "<< array[i][j][k] << endl;
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
