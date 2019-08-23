//int backPackII(int m, vector<int> A, vector<int> V) {
//	if (A.empty() || V.empty() || m < 1) {
//		return 0;
//	}
//
//	const int N = A.size();
//	//多加一列，用于设置初始条件，因为第一件商品要用到前面的初始值
//	const int M = m + 1;
//	vector<int> result;
//	//初始化所有位置为0，第一行都为0，初始条件
//	result.resize(M, 0);
//	//这里的i-1理解为上一行，或者未更新的一维数组值
//	for (int i = 0; i != N; ++i) {
//		for (int j = M - 1; j > 0; --j) {
//			if (A[i] > j) {
//				result[j] = result[j];
//			}
//			else {
//				int newValue = result[j - A[i]] + V[i];
//				result[j] = max(newValue, result[j]);
//			}
//		}
//	}
//	//返回装入前N个商品，物品大小为m的最大价值
//	return result[m];
//}
//};
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	long long d[66] = { 0,0,1 };//将d[0],d[1],d[2]初始化
//	for (int i = 3; i <= 66; i++) {
//		d[i] = (i - 1)*(d[i - 1] + d[i - 2]);
//	}
//	while (cin >> n) {
//		cout << d[n - 1] * n << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int m;
//	cin >> m;
//	vector<int> arr(m, 0);
//	vector<int> V(m, 0);
//}