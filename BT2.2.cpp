#include <iostream>;

using namespace std;

int Fact(int n) 
{
	
	
	if (n == 0) {
		return 1;
	}

		return n * Fact(n - 1);
		
	
}
int main() {
	int n;
	cin >> n;
	cout << "Giai thua cua " << n << " la: " << Fact(n);
	return 0;

}
