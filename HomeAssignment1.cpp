// Марышева, Суходоева, Панин 22БИ-3

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <string> 
#include <iomanip> 

// Task 1
/*
int countarea(int base1, int base2, int height);

int main(){
    std::cout << "Enter the bases and the heights of trapezoid: " << std::endl;
    int b1 = 0;
    int b2 = 0;
    int h = 0;
    std::cin >> b1 >> b2 >> h;
    std::cout << "b1 = " << b1 << std::endl;
    std::cout << "b2 = " << b2 << std::endl;
    std::cout << "h = " << h << std::endl;
    std::cout << "The area = " << countarea(b1, b2, h);

    return 0;
}

int countarea(int base1, int base2, int height) {
    int s = 0.5 * (base1 + base2) * height;
    return s;
} */

// Task 2
/*
float getSquare(float r) {
  return M_PI * pow(r, 2);
}

float getLength(float r) {
  return M_PI * 2 * r;
}

int main() {
  std::cout << "Enter a radius: ";
  float radius = 0.0f;
  std::cin >> radius;
  std::cout << getSquare(radius) << std::endl;
  std::cout << getLength(radius) << std::endl;

  return 0;
} */

// Task 3  
/*
int main()
{
 unsigned int katet1, katet2, S = 0;
 double Gip = 0.0;
 std::cout << "Katet1 = ";
 std::cin >> katet1;
 std::cout << "Katet2 = ";
 std::cin >> katet2;
 if (katet1 == 0)
 {
  std::cout << "Error";
  exit(1);
 }
 if (katet2 == 0)
 {
  std::cout << "Error";
  exit(1);
 }
 int y = 2;
 Gip = sqrt(pow(katet1, y) + pow(katet2, y)); // считаю гипотенузу через т. Пифагора

S = (katet1 * katet2 / 2); // считаю площадь треугольника
std::cout << "S = " << S << std::endl;
std::cout << "Gip = " << Gip << std::endl;
return 0;
}  */

// Task 4
/*
int main(){
    std::cout << "Enter a 4-digit number: " << std::endl;
    int n = 0;
    int s = 0;
    std::cin >> n;

    if (n > 999 && n <= 9999) {

        while (n != 0) {
            s += n % 10;
            n /= 10;
        }
        std::cout << "Summ of digits = " << s << std::endl;
    } else {
        std::cout << "Invalid number" << std::endl;
    }

    return 0;
} */

// Task 5
/*
double polarY(double x, double y)
{
    double ro = std::sqrt(x * x + y * y);
    return ro;
}

double polarX(double x, double ro)
{
    double phi = std::acos(x / ro);
    return phi;
}


int main() {
    std::cout << "Enter an x: " << std::endl;
    double x = 0;
    std::cin >> x;
    std::cout << "Enter an y: " << std::endl;
    double y = 0;
    std::cin >> y;
    std::cout << "X= " << polarX(x, polarY(x, y)) << " Y= " << polarY(x, y) << std::endl;

    return 0;
} */

// Task 6  
/*
int main()
{
    int p = 0;
    double x, y, Corner = 0;
    double pi = acos(-1.0); // определение числа пи через обратную тригонометрическую функцию
    std::cout << "Аngle = "; // тк с++ считает в радианнах, для удобства тут вводить в градусах
    std::cin >> Corner;
    Corner = Corner / 180 * pi; // преобразовывает "градусы" в радианы
    std::cout << "polar coordinates = ";
    std::cin >> p;
    x = p * cos(Corner); // считаю декартовое представление
    y = p * sin(Corner);
    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;

    return 0;
} */


// Task 7
/*
int main(){
    double a = 0.0; // factor of x^2
    double b = 0.0; // factor of x
    double c = 0.0; // free coefficient
    double d = 0.0; // discriminant of equation
    double x1 = 0.0; // root 1
    double x2 = 0.0; // root 2

    std::cout << "Enter a (factor of x^2): " << std::endl;
    std::cin >> a;
    std::cout << "Enter b (factor of x): " << std::endl;
    std::cin >> b;
    std::cout << "Enter c : " << std::endl;
    std::cin >> c;

    d = b * b - 4 * a * c; // calculate the discriminant
    std::cout << "D = " << d << std::endl;

    if (d > 0) {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    if (d == 0) {
        x1 = -(b / (2 * a));
        if (x1 == -0) {
            std::cout << "x1 = x2 = 0" << std::endl;
        }
        else {
            std::cout << "x1 = x2 = " << x1 << std::endl;
        }
    }
    if (d < 0) {
        std::cout << "D < 0 => no roots" << x1 << std::endl;
    }

    return 0;
} */

//Task 8
/*
double mer(double a, double b, double c) { // функция считает медианы
  return 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - a * a);
}

int main()
{
  double a = 0;
  double b = 0;
  double c = 0;

  std::cout << "Enter an a, b, c " << std::endl;
  std::cin >> a >> b >> c;
  if (a + b > c && b + c > a && a + c > b){ // является ли треугольником?
    double d = mer(a, b, c); // медианы треугольника abc
    double e = mer(b, c, a);
    double f = mer(c, a, b);

    std::cout << "Medians are " << mer(d, e, f) << ", " << mer(e, f, d) << ", " << mer(f, d, e); // медианы треугольника из медиан
  }
  else {
    std::cout << "This is not a triangle";
  }

  return 0;

} */

