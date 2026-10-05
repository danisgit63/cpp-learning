#include <iostream>
int main() {
int x = 50;
int sum = 0;
while (x<=100)
{sum = sum + x;
 ++x;
}
std::cout << sum;
return 0;
}