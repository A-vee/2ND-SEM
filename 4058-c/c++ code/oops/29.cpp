        #include <iostream>
        #include <string>
        
        class Car {
        private:
            std::string company_name;
            std::string model_name;
            int year;
            double mileage;
        
        public:
            void setCompanyName(const std::string& name) {
                company_name = name;
            }
        
            std::string getCompanyName() const {
                return company_name;
            }
        
            void setModelName(const std::string& name) {
                model_name = name;
            }
        
            std::string getModelName() const {
                return model_name;
            }
        
            void setYear(int yr) {
                year = yr;
            }
        
            int getYear() const {
                return year;
            }
        
            void setMileage(double miles) {
                mileage = miles;
            }
        
            double getMileage() const {
                return mileage;
            }
        };
        
        int main() {
            Car myCar;
        
            myCar.setCompanyName("Toyota");
            myCar.setModelName("Camry");
            myCar.setYear(2020);
            myCar.setMileage(15000.5);
        
            std::cout << "Car Company Name: " << myCar.getCompanyName() << std::endl;
            std::cout << "Car Model Name: " << myCar.getModelName() << std::endl;
            std::cout << "Car Year: " << myCar.getYear() << std::endl;
            std::cout << "Car Mileage: " << myCar.getMileage() << " miles" << std::endl;
        
            return 0;
        }