#include <iostream>
int sumIndividualDigit(int num)
{
    if (num < 10)
        return num;
    return (num % 10) + sumIndividualDigit(num / 10);
}
void printBinary(int num)
{
    if (num < 0)
        num = 65536 + num;
    if (num < 2)
    {
        std::cout << num;
        return;
    }
    printBinary(num / 2);
    std::cout << num % 2;
}
int main()
{
    int num{};
    std::cin >> num;
    std::cout << num << '\n';
    std::cout << sumIndividualDigit(num) << '\n';
    printBinary(num);
    return 0;
}