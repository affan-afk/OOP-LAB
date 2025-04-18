//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class MenuItem{
    protected:
    string dishName;
    double price;
    public:
    MenuItem(string dishName,double price):dishName(dishName),price(price){}
    virtual void showDetails() = 0;
    virtual void prepare() = 0;
};
class Appetizer:public MenuItem{
    public:
    Appetizer(string dishName,double price):MenuItem(dishName,price){}
    void showDetails(){
        cout<<"Appetizer Dish: "<<dishName<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void prepare(){
        cout<<"Preparing Appetizer: "<<dishName<<endl;
    }
};
class MainCourse:public MenuItem{
    public:
    MainCourse(string dishName,double price):MenuItem(dishName,price){}
    void showDetails(){
        cout<<"Main Course Dish: "<<dishName<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void prepare(){
        cout<<"Preparing Main Course: "<<dishName<<endl;
    }
};
int main(){
    MenuItem *m = new Appetizer("Hummus ^-^",5.99);
    m->showDetails();
    m->prepare();
    m = new MainCourse("Falafel Sandwich ",10.85);
    m->showDetails();
    m->prepare();
    return 0;
}
