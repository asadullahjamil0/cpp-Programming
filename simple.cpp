#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace S1
{
    int A = 1;
}
namespace S2
{
    int A = 2;
}

int main()
{
    {
        using namespace S1;
        S2::A = A + 1;
    }
    {
        using namespace S2;
        S1::A = A + 1;
    }

    cout << S1::A = A + 1;

    return 0;
}
