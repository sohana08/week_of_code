#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook: public Book {
    int prices;
    public: MyBook(string title, string author, int price): Book(title,author) {
        prices= price;
    }

    void display() {
        cout<<"Title: "<<title<<"\n";
        cout<<"Author: "<<author<<"\n";
        cout<<"Price: "<<prices;
    }

};


int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
