#include <iostream>
        #include <vector>
        #include <string>
        
        class Library {
        private:
            std::vector<std::string> books;
        
        public:
            void addBook(const std::string& book) {
                books.push_back(book);
            }
        
            void removeBook(const std::string& book) {
                for (auto it = books.begin(); it != books.end(); ++it) {
                    if (*it == book) {
                        books.erase(it);
                        break;
                    }
                }
            }
        
            void printBooks() const {
                std::cout << "Books in library: ";
                for (const auto& book : books) {
                    std::cout << book << ", ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            Library library;
        
            library.addBook("Book1");
            library.addBook("Book2");
            library.addBook("Book3");
        
            library.printBooks();
        
            library.removeBook("Book2");
        
            library.printBooks();
        
            return 0;
        }