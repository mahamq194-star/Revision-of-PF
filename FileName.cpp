#include<iostream>
using namespace std;
int main()
{
	int arr1[3], arr2[3];
	cout << "Enter 3 values for first array:" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> arr1[i];
	}
	cout << "Enter 3 values for second array:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr2[i];
	}
	int* p1 = arr1;
	int* p2 = arr2;
	for (int i = 0; i < 3; i++)
	{
		int temp = *(p1 + i);
		*(p1 + i) = *(p2 + i);
		*(p2 + i) = temp;

	}
	cout << "First array after swapping:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << arr1[i] << " ";

	}
	cout << endl;
	cout << "Second array after swapping:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << arr2[i] << " ";

	}
	cout << endl;
	return 0;
}