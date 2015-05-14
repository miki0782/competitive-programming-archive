#include <iostream>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int numbers;
    cin >> numbers;

    for (unsigned int i {0}; i < numbers; ++i)
    {
        cout << i << (i < numbers - 1 ? ' ' : '\n');
    }

    return 0;
}
