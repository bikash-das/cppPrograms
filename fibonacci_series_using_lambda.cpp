#include <iostream>
#include <utility>
int main()
{
    auto fibo = [a = 0, b = 1]() mutable{
            a = std::exchange(b,b+a);       /* a = b, b = b+a */
            return a;
    };
    int n;
    std::cout << "Enter how many fibonacci series number to generate: ";
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        std::cout <<fibo() << " ";
    }
    std::cout << "\n";
}
