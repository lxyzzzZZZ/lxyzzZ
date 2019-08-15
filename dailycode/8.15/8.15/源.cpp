#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		int sum = 0;
		int ret = 0;

		while (B)
		{
			sum = A ^ B;
			ret = (A & B) << 1;
			A = sum;
			B = ret;
		}
		return A;
	}
};








#include <iostream>
#include <vector>

using namespace std;

int Is_Fun(int n, int m)
{
	if (n > 1 && m > 1)
		return Is_Fun(n - 1, m) + Is_Fun(n, m - 1);
	else if ((n >= 1 && m == 1) || (n == 1 && m >= 1))
		return n + m;
	else
		return 0;
}
int main()
{

	int n, m;
	while (cin >> n >> m)
	{
		cout << Is_Fun(n, m) << endl;;
	}
	return 0;

}