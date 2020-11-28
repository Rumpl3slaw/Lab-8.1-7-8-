#include <iostream>
#include <string>

using namespace std;

int Print(const string A)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = A.find("while", pos, 2)) < A.size())
	{
		k++;
		pos += 2;
	}
	return k;
}
string Change(string& A)
{
	size_t pos = 0;
	while ((pos = A.find("while", pos, 2)) < A.size())
		A.replace(pos, 2, "*");
	return A;
}
int main()
{
	string A;
	
	cout << "VVedit` stroku";
	getline(cin, A);

	cout << "Chyslo" << Print(A) << endl;
	cout << "Modified string (param):" << Change(A) << endl;
	return 0;
}