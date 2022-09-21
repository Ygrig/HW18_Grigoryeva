#include <iostream>

inline double mean(double n1, double n2, double n3) {
	return (n1 + n2 + n3) / 3;
}

int max(int num1, int num2, int num3) {
	std::cout << "INT\n";
	if (num1 > num2 && num1 > num3) return num1;
	if (num2 > num1 && num2 > num3) return num2;
	return num3;

}

short max(short num1, short num2, short num3) {
	std::cout << "SHORT\n";
	if (num1 > num2 && num1 > num3) return num1;
	if (num2 > num1 && num2 > num3) return num2;
	return num3;
}

double max(double num1, double num2, double num3) {
	std::cout << "DOUBLE\n";
	if (num1 > num2 && num1 > num3) return num1;
	if (num2 > num1 && num2 > num3) return num2;
	return num3;
}

template <typename T>
T min(T arr[], const int length) {
	T min = arr[0];
	for (int i = 0; i < length; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	std::cout << "\n";
	return min;
}
	

int main() {
	
	int a, b, c;
	
	std::cout << "Task 1. Mean of three numbers (inline function).\n";
	std::cout << "Enter 3 numbers:\n";
	std::cin >> a >> b >> c;
	std::cout << "Mean of these three numbers = " << mean(a, b, c) << "\n\n";

	std::cout << "Task 2. Maximum of three numbers (overload function).\n";

	std::cout << "Maximum = " << max(47, 548, 509) << "\n\n";
	std::cout << "Maximum = " << max(2,1, 3) << "\n\n"; 
	std::cout << "Maximum = " << max(2.52, 7.47, 7.78) << "\n\n";
	
	std::cout << "Task 3. Minimum element in array (template function).\n";
	const int size = 5;
	int arr[size]={ 6,2,5,14,3 };
	std::cout << "An array given: \n";
	for (int i = 0; i < 5; i++) 
		std::cout << arr[i] << " ";
	
	std::cout << "Minimum in this array  = " << min(arr,5) << "\n\n";
	

	
	return 0;
}
