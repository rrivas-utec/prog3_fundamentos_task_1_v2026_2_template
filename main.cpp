#include <iostream>
#include "p18.h"

int main() {
    DocumentIndex a,b;a.add(Text("cat"));a.merge(std::move(b));
    std::cout << (a.size()==1) << std::endl;
    std::cout << (b.size()==0) << std::endl;
    return 0;
}
