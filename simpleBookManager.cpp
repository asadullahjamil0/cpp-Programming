#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    void setTitle(const std::string& t) {
        title = t;
    }

    void setAuthor(const std::string& a) {
        author = a;
    }

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    Book myBook;

    // Set book details
    myBook.setTitle("To Kill a Mockingbird");
    myBook.setAuthor("Harper Lee");

    // Display book details
    std::cout << "Book details:" << std::endl;
    myBook.display();

    return 0;
}
