// muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class library
{
private:
   string bookList[100] = {""} ;
   string borrowedBooks[100] = {""} ;
   string availaibleBooks[100] = {""} ;
public:
    void addBook(string name){
        for (int i = 0; i < 100; i++)
        {
            if (bookList[i] == "")
            {
                bookList[i] = name;
                availaibleBooks[i] = name;
                cout<<name<<" was successfully added to the book list!"<<endl;
                return;
            }
        }
        cout<<"Library full! cannot add more books!"<<endl;
    }
    void borrowBook(string name){
        for (int i = 0; i < 100; i++)
        {
            if (bookList[i] == name)
            {
                if (availaibleBooks[i] == name)
                {
                    cout<<"Book --" <<name<< " -- successfully borrowed!"<<endl;
                    availaibleBooks[i] = "";
                    borrowedBooks[i] = name;
                    return;
                }
                else
                {
                    cout<<"Book -- " <<name<< " -- already borrowed!"<<endl;
                    return;
                }
            }
        }
        cout<<"Book -- " <<name<< " -- not available in library!"<<endl;
    }
    void returnBook(string name){
        for (int i = 0; i < 100; i++)
        {
            if (bookList[i] == name)
            {
                if (borrowedBooks[i] == name)
                {
                    cout<<"Book -- " <<name<< " -- successfully returned!"<<endl;
                    borrowedBooks[i] = "";
                    availaibleBooks[i] = name;
                    return;
                }
                else
                {
                    cout<<"Book -- " <<name<< " -- already present in library!"<<endl;
                    return;
                }
            }
        }
        cout<<"Book -- " <<name<< " -- not part of library!"<<endl;
    }
};

int main(){
    library hamza_ki_library;
    hamza_ki_library.addBook("lotr");
    hamza_ki_library.addBook("hp"); 
    hamza_ki_library.addBook("maze runner");
    hamza_ki_library.addBook("hunger games"); 
    hamza_ki_library.borrowBook("hunger games");  
    hamza_ki_library.borrowBook("hunger games");  
    hamza_ki_library.borrowBook("wimpy kid"); 
    hamza_ki_library.returnBook("wimpy kid");
}
