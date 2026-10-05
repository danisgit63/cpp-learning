#include <iostream>
int main() {
int x;
int y;
std::cin >> x >> y;
while (x<y-1) {
++x;
std::cout << x << " ";
}
return 0;
}