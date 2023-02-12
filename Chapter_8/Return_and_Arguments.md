Return_and_Arguments type according to each overloading type

Plus, Minus, Multiply, Divide
`int operator + (const Class &Object) {return this -> member_variable + Object.member_variable}`

`int operator - (const Class &Object) {return this -> member_variable - Object.member_variable}`

`int operator * (const Class &Object) {return this -> member_variable * Object.member_variable}`

`int operator / (const Class &Object) {return this -> member_variable / Object.member_variable}`

Prefix, Postfix
`Class& operator ++(int) {this -> x += 1; return *this}` : ***Postfix***
`Class& operator --()` : ***Prefix***

Relation operator overloading
`int operator && (const Class &Object) {return (this -> x && Object.x) && (this -> y && Object.y);}`
`int operator == (const Class &Object) {return (this -> x == Object.x) && (this -> y == Object.y);}`
 The reason why this overloading used return in the form of *int* is in order to return *bool* form

Subscripting function
`int& operator [](int value) {return ArrPointer[value];}` // why did this form use this return form, **int&**?

I'll think about why each operator overloading form used **Arguments and returns form** like this