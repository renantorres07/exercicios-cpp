#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    for (int i = 0; i < 5; i += 2)
    {
        cout << names[i] << " ";
    }

    cout << "\nForeach #01(Copy)...\n";

    for (string s : names)
    {
        s.append("!!!!"); // copy
        cout << s << " ";
    }

    cout << "\nForeach #02(Ref)...\n";

    for (auto &s : names)
    {
        s.append("!!!!"); // ref
        cout << s << " ";
    }

    cout << "\nForeach #03(Ref CONST)...\n";

    for (auto const &s : names)
    {
        //s.append("!!!!"); // ref
        cout << s << " ";
    }

    cout << endl;
    cout << names[0] << endl;

    return 0;
}