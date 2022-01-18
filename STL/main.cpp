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
	//vector - это последовательный контейнер, который хранит данные в виде динамического массива
	vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	cout << "Size:		 " << vec.size() << endl;
	cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (емкость) есть только у vector
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
	cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (емкость) есть только у vector
	cout << "MaxSize:	 " << vec.max_size() << endl;
#endif STL_VECTOR

	vector<int> vec = { 0,1,1,2,3,5,8,13,21 };
	//cout << "Size:		 " << vec.size() << endl;
	//cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (емкость) есть только у vector
	//cout << "MaxSize:	 " << vec.max_size() << endl;
	//cout << endl;
	
	vector<int>::iterator it = vec.begin();

	cout << "Исходный массив: " << endl;
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //создаем итератор и присваеваем ему адрес первого элемента (создаем счетчик)
																	//в условии говорим "пока текущий итератор не равен end, цикл будет выполняться"
																	//если итератор сделать константным (vector<int>::const_iterator), то таким образом
																	//мы убережем себя от поломки кода, если вдруг захотим что-то вписать
	{
		cout << * i << tab;
	}
	cout << endl << endl;

	cout << "Метод insert: " << endl;
	
	vec.insert(it, 999); //число 999 добавится в начало инкремента по условию

	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //создаем итератор и присваеваем ему адрес первого элемента (создаем счетчик)
																	//в условии говорим "пока текущий итератор не равен end, цикл будет выполняться"
																	//если итератор сделать константным (vector<int>::const_iterator), то таким образом
																	//мы убережем себя от поломки кода, если вдруг захотим что-то вписать
	{
		cout << *i << tab;
	}
	cout << endl;
	//vec.end(); - метод end указывает на следующий элемент, который идет после последнего

	cout << "Метод erase:" << endl;
	
	vector<int>::iterator itErase = vec.begin();
	
	vec.erase(itErase);						//данный метод удалит первый элемент массива
	//vec.erase(itErase, itErase + 3);		//данный метод удалит диапазон элементов от первого и до третьего элемента

	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //создаем итератор и присваеваем ему адрес первого элемента (создаем счетчик)
																	//в условии говорим "пока текущий итератор не равен end, цикл будет выполняться"
																	//если итератор сделать константным (vector<int>::const_iterator), то таким образом
																	//мы убережем себя от поломки кода, если вдруг захотим что-то вписать
	{
		cout << *i << tab;
	}
	cout << endl;
	

	
}