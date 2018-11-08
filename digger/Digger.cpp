
#include "Digger.h"

using Int = __int64;

extern "C" Int Int64Add(Int a, Int b, Int c);

namespace Digger
{
    template <typename T>
    void PrintItem(const std::string& str, T arg)
    {
        std::cout << str << ": " << arg << '\n';
    }
}


int main()
{
    const Int a = 72;
    const Int b = 8;
    const Int c = 3;

    const auto s = Int64Add(a, b, c);

    Digger::PrintItem("a", a);
    Digger::PrintItem("b", b);
    Digger::PrintItem("c", c);
    Digger::PrintItem("s", s);

    return EXIT_SUCCESS;
}
