//int backPackII(int m, vector<int> A, vector<int> V) {
//	if (A.empty() || V.empty() || m < 1) {
//		return 0;
//	}
//
//	const int N = A.size();
//	//���һ�У��������ó�ʼ��������Ϊ��һ����ƷҪ�õ�ǰ��ĳ�ʼֵ
//	const int M = m + 1;
//	vector<int> result;
//	//��ʼ������λ��Ϊ0����һ�ж�Ϊ0����ʼ����
//	result.resize(M, 0);
//	//�����i-1���Ϊ��һ�У�����δ���µ�һά����ֵ
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
//	//����װ��ǰN����Ʒ����Ʒ��СΪm������ֵ
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
//	long long d[66] = { 0,0,1 };//��d[0],d[1],d[2]��ʼ��
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