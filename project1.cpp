#include<iostream>
using namespace std;
int sum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum += arr[i];
	}
	return sum;

}
int main()
{
	int arr[5];
	cout << "Enter marks of each subject: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter marks of subject" << i + 1 << ":";
		cin >> arr[i];
	}
	int total = sum(arr, 5);
	cout << "Total sum of marks=" << total << endl;
	return 0;
}