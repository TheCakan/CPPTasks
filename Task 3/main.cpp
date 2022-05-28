#include <iostream>
#include <vector>
#include <unordered_set>

void remove(std::vector<int> &v)
{
    std::vector<int>::iterator itr = v.begin();
    std::unordered_set<int> s;

    for (auto curr = v.begin(); curr != v.end(); ++curr)
    {
        if (s.insert(*curr).second) {
            *itr++ = *curr;
        }
    }
    v.erase(itr, v.end());
}

int main()
{
    std::vector<int> v = {1,1,4,5,10,1,9,7,4 };

    remove(v);

    for (auto itr = v.begin(); itr != v.end(); ++itr) {
        std::cout << *itr << ' ';
    }

    return 0;
}
