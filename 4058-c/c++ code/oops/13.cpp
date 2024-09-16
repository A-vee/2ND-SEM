        #include <iostream>
        #include <vector>
        #include <string>
        
        class Inventory {
        private:
            std::vector<std::string> a;
        
        public:
            void b(const std::string& product) {
                a.push_back(product);
            }
        
            void c(const std::string& product) {
                for (auto it = a.begin(); it != a.end(); ++it) {
                    if (*it == product) {
                        a.erase(it);
                        break;
                    }
                }
            }
        
            void d() const {
                if (a.size() < 5) {
                    std::cout << "Low inventory" << std::endl;
                } else {
                    std::cout << "Sufficient inventory" << std::endl;
                }
            }
        
            void disp() const {
                std::cout << "Products in inventory: ";
                for (const auto& product : a) {
                    std::cout << product << ", ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            Inventory inv;
        
            inv.b("Product1");
            inv.b("Product2");
            inv.b("Product3");
        
            inv.disp();
        
            inv.c("Product2");
        
            inv.disp();
        
            inv.d();
        
            return 0;
        }