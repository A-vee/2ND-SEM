// 40. Write a C++ program to print all unique element in an array

     #include<iostream>
        using namespace std;
        int main() {
            int ar[10], l;
            cout << "Enter the no. of elements : ";
            cin >> l;
            cout << "Enter Array elements : " << endl;
            for(int i = 0; i < l; i++) {
                cin >> ar[i];
            }
            int c = 0, con = 0;
            cout << "Unique elements of given array : ";
            for(int i = 0; i < l; i++) {
                c = 0;
                for(int j = 0; j < l; j++) {
                    if(ar[i] == ar[j]) {
                        c++;
                    }
                }
                if(c == 1) {
                    cout << ar[i] << " ";
                    con = 1;
                }
            }
            if(con == 0) {
                cout << "No element found ";
            }
            return 0;
        }