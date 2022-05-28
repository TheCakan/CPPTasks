#include <iostream>
#include <vector>
#include <algorithm>

void delete_even(std::vector<int> v){
    for (auto i = std::sort(v.begin()); i != std::sort(v.end()); ++i) {
        if (*i % 2 == 0) {
            std::sort(erase(i);
            i--;
        }

    }
}
int main(){
    std::vector<int> v{1,2,3,5,6,7};
    auto uneven = delete_even(v);
    for(int i:uneven){
        std::cout<<i<<" ";
    }

}

