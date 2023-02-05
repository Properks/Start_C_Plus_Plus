#### Summary cobfusing information ahout reference declarator in class

C++

    class Point
    {
    private:
        int x;
    public:
        Point();
        Point(int value);
        ~Point(){...}
        int operator + (const Point &A1);
    }

    Point::Point() {...}
    Point::Point(int value) {...}

`int Point::operator + (const Point &A1) {...}`

Let's talk about **`const Point &A1`**, argument in member function.
***First***, If you write like `const Point &A1`, you can't modify *A1*'s member vaiable and member function.
***Second***, If you write like `Point &A1`, you can modify member variable in function. And then If you modify member variable in function, A1's member variable will be changed after function.
***Third***, If you write like `Point A1` you can modify member variable in function. But, A1's member variable that which is outside the function will **not change**.

`Point A;
Point& B = A`

Talk about constructor with reference declarator
If you declare constructor as `Point& B = A`, If A's member variables change, B's those will does.