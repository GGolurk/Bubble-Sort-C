// Bubble sort algorithm.

#include <stdio.h>

// const MAX is max length of the array
const int MAX = 9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
} // End main.

// function sort (array):
void sort(int* array){
	// create integer variables i and j
	int i;
	int j;
	// for i from zero to MAX -1:
	for(i = 0; i < MAX -1; i++){
		// for j from zero to MAX -1:
		for(j = 0; j < MAX -1; j++){
			// if array[j] > array[j + 1]:
			if(array[j] > array[j + 1]){
				// swap array[j] with array[j + 1]
				/* This line is strange to me. I thought that array[j] and array[j + 1] would be pointers to the elements in the array, but apparently they are the elements in that
				 * array. Now that I think about it it does make sense: elements of an array are not (necessarily, there's probably some case where they are) pointers. It just looks
				 * strange to define array as a pointer, and then need to get the address of array[j] because it isn't. */
				swap(&array[j], &array[j + 1]);
				// Prints out the values after each swap.
				printValues(array);
			} // End if.
		} // End j for loop.
	} // End i for loop.
} // End sort.

// Function which swaps two values.
void swap(int* ptrOne, int* ptrTwo){
	// Assigns the value at ptrOne (pointer one) to numOne, and the value at ptrTwo (pointer two) to numTwo. 
	int numOne = *ptrOne;
	int numTwo = *ptrTwo;
	// Changes the value at ptrOne to the value of numTwo, and changes the value of ptrTwo to the value of numOne.
	// This effectively swaps the initial values of ptrOne and ptrTwo.
	*ptrOne = numTwo;
	*ptrTwo = numOne;
} // End swap.

// Function which prints the values of an array.
void printValues(int* values){
	for(int i = 0; i < MAX; i++){
		printf("%d", values[i]);
	} // End for loop.
	// New line. 
	printf("\n");
} // End printValues.
