#include<iostream>
using namespace std;
int main() {
	int row; int col;
	cin >> row >> col;
	int count = 1;
	int i = 1;
	while (i <= row) {
		int j = 1;
		while (j <= col) {
		
			if (i >= j) {
				cout << i;
			}
			else {
				cout << " ";
			}
			j++;

		}
		cout << endl;

		i++;
	}
	return 0;
}