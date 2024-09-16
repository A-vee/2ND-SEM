        #include <iostream>
        #include <string>
        #include <vector>
        
        class Movie {
        private:
            std::string title;
            std::string director;
            std::vector<std::string> actors;
            std::vector<std::string> reviews;
        
        public:
            Movie(const std::string& title, const std::string& director, const std::vector<std::string>& actors) 
                : title(title), director(director), actors(actors) {}
        
            void addReview(const std::string& review) {
                reviews.push_back(review);
            }
        
            const std::vector<std::string>& getReviews() const {
                return reviews;
            }
        
            void displayInfo() const {
                std::cout << "Title: " << title << std::endl;
                std::cout << "Director: " << director << std::endl;
                std::cout << "Actors: ";
                for (const auto& actor : actors) {
                    std::cout << actor << ", ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            std::vector<std::string> actors = {"Actor1", "Actor2", "Actor3"};
            Movie movie("Movie Title", "Director Name", actors);
        
            movie.addReview("Great movie!");
            movie.addReview("Not bad, could be better.");
        
            movie.displayInfo();
        
            std::cout << "Reviews:" << std::endl;
            const std::vector<std::string>& reviews = movie.getReviews();
            for (const auto& review : reviews) {
                std::cout << "- " << review << std::endl;
            }
        
            return 0;
        }