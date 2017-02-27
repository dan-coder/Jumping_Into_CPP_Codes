#include <iostream>
#include <string>

int my_array[ 6 ]; // declaring array of 6 elements (0-5 indices), of an integer type, but you can use other types as well.

my_array[ 2 ] = 2; // set the 3rd element of the variable to 2, we are saying that the index 2 has a value of 2.

my_array[ 3 ]; // accesing the fourth element of a variable

// when it comes to array we call index to describe the position of an element value inside the array
// Ex: int my_array[ 6 ] means that we are declaring an array of integer type with an index of 6 elements (0 - 5 indices)
// Indexes starts at 0 and we say that an index is how far you need to go down the list before you reach your box
// This is the same thing as the offset, how far do I have to go down the index of the array before I reach the end (5 in our example, remember that nee need to start counting from 0, 1, 2, 3, 4, 5, equals 6 elements or an index of 6).
