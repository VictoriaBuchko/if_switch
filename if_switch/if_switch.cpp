#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
    cout << "----------------------------------------------------";
    cout << "Task 1\n";
    //Ввести число и определить чётное оно или нет

    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Number " << number << " is even\n";
    }
    else {
        cout << "Number " << number << " is odd\n";
    }

    cout << "----------------------------------------------------";
    cout << "Task 2\n";

    //Вести три числа и найти наименьшее среди них

    int number1;
    int number2;
    int number3;

    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    int smallest = number1;

    if (number2 < smallest) {
        smallest = number2;
    }

    if (number3 < smallest) {
        smallest = number3;
    }

    cout << "Smallest number: " << smallest << "\n";

    cout << "----------------------------------------------------";
    cout << "Task 3\n";
    //Ввести число и выяснить положительное оно отрицательное или равное нулю

    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive\n";
    }
    else if (num < 0) {
        cout << "The number is negative\n";
    }
    else {
        cout << "The number is zero\n";
    }

    cout << "----------------------------------------------------";
    cout << "Task 4\n";
    //Реализовать калькулятор

    float a, b;
    int choice;

    cout << "Enter two real numbers: \n";
    cin >> a >> b;

    cout << "1. a + b\n";
    cout << "2. a - b\n";
    cout << "3. a * b\n";
    cout << "4. a / b\n";
    cout << "5. a % b\n";
    cout << "Select operation (enter number): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Result: " << a + b << "\n";
    }
    else if (choice == 2) {
        cout << "Result: " << a - b << "\n";
    }
    else if (choice == 3) {
        cout << "Result: " << a * b << "\n";
    }
    else if (choice == 4) {
        if (b == 0 || a == 0) {
            cout << "Error\n";
        }
        else {
            cout << "Result: " << a / b << "\n";
        }
    }
    else if (choice == 5) {
        if (b != 0 || a != 0) {
            cout << "Result: " << (int)a % (int)b << "\n";
        }
        else {
            cout << "Error\n";
        }
    }
    else {
        cout << "Error\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 5\n";
    //Ввести с клавиатуры символ определить чем он является цифрой буквой или знаком пунктуации
    //можно использовать isdigit ispunct

    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;

    if (isdigit(symbol)) {
        cout << "The entered symbol is a digit\n";
    }
    else if (isalpha(symbol)) {
        cout << "The entered symbol is a letter\n";
    }
    else if ( (symbol)) {
        cout << "The entered symbol is a punctuation mark\n";
    }
    else {
        cout << "The entered symbol is not a digit, letter, or punctuation mark\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 6\n";
    //Ввести с клавиатуры число и проверить принадлежит ли это число диапазону от n до m включительно

    int number6;
    int n, m;

    cout << "Enter a number: ";
    cin >> number6;

    cout << "Enter the lower bound of the range: ";
    cin >> n;

    cout << "Enter the upper bound of the range: ";
    cin >> m;

    if (number6 >= n && number6 <= m) {
        cout << "The number is in the range\n";
    }
    else {
        cout << "Number not in range\n";
    }

    cout << "----------------------------------------------------";
    cout << "Task 7\n";
    //Написать программу для проверки кратности числа x числу y(оба числа вводится с клавиатуры)

    int x, y;

    cout << "Enter number x: ";
    cin >> x;

    cout << "Enter number y: ";
    cin >> y;

    if (x % y == 0) {
        cout << "Number " << x << " multiple " << y << "\n";
    }
    else {
        cout << "Number " << x << " not a multiple " << y << "\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 8\n";
    //Ввести число и определить кратно ли оно 3,5 и 7 одновременно (логическое N)

    int number8;

    cout << "Enter a number: ";
    cin >> number8;

    if (number8 % 3 == 0 && number8 % 5 == 0 && number8 % 7 == 0) {
        cout << number8 << " is divisible by 3, 5, and 7 simultaneously\n";
    }
    else {
        cout << number8 << " is not divisible by 3, 5, and 7 simultaneously\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 9\n";
    //Показать модуль введённого числа. abs()

    int number9;
    cout << "Enter a number: ";
    cin >> number9;

    cout << "Absolute value: " << abs(number9) << "\n";

    cout << "----------------------------------------------------";
    cout << "Task 10\n";
    //Водить целое число не более 4 разрядов определить количество цифр в нём

    int number10;
    cout << "Enter an integer with a maximum of 4 digits: ";
    cin >> number10;

    int digitCount = 0;

    if (number10 >= 0 && number10 <= 9) {
        cout << "Number of digits: 1\n";
    }
    else if (number10 >= 10 && number10 <= 99) {
        cout << "Number of digits: 2\n";
    }
    else if (number10 >= 100 && number10 <= 999) {
        cout << "Number of digits: 3\n";
    }
    else if (number10 >= 1000 && number10 <= 9999) {
        cout << "Number of digits: 4\n";
    }
    else {
        cout << "There are more than 4 digits in the number\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 11\n";
    //Ведите с клавиатуры пятизначное число определите является ли оно палиндромом
    //одинаковые считаются в обоих направлениях например 1 2 3 2 1 будет палиндромом а 1 2 3 4 5 не палиндром

    int number11;
    cout << "Enter a number (between 10000 and 99999): ";
    cin >> number11;

    if (number11 < 10000 || number11 > 99999) {
        cout << "Invalid number! Goodbye!\n";
        return 0;
    }

    int tenThousands = number11 / 10000;
    int thousands = number11 / 1000 % 10;
    int tens = number11 / 10 % 10;
    int ones = number11 % 10;

    if (tenThousands == ones && thousands == tens) {
        cout << "The number is a PALINDROME.\n";
    }
    else {
        cout << "The number is NOT a PALINDROME.\n";
    }


    cout << "----------------------------------------------------";
    cout << "Task 12\n";
    //Пользователь задаёт координаты верхнего левого и нижнего правого угла прямоугольника,
    //а также координаты точек ( x, y)в декартовой системе координа. принадлежит ли точка этому прямоугольнику?
  

    int topLeftX, topLeftY, bottomRightX, bottomRightY;
    int pointX, pointY;

    // Ввод координат прямоугольника
    //координаты верхнего левого угла прямоугольника (x, y)
    cout << "Enter the coordinates of the upper left corner of the rectangle (x, y): ";
    cin >> topLeftX >> topLeftY;


    //координаты нижнего правого угла прямоугольника (x, y)
    cout << "Enter the coordinates of the lower right corner of the rectangle (x, y): ";
    cin >> bottomRightX >> bottomRightY;


    // Ввод координат точки
    cout << "Enter point coordinates (x, y): ";
    cin >> pointX >> pointY;


    // Проверка принадлежности точки прямоугольнику
    if (pointX >= topLeftX && pointX <= bottomRightX && pointY >= topLeftY && pointY <= bottomRightY) {
        cout << "Point belongs to rectangle\n";
    }
    else {
        cout << "Point not belongs to rectangle\n";
    }

    cout << "----------------------------------------------------";
    cout << "Task 13\n";
    //Найди максимальное значение среди четырёх переменных используя тернарный оператор


    int f, g, c, d;
    cout << "Enter four numbers: ";
    cin >> f >> g >> c >> d;

    int maxNum = (f > g) ? ((f > c) ? ((f > d) ? f : d) : ((c > d) ? c : d)) : ((g > c) ? ((g > d) ? g : d) : ((c > d) ? c : d));

    cout << "Maximum digit of a number is: " << maxNum << "\n";

    return 0;

}






