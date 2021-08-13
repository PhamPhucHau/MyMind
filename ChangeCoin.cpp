//Bai toan doi tien 
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int S;
	cout << "Nhap so dong xu: ";
	cin >> n;
	cout << "\nNhap tong so tien can doi: ";
	cin>> S;
	cout << "\n Nhap cac menh gia cua tien:";
	vector<int> V(n);
	for (auto& it : V)
		cin >> it;
	vector<int> Min(S+1);
	for (auto& it : Min)
		it = 1e9;
	Min[0] = 0;
	vector<vector<int>> Truyvet(S+1);
	Truyvet[0].push_back(0);
	
	for (int i = 1; i <= S; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (V[j] <= i && ((Min[i - V[j]] + 1) < Min[i]))
			{
				Min[i] = Min[i - V[j]] + 1;
				vector<int> temp;
				temp = Truyvet[i - V[j]];
				temp.push_back(V[j]);
				Truyvet[i]= temp;
			}
		}
	}
		cout <<"\nSo luong dong xu nho nhat la "<< Min[S] << endl;
		cout << "Cac dong xu lan luot la: ";
		for (int i=1;i<Truyvet[S].size();i++)
			cout << Truyvet[S][i]<< " ";


	return 0;
}