#include <iostream>

using namespace std;

int main() {
	int *array;
	int n, low, high, mid, key, temp, found = 0;
	
	cout << "Enter number of elements" << endl;
	cin >> n;
	
	array = new int[n];
	
	cout << "Enter the elements" << endl;
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if (array[j] < array[i]) {
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
	
	cout << "The sorted array is " << endl;
	
	for(int i = 0; i < n; i++)
		cout << array[i] << " ";
		
	return 0;
}