// 41. Write a C++ Program to Sort the Array in an Ascending Order

        #include<iostream>
        using namespace std;
        int main() {
            int ar[10], n, l = 0;
            cout << "Enter the no. of elements of array: ";
            cin >> n;
            cout << "Enter the elements of arrays : ";
            for(int i = 0; i < n; i++) {
                cin >> ar[i];
            }
            int temp;
            for(int i = 0; i < n-1; i++) {
                for(int j = 0; j < n-i-1; j++) {
                    if(ar[j] > ar[j+1]) {
                        temp = ar[j];
                        ar[j] = ar[j+1];
                        ar[j+1] = temp;
                    }
                }
            }
            cout << "Array after sorting in ascending order : " << endl;
            for(int i = 0; i < n; i++) {
                cout << ar[i] << "  ";
            }
            return 0;
        }