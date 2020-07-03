# CONVERSION
manipulations on a number based on base
The program will accept any number as base from 2 to 36.
The program will then identify the base that would result in a least value for the given representation.
Example:
In the case of 17, the least possile base is 8 and the least possible value is 15 in base 10.
The program will perform the successive base reductions and print the resulting number as output.
The face values will be,
0->0
9->9
A->10
Z->35
Example Input/Output:
Input
53
Output
3
Explanation:
n=53
53(base 6)=>33
33(base 4)=>15
15(base 6)=>11
11(base 2)=>3
3(base 4)=>3
Therefore, 3 is the output.
