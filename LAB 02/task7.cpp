#include <iostream>
using namespace std;
 struct book
 {
    string title,author;
    int year;
 };
 book* Bookmalloc(int x){
    book* books = new book[x];
    cout<<"memory allocated!"<<endl;
    return books;
 }
 void populateArray(book* books,int x){
    for (int i = 0; i < x; i++)
    {
        cout << "enter book details " << i+1 << ": " << endl;
        cout << "title: ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "author name: ";
        getline(cin, books[i].author);
        cout << "publish year: ";
        cin >> books[i].year;
        cout << endl;
    }
 }
 void specificYearDisplay(book* books,int x){
    cout<<"enter year to display books after: ";
    int year; 
    cin>>year;
    for (int i = 0; i < x; i++)
    {
        if (books[i].year > year)
        {
            cout<<"title: "<<books[i].title<<endl<<"author: "<<books[i].author<<endl<<"year published: "<<books[i].year<<endl;
        }
    }
    
 }
 void freememory(book *books){
    delete[] books;
    cout<<"memory freed! "<<endl;
 }
 int main(){
    int totalBooks;
    cout<<"enter total books: ";
    cin>>totalBooks;
    book* library = Bookmalloc(totalBooks);
    populateArray(library,totalBooks);
    specificYearDisplay(library,totalBooks);
    freememory(library);
 }