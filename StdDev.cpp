// Andrew Niklas
// Homework 2
// Completed 1/20/2016

#include <iostream>
#include <cmath>

double sum(double[], int);
double mean(double[], int);
double stdDev(double[], int);

double values[10];
int size = 10;
double difSqrd[10];

double sum(double values[], int size){
	double x = 0;
	for(int i = 0; i < size; i++){
		x += values[i];
	}
	return x;
}

double mean(double values[], int size){
	return sum(values, size)/size;
}

double stdDev(double values[], int size){
	double avg = mean(values, size);
	for(int i = 0; i < size; i++){
		difSqrd[i] = (values[i] - avg);
	}
	for(int i = 0; i < size; i++){
		difSqrd[i] = pow(difSqrd[i], 2);
	}
	return sqrt(mean(difSqrd,size));
}

int main(){
	for(int i = 0; i < size; i++){
		std::cout << "input double value " << i+1 << ": ";
		std::cin >> values[i];
	}
	std::cout << "\nThe Standard Deviation of the entered values is: ";
	std::cout << stdDev(values, size) << std::endl;
}
