#include <iostream>

// Abstract class Instrument
class Instrument {
public:
    // Abstract methods
    virtual void play() const = 0;
    virtual void tune() const = 0;
};

// Derived class Glockenspiel
class Glockenspiel : public Instrument {
public:
    // Implementation of play method for Glockenspiel
    void play() const override {
        std::cout << "Playing the Glockenspiel: ting ting ting..." << std::endl;
    }

    // Implementation of tune method for Glockenspiel
    void tune() const override {
        std::cout << "Tuning the Glockenspiel: adjusting the metal bars." << std::endl;
    }
};

// Derived class Violin
class Violin : public Instrument {
public:
    // Implementation of play method for Violin
    void play() const override {
        std::cout << "Playing the Violin: screech screech screech..." << std::endl;
    }

    // Implementation of tune method for Violin
    void tune() const override {
        std::cout << "Tuning the Violin: tightening/loosening the strings." << std::endl;
    }
};

// Main function
int main() {
    // Create a Glockenspiel object
    Glockenspiel glockenspiel;
    std::cout << "Glockenspiel:" << std::endl;
    glockenspiel.play();
    glockenspiel.tune();

    std::cout << std::endl;

    // Create a Violin object
    Violin violin;
    std::cout << "Violin:" << std::endl;
    violin.play();
    violin.tune();

    return 0;
}
