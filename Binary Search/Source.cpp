#include <iostream>
using namespace std;

int Bin_Search(int arr[], int n, int k) {
	int s = 0, e = n - 1;
	int mid;
	while (s <= e) {
		mid = (s + e) / 2;
		if (arr[mid] == k) {
			return mid;
		}
		else if (arr[mid] > k) {
			e = mid - 1;
		}
		else if (arr[mid] < k) {
			s = mid + 1;
		}
	}
	return -1;
}


int main() {
	int n,k;
	cout << "How many elements does the array have: ";
	cin >> n;
	int arr[100];
	cout << "elements of array: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "element to look for: ";
	cin >> k;
	int index = Bin_Search(arr, n, k);
	if (index == -1)
		cout << "Element Not Found!" << endl;
	else
		cout << "Element is at Index: " << index << endl;

}