// Task 9  
/*
int main()
{
    int sec, min, hour = 0;
    int h = 0;
    std::cout << "Seconds = ";
    std::cin >> sec;
    hour = sec / 3600;
    sec = sec - hour * 3600;
    min = sec / 60;
    std::cout << "minutes = " << min << std::endl;
    std::cout << "hours = " << hour << std::endl;

    return 0;
} */

// Task 10
/*
int main()
{
    std::cout << "Enter a, b and c for the triangle: ";
    int a, b, c = 0;
    std::cin >> a >> b >> c; // Пользователь вводит три числа и они поочередно записываются в переменные, соответствующие сторонам треугольника
    if (a == b || b == c || a == c) { // если хотя бы две стороны треугольника равны, то треугольник равнобедренный
        std::cout << "The triangle is isosceles";
    }
    else {
        std::cout << "The triangle isn't isosceles";
    }

    return 0;
} */

/*Task 11
int main() {
  std::cout << "Enter a price: ";
  int price = 0;
  std::cin >> price;
  if (price>1000) {
    double sum = price * 0.9;
    std::cout << sum;
  }
  else
  {
    std::cout << price;
  }

  return 0;
}*/

// Task 12
/*
int main()
{
    int height, weight, ideal;
    std::cout << "Weight = ";
    std::cin >> weight;
    std::cout << "Height = ";
    std::cin >> height;
    ideal = height - 100; // the formula
    if (ideal == weight)
    {
        std::cout << "You are ideal";
    }
    if (ideal < weight)
    {
        std::cout << "You should lose weight))";
    }
    if (ideal > weight)
    {
        std::cout << "You should gain weight";
    }
    return 0;
} */

//Task 13
/*
int random(int low, int high)
{
    return low + std::rand() % (high - low + 1);
}

int main() {
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int a = random(1, 9);
    int b = random(1, 9);
    std::cout << a << " * " << b << " = ";
    int res = 0;
    std::cin >> res;
    if (a * b == res) {
        std::cout << "The answer is correct!";
    }
    else {
        std::cout << "The answer is wrong(";
    }

    return 0;
} */

//Task 14
/*
int main() {
  std::cout << "Enter a day of the week from 1 to 7: ";
  int day = 0;
  std::cin >> day;
  std::cout << "Enter call duration: ";
  int call = 0;
  std::cin >> call;
  std::cout << "Enter the cost of one minute: ";
  double cost = 0;
  std::cin >> cost;
 
  if (day == 6 || day == 7)
  {
    double final = call * cost * 0.8;
    std::cout << final;
  }
  else if (1 <= day && day <= 5)
  {
    double final = call * cost;
    std::cout << final;

  }
  else {
      std::cout << "Invalid week day"; // дня недели не существует
  }

  return 0;
} */

// Task 15  
/*
int main() {
    int month = 0;
    std::cout << "Month = ";
    std::cin >> month;
    switch (month) {
    case 1:
        std::cout << "January. Winter";
        break;
    case 2:
        std::cout << "February. Winter";
        break;
    case 3:
        std::cout << "March. Spring";
        break;
    case 4:
        std::cout << "April. Spring";
        break;
    case 5:
        std::cout << "May. Spring";
        break;
    case 6:
        std::cout << "June. Summer";
        break;
    case 7:
        std::cout << "July. Summer";
        break;
    case 8:
        std::cout << "August. Summer";
        break;
    case 9:
        std::cout << "Septemder. Autumn";
        break;
    case 10:
        std::cout << "October. Autumn";
        break;
    case 11:
        std::cout << "November. Autumn";
        break;
    case 12:
        std::cout << "December. Winter";
        break;
    default:
        std::cout << "Invalid month";
        break;
    }

    return 0;
} */

// Пользователь вводит текстом
/*
int main()
{
    std::string month;
    std::cout << "Month = ";
    std::cin >> month;
    if (month.compare("May") == 0)
    {
        std::cout << "May. Spring";
    }
    if (month.compare("April") == 0)
    {
        std::cout << "April. Spring";
    }
    if (month.compare("March") == 0)
    {
        std::cout << "March. Spring";
    }
    if (month.compare("June") == 0)
    {
        std::cout << "June. Summer";
    }
    if (month.compare("July") == 0)
    {
        std::cout << "July. Summer";
    }
    if (month.compare("August") == 0)
    {
        std::cout << "August. Summer";
    }
    if (month.compare("Septemder") == 0)
    {
        std::cout << "Septemder. Autumn";
    }
    if (month.compare("October") == 0)
    {
        std::cout << "October. Autumn";
    }
    if (month.compare("November") == 0)
    {
        std::cout << "November. Autumn";
    }
    if (month.compare("December") == 0)
    {
        std::cout << "December. Winter";
    }
    if (month.compare("January") == 0)
    {
        std::cout << "January. Winter";
    }
    if (month.compare("February") == 0)
    {
        std::cout << "February. Winter";
    }
    return 0;
} */

