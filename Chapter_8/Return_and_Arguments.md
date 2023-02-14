## Return_and_Arguments type according to each overloading type

#### Plus, Minus, Multiply, Divide
`int operator + (const Class &Object) {return this -> member_variable + Object.member_variable}`

`int operator - (const Class &Object) {return this -> member_variable - Object.member_variable}`

`int operator * (const Class &Object) {return this -> member_variable * Object.member_variable}`

`int operator / (const Class &Object) {return this -> member_variable / Object.member_variable}`

#### Prefix, Postfix
`Class& operator ++(int) {this -> x += 1; return *this}` : ***Postfix***
`Class& operator --()` : ***Prefix***

#### Relation operator overloading
`int operator && (const Class &Object) {return (this -> x && Object.x) && (this -> y && Object.y);}`
`int operator == (const Class &Object) {return (this -> x == Object.x) && (this -> y == Object.y);}`
 The reason why this overloading used return in the form of *int* is in order to return *bool* form

#### Subscripting function
`int& operator [](int value) {return ArrPointer[value];}` 
##### // TODO:why did this form use this return form, **int&**?

    In my thought, If the object itself is changed and returned after function, return value will use with '&'
###### Strength(use `&` in return statement)
1. Improved performance: Returning a reference is faster than returning a copy, since no memory allocation or copying is required.
2. Modifications: When you return a reference to an object, you can modify the original object through the returned reference.
3. Avoiding Copies: If you return a large object, it can be slow and use a lot of memory to make a copy of the object. By returning a reference, you can avoid this overhead and save memory.

   ***First*** = Memory, ***Second*** = useful to modify, ***Third***, Improve performance according to ***First***

###### Drawbacks(Worth)
1. Making harder to read and understand code
2. If the reference is misused, increasing the risk of bugs.



#### '<<' operator overloading
`friend ostream& operator << (ostream &os, Class &object)`

#### '>>' operator overloading
`friend istream& operator >> (istream &is, Class &object)`

    can write
    {is >> Object.ArrPointer; return is;}
    {is.getline(Object.ArrPointer, 512); return is;} // cin.getline
    Reference : https://github.com/Cnspace/Start_C_Plus_Plus/commit/d90d0e418b03e67c90c2ac9a83e5fe5bfeae734c

I'll think about why each operator overloading form used **Arguments and returns form** like this