Classes and Objects

1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.
4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.
5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.
6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.
8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.
9. Define a class Circle and define an instance member function to find the area of the
circle.
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.

Solution:-

1. #include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    void setValues(float r, float i) {
        real = r;
        imag = i;
    }
    void printValues() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    float r, i;
    cout << "Enter real and imaginary part of complex number: ";
    cin >> r >> i;
    c1.setValues(r, i);
    c1.printValues();
    return 0;
}

2.#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    void setValues(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime() {
        cout << "Time: " << hours << " hr " << minutes << " min " << seconds << " sec" << endl;
    }
};

int main() {
    Time t1;
    int h, m, s;
    cout << "Enter time (hours, minutes, seconds): ";
    cin >> h >> m >> s;
    t1.setValues(h, m, s);
    t1.displayTime();
    return 0;
}

3. #include <iostream>
using namespace std;

class Factorial {
public:
    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    Factorial f;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << f.findFactorial(num) << endl;
    return 0;
}

4. #include <iostream>
using namespace std;

class LargestNumber {
public:
    int findLargest(int a, int b, int c) {
        if (a > b && a > c) return a;
        else if (b > a && b > c) return b;
        else return c;
    }
};

int main() {
    LargestNumber ln;
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Largest number is: " << ln.findLargest(a, b, c) << endl;
    return 0;
}

5. #include <iostream>
using namespace std;

class ReverseNumber {
public:
    int reverse(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
};

int main() {
    ReverseNumber rn;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number is: " << rn.reverse(num) << endl;
    return 0;
}

6. #include <iostream>
using namespace std;

class Square {
private:
    static int count;
public:
    int findSquare(int n) {
        count++;
        return n * n;
    }
    static int getCount() {
        return count;
    }
};

int Square::count = 0;

int main() {
    Square sq;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is: " << sq.findSquare(num) << endl;
    cout << "Function called " << Square::getCount() << " times" << endl;
    return 0;
}

7. #include <iostream>
using namespace std;

class Greatest {
public:
    int findGreatest(int a, int b, int c) {
        if (a > b && a > c) return a;
        else if (b > a && b > c) return b;
        else return c;
    }
};

int main() {
    Greatest g;
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Greatest number is: " << g.findGreatest(a, b, c) << endl;
    return 0;
}

8. #include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;
public:
    void setValues(double l, double b) {
        length = l;
        breadth = b;
    }
    double findArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle r;
    double l, b;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> l >> b;
    r.setValues(l, b);
    cout << "Area of the rectangle: " << r.findArea() << endl;
    return 0;
}

9. #include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle {
private:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    double findArea() {
        return PI * radius * radius;
    }
};

int main() {
    Circle c;
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    c.setRadius(r);
    cout << "Area of the circle: " << c.findArea() << endl;
    return 0;
}

10. #include <iostream>
using namespace std;

const double PI = 3.14159;

class Area {
public:
    double square(double side) {
        return side * side;
    }
    double rectangle(double length, double breadth) {
        return length * breadth;
    }
    double circle(double radius) {
        return PI * radius * radius;
    }
};

int main() {
    Area area;
    double side, length, breadth, radius;
    
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of square: " << area.square(side) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area.rectangle(length, breadth) << endl;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << area.circle(radius) << endl;

    return 0;
}
