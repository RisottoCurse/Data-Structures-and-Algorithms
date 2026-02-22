#include <iostream>

using namespace std;

class Player {
    public: 
        string name;
        int age;
};

/* In Stack

int main() {

    Player r {"Cat", 14};

    cout << r.name << '\n';
    cout << r.age << '\n';

    Player *p = &r;

    p -> name = "Jash";
    p -> age = 24;

    cout << p -> name << '\n';
    cout << p -> age << '\n';

    return 0;
}
*/

//  In Heap
// int main() {

//     Player *p;

//     p = new Player;

//     p -> name = "Koo";
//     p -> age = 55;

//     cout << p -> name << '\n';
//     cout << p -> age << '\n';

//     delete p;

//     return 0;
// }


