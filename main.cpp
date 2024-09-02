#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int file_size = 100;
    double sales = 9.99;

    cout << file_size << endl;
    cout << sales << endl;

    int a = 1;
    int b = 2;
    int c = a;
    a = b;
    b = c;

    cout << a << endl;
    cout << b << endl;

    const double pi = 3.14;

    int snake_case; // Snake Case
    int PascalCase; // Pascal Case
    int camelCase;  // Camel Case

    double x = 45;
    double y = 34;
    int add = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;

    cout << div << endl;

    x = x + 5;
    x += 5;
    x++;
    x--;

    x = 10;
    y = x++; // x = 11, y = 10
    cout << x << endl;
    cout << y << endl;

    double z = ++x; // x = 12, z = 12
    cout << x << endl;
    cout << z << endl;

    x = 1 + 2 * 3;
    cout << x << endl;

    x = (1 + 2) * 3;
    cout << x << endl;

    x = 10;
    y = 5;
    z = (x + 10) / (3 * y);
    cout << z << endl;

    x = 10;
    cout << "x = ";
    cout << x << endl;

    x = 20;
    cout << "x = " << x << endl;

    double TotalSales = 95000;
    cout << "Sales: $" << TotalSales << endl;

    double StateTaxRate = 0.04;
    double StateTax = TotalSales * StateTaxRate;
    cout << "State Tax: $" << StateTax << endl;

    double CountyTaxRate = 0.02;
    double CountyTax = TotalSales * CountyTaxRate;
    cout << "County Tax: $" << CountyTax << endl;

    double TotalTax = StateTax + CountyTax;
    cout << "Total Tax: $" << TotalTax << endl;

    cout << "Input a value: ";
    int value;
    cin >> value;
    cout << value << endl;

    cout << "Enter a two numbers: ";
    int FirstNumber;
    int SecondNumber;
    cin >> FirstNumber;
    cin >> SecondNumber;
    cout << FirstNumber + SecondNumber << endl;

    double result = floor(1.56);
    cout << result << endl;

    cout << "Input a radius: ";
    double radius;
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << "Area: " << area;

    // Inline Comment
    /*
       Multiple
       Line
       Comment
    */

    auto interestRate = 3.65f;
    auto fileSide = 2653235L;
    auto letter = 'a';
    auto isValid = true;

    int removeGarbage {};
    cout << removeGarbage << endl;

    int binary = 0b11111111;
    int hexadecimal = 0xFF;

    cout << binary << endl;
    cout << hexadecimal << endl;

    unsigned int notNegative = 255; // Don't accept negative value

    int money = 1'000'000;
    cout << money << endl;

    short otherMoney {money};
    cout << otherMoney << endl;

    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
    int random = rand() % 10;
    cout << random << endl;

    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));

    short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "Dice: " << dice1 << ", " << dice2 << endl;

    return 0;
}
