#include <cstring>
#include <iostream>

using namespace std;

void printBook(struct Books *book);

// 声明一个结构体类型 Books
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};


int main()
{
    Books Book1;
    Books Book2;

    strcpy(Book1.title, "C++ Tutorial");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "Programming Language");
    Book1.book_id = 12345;

    // Book2 详述
    strcpy(Book2.title, "CSS Tutorial");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "Front Tech");
    Book2.book_id = 12346;

    printBook(&Book1);
    printBook(&Book2);

    return 0;
}

void printBook(struct Books *book)
{
    cout << "Title  : " << book->title << endl;
    cout << "Author : " << book->author << endl;
    cout << "Subject : " << book->subject << endl;
    cout << "Book ID : " << book->book_id << endl;
}
