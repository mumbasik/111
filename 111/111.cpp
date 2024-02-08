
#include <iostream>
using namespace std;
template<typename T>
class Swapper {
public:
    void Swap(T& x, T& y) {
        T q = x;
        x = y;
        y = q;
    }
    void Print(T& x, T& y) {
        cout << "Swap: " << x << endl;
        cout << "Swap: " << y << endl;
    }
};

int main()
{
    int x = 10;
    int y = 5;

    Swapper<int> swapping;
    swapping.Print(x, y);
    swapping.Swap(x, y);
    swapping.Print(x, y);
}
