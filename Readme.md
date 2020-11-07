  The value e x can be approximated by the sum 1 + x + x 2 /2! + x 3 /3! + ... + x n /n!
Write a program that takes a value x as input and outputs this sum for n taken to be each of the values 1
to 100. The program should also output e x calculated using the predefined function exp . The function
exp is a predefined function such that exp ( x ) returns an approximation to the value e x . The function
exp is in the library with the header file cmath . Your program should repeat the calculation for new
values of x until the user says she or he is through. Use variables of type double to store the factorials
or you are likely to produce integer overflow