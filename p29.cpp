#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "enter number: ";
	cin >> n;
	int decimal[10] = {};
	while (n > 0) {
		decimal[n % 10] += 1;
		n = (n - n % 10) / 10;
	}
	for (int i = 0; i < 10; i++) {
		if (decimal[i] > 1) {
			sum += 1;
		}
	}
	cout << "There are " << sum << " repeated digits.";
	return 0;
}

