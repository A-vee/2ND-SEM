        #include <iostream>
        
        class Rectangle {
        private:
            double length;
            double width;
        
        public:
            void setLength(double newLength) {
                length = newLength;
            }
        
            double getLength() const {
                return length;
            }
        
            void setWidth(double newWidth) {
                width = newWidth;
            }
        
            double getWidth() const {
                return width;
            }
        };
        
        int main() {
            Rectangle rect;
        
            rect.setLength(5.0);
            rect.setWidth(3.0);
        
            std::cout << "Length: " << rect.getLength() << std::endl;
            std::cout << "Width: " << rect.getWidth() << std::endl;
        
            return 0;
        }