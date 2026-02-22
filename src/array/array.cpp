#include<iostream>
#include<vector>

using namespace std;

int main () {

    // int n;

    // std::cout << "Enter the size of the array: ";
    // std::cin >> n;

    // // int* myarray = new int[n];
    // int* myarray;
    // myarray = new int[n];

    // std::cout << "You have created an array of size " << n << '\n';

    // std::cout << "size of memery taken is " << sizeof(myarray) << '\n';

    // for(int i = 0; i < n; i++) {

    //     std::cout << "Enter a number for the element " << i << " of array\n";
    //     std::cin >> myarray[i];
    // }

    // for (int i = 0; i < n; i++) {
    //     std::cout << "The element at index " << i << " is: " << myarray[i] << '\n';
    // }

    // delete[] myarray;

    vector<int> boo = {0, 2, 4, 5};

    cout << boo.size() << '\n';

    int k = 0;

        for (int i = 1; i < boo.size(); i++) {

            cout << boo[i] << '\n';


            // if (boo[k] == boo[i]) {

            //     cout << "aya";
            // }

            k++;
        }

    return 0;


}