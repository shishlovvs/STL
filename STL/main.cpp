#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>


using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define tab "\t"

//#define STL_ARRAY
//#define STL_VECTOR
//#define STL_VECTOR2
//#define STL_DEQUE
#define STL_LIST
//template<typename T>void print(const vector<T>& vec)
//{
//	for (typename vector<T>::const_iterator it = vec.begin(); it != vec.end();  it++)
//	{
//		cout << *it << tab;
//	}
//	cout << endl;
//}
//template<typename T>void print(const list<T>& list)
//{
//	for (typename list<T>::const_iterator it = list.begin(); it != list.end(); it++)
//	{
//		cout << *it << tab;
//	}
//	cout << endl;
//}

template<typename T>
void PrintList(const list<T> lst)
{
	list <int>:: iterator it;
	for (auto i = lst.cbegin(); i != lst.end(); ++i)
	{
		cout << *i << tab;
	}
}

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

#ifdef STL_VECTOR2
	vector<int> vec = { 0,1,1,2,3,5,8,13,21 };
	//cout << "Size:		 " << vec.size() << endl;
	//cout << "Capacity:	 " << vec.capacity() << endl;	//capacity (емкость) есть только у vector
	//cout << "MaxSize:	 " << vec.max_size() << endl;
	//cout << endl;

	int index;
	int value;
	cout << "Введите индекс добавляемого объекта: \t"; cin >> index;
	cout << "Введите значение добавляемого объекта: \t"; cin >> value;
	vec.insert(vec.begin() + index, value);
	print(vec);

	std::vector<int> powers = { 1024, 2048, 4096, 8192, 16384 };

	//vec.insert(vec.begin() + 3, powers.begin(), powers.end());
	vec.insert(vec.begin() + 3, { 256, 384,512,768 });
	for (int i : vec)cout << i << tab; cout << endl;



	cout << "Исходный массив: " << endl;
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) //создаем итератор и присваеваем ему адрес первого элемента (создаем счетчик)
																	//в условии говорим "пока текущий итератор не равен end, цикл будет выполняться"
																	//если итератор сделать константным (vector<int>::const_iterator), то таким образом
																	//мы убережем себя от поломки кода, если вдруг захотим что-то вписать
	{
		cout << *i << tab;
	}
	cout << endl << endl;

	cout << "Метод insert: " << endl;

	vec.insert(vec.begin(), 999); //число 999 добавится в начало инкремента по условию

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

#endif // STL_VECTOR2

#ifdef STL_DEQUE

	std::deque<int> deque = { 3,5,8,13,21 };
	deque.push_back(34);
	deque.push_back(55);
	deque.push_back(89);
	deque.push_front(2);
	deque.push_front(1);
	deque.push_front(1);
	deque.push_front(0);

	cout << "Полученный массив: ";

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << tab;
	}
	cout << endl;
#endif // STL_DEQUE

#ifdef STL_LIST
	list<int> list = { 0,1,1,2,3,5,8,13,21 };
	cout << "Исходный массив: " << endl;
	PrintList(list);
	cout << endl;

	cout << "Метод Insert: " << endl;
	int index;
	int value;
	cout << "Введите индекс добавляемого объекта: \t"; cin >> index;
	cout << "Введите значение добавляемого объекта: \t"; cin >> value;
	
	std::list<int>::iterator iterator = list.begin();
	for (int i = 0; i < index; i++)iterator++;
	list.insert(iterator, value);
	
	PrintList(list);
	cout << endl;

	cout << "Метод Erase:" << endl;
	int erase_index;
	cout << "Введите индекс удаляемого объекта: \t"; cin >> erase_index;
	
	std::list<int>::iterator indexplace = list.begin();
	for (int i = 0; i < erase_index; i++)iterator++;
	list.erase(indexplace);

	PrintList(list);
	cout << endl;
	
#endif // STL_LIST

}