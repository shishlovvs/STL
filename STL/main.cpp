#include<iostream>
#include<array>
#include<vector>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define tab "\t"

//#define STL_ARRAY
//#define STL_VECTOR


void main()
{
	setlocale(LC_ALL, "ru");
#ifdef STL_ARRAY
	array<int, 5> arr = { 3,5,8,13,21 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif STL_ARRAY 

#ifdef STL_VECTOR
	//vector - ��� ���������������� ���������, ������� ������ ������ � ���� ������������� �������
	vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	cout << "Size:		 " << vec.size() << endl;
	cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (�������) ���� ������ � vector
	cout << "MaxSize:	 " << vec.max_size() << endl;
	
	vec.push_back(55);
	int* data = vec.data();
	
	try {
		for (int i = 0; i < vec.size(); i++)
		{
			//cout << vec[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	cout << "Size:		 " << vec.size() << endl;
	cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (�������) ���� ������ � vector
	cout << "MaxSize:	 " << vec.max_size() << endl;
#endif STL_VECTOR

	vector<int> vec = { 0,1,1,2,3,5,8,13,21 };
	//cout << "Size:		 " << vec.size() << endl;
	//cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (�������) ���� ������ � vector
	//cout << "MaxSize:	 " << vec.max_size() << endl;
	//cout << endl;
	
	vector<int>::iterator it = vec.begin();

	cout << "�������� ������: " << endl;
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //������� �������� � ����������� ��� ����� ������� �������� (������� �������)
																	//� ������� ������� "���� ������� �������� �� ����� end, ���� ����� �����������"
																	//���� �������� ������� ����������� (vector<int>::const_iterator), �� ����� �������
																	//�� �������� ���� �� ������� ����, ���� ����� ������� ���-�� �������
	{
		cout << * i << tab;
	}
	cout << endl << endl;

	cout << "����� insert: " << endl;
	
	vec.insert(it, 999); //����� 999 ��������� � ������ ���������� �� �������

	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //������� �������� � ����������� ��� ����� ������� �������� (������� �������)
																	//� ������� ������� "���� ������� �������� �� ����� end, ���� ����� �����������"
																	//���� �������� ������� ����������� (vector<int>::const_iterator), �� ����� �������
																	//�� �������� ���� �� ������� ����, ���� ����� ������� ���-�� �������
	{
		cout << *i << tab;
	}
	cout << endl;
	//vec.end(); - ����� end ��������� �� ��������� �������, ������� ���� ����� ����������

	cout << "����� erase:" << endl;
	
	vector<int>::iterator itErase = vec.begin();
	
	vec.erase(itErase);						//������ ����� ������ ������ ������� �������
	//vec.erase(itErase, itErase + 3);		//������ ����� ������ �������� ��������� �� ������� � �� �������� ��������

	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //������� �������� � ����������� ��� ����� ������� �������� (������� �������)
																	//� ������� ������� "���� ������� �������� �� ����� end, ���� ����� �����������"
																	//���� �������� ������� ����������� (vector<int>::const_iterator), �� ����� �������
																	//�� �������� ���� �� ������� ����, ���� ����� ������� ���-�� �������
	{
		cout << *i << tab;
	}
	cout << endl;
	

	
}