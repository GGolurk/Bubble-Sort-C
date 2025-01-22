# Bubble-Sort-C
First sorting algorithm, in C.

Algorithm:
constant MAX is max length of array
function sort (array):
	create integer variables i and j
	for i from 0 to MAX - 1:
		for j from 0 to MAX - 1:
			if array[j] > array[j + 1]:
				swap array[j] with array[j + 1]
				printArray(array)
