//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	long long x = 0;
//	long long y = 0;
//	long long xmin = 0;
//	long long xmax = 0;
//	long long ymin = 0;
//	long long ymax = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y;
//		xmin = x < xmin ? x : xmin;
//		xmax = x > xmax ? x : xmax;
//		ymin = y < ymin ? y : ymin;
//		ymax = y > ymax ? y : ymax;
//	}
//	x = xmax - xmin;
//	y = ymax - ymin;
//	long long max = x > y ? x * x : y * y;
//	cout << max << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

int count(int k, long long num)
{
	int count = 0;
	while (num)
	{
		if (num % k == k - 1)
			count++;
		num /= k;
	}
	return count;
}
int main()
{
	long q;
	cin >> q;
	while (q--)
	{
		long long k, l, r;
		cin >> k >> l >> r;
		long long result = l;
		int Count = 0;
		for (long long i = l; i <= r; i++)
		{
			int ret = count(k, i);
			if (ret > Count)
			{
				Count = ret;
				result = i;
			}
		}
		cout << result << endl;
	}
	system("pause");
	return 0;
}