//Task 16 
/*
int main()
{
    int a, b, c, d, e, f, half1, half2 = 0;
    int number = 0;
    std::cout << "Enter a 6-digit number: " << std::endl;
    std::cin >> number;

    if (number <= 999999 && number > 99999)
    {
        a = number / 100000; // 1 цифра
        b = number / 10000 - a * 10; // 2 цифра
        c = number / 1000 - a * 100 - b * 10; // 3 цифра
        d = number / 100 - a * 1000 - b * 100 - c * 10; // 4 цифра
        e = number / 10 - a * 10000 - b * 1000 - c * 100 - d * 10; // 5 цифра
        f = number - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10; // 6 цифра

        half1 = a + b + c;
        half2 = d + e + f;

        if (half1 == half2)
        {
            std::cout << "It is a lucky number";
        }
        else {
            std::cout << "It isn't a lucky number";
        }
      
    }
    else {
        std::cout << "The number is invalid";
    }

    return 0;
} */

/*Task 17
int main() {
  std::cout << "Enter a number of copeck: ";
  int cop = 0;
  std::cin >> cop;

  if (cop % 100 == 11  cop % 100 == 12  cop % 100 == 13  cop % 100 == 14) { // подбираем склонения копейкам
    std::cout << cop << " copeeck " << std::endl;
  }
  else if (cop % 10 == 1) {
    std::cout << cop << " copeicka " << std::endl;
  }
  else if (cop % 10 == 2  cop % 10 == 3  cop % 10 == 4) {
    std::cout << cop << " copeicki " << std::endl;
  }
  else if (cop % 10 == 5  cop % 10 == 6  cop % 10 == 7  cop % 10 == 8  cop % 10 == 9  cop % 10 == 0) {
    std::cout << cop << " copeeck " << std::endl;
  }


  return 0;

}*/

// Task 18
/*
int main()
{
    int num = 0;
    int x = 0;
    std::cout << "Num = ";
    std::cin >> num;
    int m = num;
    if ((num % 10) < 100 && (num % 10) > 999)
    {
        std::cout << "A non-4-digit number was entered";
        exit(1);
    }
    while (m) // выход из цикла, когда m станет 0, т.к. 0 ~ false
    {
        x = x * 10 + m % 10;
        m /= 10;
    }
    if (x == num) // x - это переврнутый num
    {
        std::cout << "This number is read the same from left to right and from right to left. " << std::endl;
    }
    else
    {
        std::cout << "This number is not read the same from left to right and from right to left. " << std::endl;
        system("pause");
    }
    return 0;
} */

// Task 19
/*
int main() {
    int threedn = 0; // трехзначное число
    std::cout << "Enter a 3-digit number: " << std::endl; // пользователь вводит трехзначное число
    std::cin >> threedn;
    int d1, d2, d3 = 0; // цифры числа
    if (threedn > 99 && threedn < 1000) {
        d1 = threedn / 100; // 1 цифра
        d2 = threedn / 10 - d1 * 10; // 2 цифра
        d3 = threedn % 10; // 3 цифра
        int mult = d1 * d2 * d3;
        std::cout << "Is your number greater than " << d1 << "*" << d2 << "*" << d3 << " ? Enter it: ";
        int number = 0;
        std::cin >> number;        
        if (mult > number) {
            std::cout << mult << " > " << number << std::endl;
        }
        else {
            std::cout << mult << " is not greater than " << number << std::endl;
        }
        std::cout << "Is " << d1 << "+" << d2 << "+" << d3 << " a multiple of 7? " << std::endl;
        int sum = d1 + d2 + d3;
        if (sum % 7 == 0) {
            std::cout << sum << " is a multiple of 7" << std::endl;
        }
        else {
            std::cout << "no, " << sum << " is not divided by 7";
        }
    }
    else {
        std::cout << "Invalid number";
    }


    return 0;
} */

/*Task 20
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;

    std::cout << "Enter an a, b, c, d " << std::endl;
    std::cin >> a >> b >> c >> d;

    if (a > 0 && b > 0 && c > 0 && d > 0) {
        if ((a < c && b < d)  (a < d && b < c)) {

            std::cout << "Yes, you can";
        }
        else {
            std::cout << "No, you can not";

        }
    }
    else {
        std::cout << "You can not enter a negative values";
    }

    return 0;

} */

// Task 21
/*
int main()
{
    int a = 1;
    bool b = 1;
    char c = 'a';
    float d = 1.0f;
    double e = 1.0;
    std::cout << "Size int = " << sizeof(a) << std::endl;
    std::cout << "Size bool = " << sizeof(b) << std::endl;
    std::cout << "Size char = " << sizeof(c) << std::endl;
    std::cout << "Size float = " << sizeof(d) << std::endl;
    std::cout << "Size double = " << sizeof(e) << std::endl;

    return 0;
} */

