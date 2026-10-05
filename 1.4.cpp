#include <iostream>
int main() {
     int x; //Обьявление переменной x
     int y; //Обьявление переменной y
    //Ввод переменных
        std::cout << "Enter two numbers: "; 
        std::cin >> x >> y; 
    //Вывод переменных
        std::cout << "Answer: ";
        std::cout << x + y;
        return 0;
}