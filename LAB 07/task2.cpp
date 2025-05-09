//muhammad affan rasheed (24k-0579)
#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
    int productID;
    string productName;
    double price;
    int stockQuantity;

public:
    Product(int id, string name, double price, int stock = 0)
        : productID(id), productName(name), price(price), stockQuantity(stock) {}

    virtual void applyDiscount() {}

    virtual double calculateTotalPrice(int quantity) {
        return price * quantity;
    }

    virtual void displayProductInfo() {
        cout << "Product ID: " << productID << "\nName: " << productName
             << "\nPrice: $" << price << "\nStock: " << stockQuantity << endl;
    }

    double getPrice() {
        return price;
    }

    friend ostream& operator<<(ostream& out, Product& p) {
        p.displayProductInfo();
        return out;
    }

    Product operator+(Product& other) {
        return Product(0, "Combined Product", this->price + other.price);
    }
};

class Electronics : public Product {
    int warrantyPeriod;
    string brand;

public:
    Electronics(int id, string name, double price, int stock, int warranty, string brand)
        : Product(id, name, price, stock), warrantyPeriod(warranty), brand(brand) {}

    void displayProductInfo() {
        Product::displayProductInfo();
        cout << "Brand: " << brand << "\nWarranty: " << warrantyPeriod << " months" << endl;
    }
};

class Clothing : public Product {
    string size, color, fabricMaterial;

public:
    Clothing(int id, string name, double price, int stock, string size, string color, string fabric)
        : Product(id, name, price, stock), size(size), color(color), fabricMaterial(fabric) {}

    void applyDiscount() {
        price *= 0.8;
    }

    void displayProductInfo() {
        Product::displayProductInfo();
        cout << "Size: " << size << "\nColor: " << color << "\nMaterial: " << fabricMaterial << endl;
    }
};

class FoodItem : public Product {
    string expirationDate;
    int calories;

public:
    FoodItem(int id, string name, double price, int stock, string expDate, int cal)
        : Product(id, name, price, stock), expirationDate(expDate), calories(cal) {}

    double calculateTotalPrice(int quantity) {
        if (quantity >= 5)
            return price * quantity * 0.9;
        return price * quantity;
    }

    void displayProductInfo() {
        Product::displayProductInfo();
        cout << "Expires: " << expirationDate << "\nCalories: " << calories << " kcal" << endl;
    }
};

class Book : public Product {
    string author, genre;

public:
    Book(int id, string name, double price, int stock, string author, string genre)
        : Product(id, name, price, stock), author(author), genre(genre) {}

    void displayProductInfo() {
        Product::displayProductInfo();
        cout << "Author: " << author << "\nGenre: " << genre << endl;
    }
};

int main() {
    Electronics e(101, "mobile", 499.99, 10, 24, "samsung");
    Clothing c(202, "TShirt", 29.99, 50, "L", "Black", "Cotton");
    FoodItem f(303, "chocolate", 3.5, 100, "2025-12-31", 250);
    Book b(404, "let us c", 59.99, 20, "sir talha", "Programming");

    cout << e << endl;
    cout << c << endl;
    c.applyDiscount();
    cout << "After discount:\n" << c << endl;
    cout << f << endl;
    cout << "Price for 6 items: $" << f.calculateTotalPrice(6) << endl;
    cout << b << endl;

    Product combined = e + b;
    cout << "Combined Price Product:\n" << combined << endl;

    return 0;
}
