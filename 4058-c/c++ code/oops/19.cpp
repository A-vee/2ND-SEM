        #include <iostream>
        #include <string>
        
        class BookingSystem {
        public:
            void searchFlights(const std::string& query) {
                std::cout << "Searching for flights: " << query << std::endl;
            }
        
            void searchHotels(const std::string& query) {
                std::cout << "Searching for hotels: " << query << std::endl;
            }
        
            void bookReservation(const std::string& type, const std::string& details) {
                std::cout << "Booking " << type << " reservation: " << details << std::endl;
            }
        
            void cancelReservation(const std::string& type, const std::string& details) {
                std::cout << "Canceling " << type << " reservation: " << details << std::endl;
            }
        };
        
        int main() {
            BookingSystem bookingSystem;
        
            bookingSystem.searchFlights("New York to London");
            bookingSystem.searchHotels("London");
        
            bookingSystem.bookReservation("flight", "Flight from New York to London on 2024-04-06");
            bookingSystem.bookReservation("hotel", "Hotel in London for 3 nights");
        
            bookingSystem.cancelReservation("flight", "Flight from New York to London on 2024-04-06");
            bookingSystem.cancelReservation("hotel", "Hotel in London for 3 nights");
        
            return 0;
        }