        #include <iostream>
        #include <vector>
        #include <string>
        #include <cstdlib>
        #include <ctime>
        
        class MusicLibrary {
        private:
            std::vector<std::string> a;
        
        public:
            void b(const std::string& song) {
                a.push_back(song);
            }
        
            void c(const std::string& song) {
                for (auto it = a.begin(); it != a.end(); ++it) {
                    if (*it == song) {
                        a.erase(it);
                        break;
                    }
                }
            }
        
            void playRandomSong() const {
                if (a.empty()) {
                    std::cout << "No songs in the library." << std::endl;
                } else {
                    srand(time(nullptr));
                    int randomIndex = rand() % a.size();
                    std::cout << "Playing: " << a[randomIndex] << std::endl;
                }
            }
        
            void disp() const {
                std::cout << "Songs in library: ";
                for (const auto& song : a) {
                    std::cout << song << ", ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            MusicLibrary musicLibrary;
        
            musicLibrary.b("Song1");
            musicLibrary.b("Song2");
            musicLibrary.b("Song3");
        
            musicLibrary.disp();
        
            musicLibrary.playRandomSong();
        
            return 0;
        }