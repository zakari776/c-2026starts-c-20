#include <iostream> 
#include <vector>
using namespace std;


vector<int> product(int x, int start, int end);

int main()
{

	//int number = 5;

	// retrun arry ? 
	// number porduct n(1-10) => arry
	// amin output stremaing console indexing
	//int x[10]{};
	//for (int i = 0; i < 10; i++)
	//{
	//	
	//	x[i] = product(5,i);

	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << x[i] << endl ;

	//}
	int number, begin, ending;
		
	cout << " number : " << endl; cin >> number;
	cout << " begin : " << endl; cin >> begin;
	cout << " ending : " << endl; cin >> ending;
	auto v = product(number, begin, ending);
	//int lenth = ending - begin + 1;
	// not match in native app use cpu not more  i use i < v.size()
	for ( int i = 0; i < v.size();i++)// i = 0 , i , i < end - start + 1 || i < v.size() // i = 0 , 1 ... v.size()-1 
	{
		cout << v[i] << endl;
	}


	return 0;
} 
vector<int> product(int x, int start ,const int end)
{
	int lenth = end - start + 1;
	vector<int> nameofdynamicarry(lenth);
	for (int l = start , i = 0 ; l <= end; i++ ,l++)
	{
		nameofdynamicarry[i] = x * l;
	}
	return nameofdynamicarry;
}
