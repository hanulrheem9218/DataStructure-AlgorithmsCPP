#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	char ch = 'Q';
	char* p = &ch; //& address of operator.

	ch = 'Z';
	cout << *(p) << endl;
	*p = 'X';
	cout << ch;
	int a[10] = {1,2,3,4,5,6,4};
	//int a[] = {3};
	int nums[] = {1, 3, 4, 5, 6};
	//array
	vector<int> sup = vector<int>();
	sup.push_back(2);
	sup.push_back(4);
	list<int> sp = list<int>();

	char c[] = { 'c','a','t' };
	//char sup[10] = { '3','4','5' };
	const char* fds = "fdfsd";
	char di[] = "fdsafds";
	int length = strlen(di);
	for (int i = 0; i < length; i++) {
		cout << di[i];
	}

	for (int j = 0; j < strlen(fds); j++) {
		cout << fds[j];
	}
	char* t = c; //points to c.
	char* q = &c[0]; //also points to c
	cout << endl;
	cout << c[2] << t[2] << q[2];

	// delete operator.
	char* buffer = new char[500];
	buffer[3] = 'a';
	
	delete[] buffer;

	const char* author = "Samuel Clements";
	const char*& peName = author;
	peName = "Mark Twains";

	
	cout << author;
	cout << endl;
	cout << *peName << endl;

	int lonely = 0;
	int* mewt = &lonely;

	*mewt = 4;
	cout << *mewt;

	return 0;
}