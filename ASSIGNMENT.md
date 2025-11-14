## Instructions

Rational fractions are of the form _a/b_, in which _a_ and _b_ are integers and _b &#8800; 0_. In this
exercise, by “fractions” we mean rational fractions. Suppose a/b and c/d are fractions.
Arithmetic operations on fractions are defined by the following rules:

1. _a / b + c / d = (ad + bc) / bd_
2. _a / b - c / d = (ad - bc) / bd_
3. _a / b_ \* _c / d = ac / bd_
4. _(a / b) / (c / d)_ = _ad / bc_, in which c/d &#8800; 0

Fractions are compared as follows: _a/b op c/d_ if _ad op bc_, in which _op_ is any of the relational operations. For example, _a/b < c/d_ if _ad < bc_. Design a `class`—say, `fractionType`—that performs the arithmetic and relational operations on fractions. Overload the arithmetic and relational operators so that the appropriate symbols can be used to perform the operation. Also, overload the stream insertion and stream extraction operators for easy input and output.

Write a C++ program that, using the `class` `fractionType`, performs operations on fractions.

Among other things, test the following: Suppose `x`, `y`, and `z` are objects of type `fractionType`. If the input is **2/3**, the statement

    cin >> x;

should store **2/3** in `x`. If the input is **1/2**, the statement

    cin >> y;

should store **1/2** in `y`. The statement

     cout << x + y;

should output the value of `x` + `y` in fraction form. The statement

    z = x + y;

should store the sum of `x` and `y` in `z` in fraction form. Your answer need not be in the lowest terms and you do NOT have to worry about when the denominator equals zero.

## AutoGrader Tests  
**Note: Do not make any changes to main.cpp or fractionType.h. They have been provided for you!**  
Compile using the line below:  
*g++ main.cpp fractionTypeImp.cpp -o program*  
Run using the line below:  
*./program*  
## Test 1  
**Input:**  
2/3  
1/2  
**Expected Output**  
2 / 3 == 1 / 2 = 0  
2 / 3 != 1 / 2 = 1  
2 / 3 <= 1 / 2 = 0  
2 / 3 < 1 / 2 = 0  
2 / 3 >= 1 / 2 = 1  
2 / 3 > 1 / 2 = 1  
2 / 3 + 1 / 2 = 7 / 6  
2 / 3 * 1 / 2 = 2 / 6  
2 / 3 - 1 / 2 = 1 / 6  
(2 / 3) / (1 / 2) = 4 / 3  
## Test 2  
**Input:**  
3/4  
5/8  
**Expected Output**  
3 / 4 == 5 / 8 = 0  
3 / 4 != 5 / 8 = 1  
3 / 4 <= 5 / 8 = 0  
3 / 4 < 5 / 8 = 0  
3 / 4 >= 5 / 8 = 1  
3 / 4 > 5 / 8 = 1  
3 / 4 + 5 / 8 = 44 / 32  
3 / 4 * 5 / 8 = 15 / 32  
3 / 4 - 5 / 8 = 4 / 32  
(3 / 4) / (5 / 8) = 24 / 20  
## Test 3  
**Input:**  
4/5  
4/5  
**Expected Output**  
4 / 5 == 4 / 5 = 1  
4 / 5 != 4 / 5 = 0  
4 / 5 <= 4 / 5 = 1  
4 / 5 < 4 / 5 = 0  
4 / 5 >= 4 / 5 = 1  
4 / 5 > 4 / 5 = 0  
4 / 5 + 4 / 5 = 40 / 25  
4 / 5 * 4 / 5 = 16 / 25  
4 / 5 - 4 / 5 = 0 / 25  
(4 / 5) / (4 / 5) = 20 / 20  
