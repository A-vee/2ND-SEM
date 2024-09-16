// 15. Write a C++ program to calculate the average of numbers stored in a file. 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream f;
    f.open("Newfile",ios::in);
    int n,s=0,c=0;
    while(f>>n){
      s=s+n;
      c++;
    }
    cout<<"Average of no. stored in file : "<<(float)s/c;
    f.close();
    return 0;
}
