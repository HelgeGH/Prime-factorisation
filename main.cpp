#include <iostream>
typedef long long ll;
using namespace std;

void primal_represent(ll n) {
	bool first_num = true;

	//special case negative numbers
	if (n < 0) {
		cout << "-1";
		n *= -1;
		first_num = false;
	}
	//start with the first prime
	ll i = 2;
	//factorize as much as possible
	while (n >= i * i) {    //there are no factors to be found
							//number of factors
		int k = 0;
		//factorise as much as possible
		while (n % i == 0) {
			k++;
			n /= i;
		}
		if (k == 1) {
			if (!first_num)
				cout << " ";
			cout << i;
			first_num = false;
		}
		else if (k > 1) {
			if (!first_num)
				cout << " ";
			cout << i << "^" << k;
			first_num = false;
		}
		++i;
	}
	if (n > 1) {
		if (!first_num)
			cout << " ";
		cout << n;
	}
	cout << endl;
}

int main() {
	ll read;
	while (cin >> read)
		primal_represent(read);

	system("pause");
	return 0;
}