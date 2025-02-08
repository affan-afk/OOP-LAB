//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;

struct product {
    int productid;
    string name;
    int quantity;
    float price;
};

product* productmalloc(int x) {
    product* products = new product[x];
    cout << "memory allocated!" << endl;
    return products;
}

void populatearray(product* products, int x) {
    for (int i = 0; i < x; i++) {
        cout << "enter product details for product " << i + 1 << ": " << endl;
        cout << "product id: ";
        cin >> products[i].productid;
        cin.ignore();
        cout << "product name: ";
        getline(cin, products[i].name);
        cout << "quantity: ";
        cin >> products[i].quantity;
        cout << "price: ";
        cin >> products[i].price;
        cout << endl;
    }
}

void totalvaluedisplay(product* products, int x) {
    float totalvalue = 0;
    for (int i = 0; i < x; i++) {
        totalvalue += products[i].quantity * products[i].price;
    }
    cout << "total value of the inventory: " << totalvalue << endl;
}

void freememory(product* products) {
    delete[] products;
    cout << "memory freed!" << endl;
}

int main() {
    int totalproducts;
    cout << "enter total number of products: ";
    cin >> totalproducts;

    product* inventory = productmalloc(totalproducts);
    populatearray(inventory, totalproducts);
    totalvaluedisplay(inventory, totalproducts);
    freememory(inventory);

    return 0;
}
