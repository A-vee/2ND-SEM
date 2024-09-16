// 113. Create a class entering the command line arguments from the user and show all the arguments as output.
        // 
          #include<iostream>
          using namespace std;
      
          class A {
          public:
              void d(int argc, char* argv[]) {
                  cout << "Number of arguments: " << argc << endl;
                  cout << "Arguments:" << endl;
                  for (int i = 0; i < argc; ++i) {
                      cout << "Argument " << i << ": " << argv[i] << endl;
                  }
              }
          };
      
          int main(int argc, char* argv[]) {
              A a;
              a.d(argc, argv);
              return 0;
          }
        
      