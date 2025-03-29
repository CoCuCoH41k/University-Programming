#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <functional>
using namespace std;
class ArrayCOUT
{
public:
	static void showIntArray1D(int size, int* arr);
	static void showIntArray1D_UC_per_value(int size, int* arr, std::function<bool(int)> formatter);
	static void showIntArray1D_UC_per_digit(int size, int* arr, std::function<bool(char)> formatter);

	static void showIntArray2D(int nSize, int mSize, int** arr);
	static void showIntArray2D_UC_per_value(int nSize, int mSize, int** arr, std::function<bool(int)> formatter);
	static void showIntArray2D_UC_per_digit(int nSize, int mSize, int** arr, std::function<bool(char)> formatter);

	static void showIntArray1D_l(int size, long int* arr);
	static void showIntArray1D_l_UC_per_value(int size, long int* arr, std::function<bool(int)> formatter);
	static void showIntArray1D_l_UC_per_digit(int size, long int* arr, std::function<bool(char)> formatter);

	static void showIntArray2D_l(int nSize, int mSize, long int** arr);
	static void showIntArray2D_l_UC_per_value(int nSize, int mSize, long int** arr, std::function<bool(int)> formatter);
	static void showIntArray2D_l_UC_per_digit(int nSize, int mSize, long int** arr, std::function<bool(char)> formatter);

	static void showIntArray1D_ll(int size, long long int* arr);
	static void showIntArray1D_ll_UC_per_value(int size, long long int* arr, std::function<bool(int)> formatter);
	static void showIntArray1D_ll_UC_per_digit(int size, long long int* arr, std::function<bool(char)> formatter);

	static void showIntArray2D_ll(int nSize, int mSize, long long int** arr);
	static void showIntArray2D_ll_UC_per_value(int nSize, int mSize, long long int** arr, std::function<bool(int)> formatter);
	static void showIntArray2D_ll_UC_per_digit(int nSize, int mSize, long long int** arr, std::function<bool(char)> formatter);
};

