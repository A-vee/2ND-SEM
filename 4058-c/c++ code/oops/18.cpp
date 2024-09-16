    #include <iostream>
    #include <vector>
    #include <string>
    #include &lcmath>
    #include &lnumeric>
    
    class Restaurant {
    private:
        std::vector<std::string> items;
        std::vector<double> prices;
        std::vector<int> ratings;
    
    public:
        void addItem(const std::string& item, double price, int rating) {
            items.push_back(item);
            prices.push_back(price);
            ratings.push_back(rating);
        }
    
        void removeItem(const std::string& item) {
            for (auto it = items.begin(); it != items.end(); ++it) {
                if (*it == item) {
                    int index = it - items.begin();
                    items.erase(it);
                    prices.erase(prices.begin() + index);
                    ratings.erase(ratings.begin() + index);
                    break;
                }
            }
        }
    
        double averageRating() const {
            if (ratings.empty()) {
                return 0;
            } else {
                return static_cast<double>(std::accumulate(ratings.begin(), ratings.end(), 0)) / ratings.size();
            }
        }
    };
    
    int main() {
        Restaurant restaurant;
    
        restaurant.addItem("Burger", 9.99, 4);
        restaurant.addItem("Pizza", 12.99, 5);
        restaurant.addItem("Salad", 7.99, 3);
    
        std::cout << "Average Rating: " << restaurant.averageRating() << std::endl;
    
        restaurant.removeItem("Salad");
    
        std::cout << "Average Rating: " << restaurant.averageRating() << std::endl;
    
        return 0;
    }