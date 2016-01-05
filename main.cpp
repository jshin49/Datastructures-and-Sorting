#include <iostream>
#include <vector>
#include <fstream>
#include "linkedlistsingle.hpp"
#include "linkedlistdouble.hpp"
#include "heap.hpp"
#include "heapsort.hpp"

using namespace std;

int main() {
	ifstream infile("IntegerArray1-100000.txt");
	int a;
	vector<int> vec1;
	vec1.reserve(100000);
	while (infile >> a)
		vec1.push_back(a);

	ifstream infile2("IntegerArray1-10000.txt");
	vector<int> vec2;
	vec2.reserve(10000);
	while (infile >> a)
		vec2.push_back(a);

	vector<int> test = { 1, 2, 3, 4, 5 };
	vector<int> test1 = { 5, 14, 10, 8, 7, 9, 3, 2, 4, 1 };
	vector<int> test2 = { 4, 1, 3, 2, 16, 9, 10, 14, 8, 7 };
	vector<int> test3 = { 12, 8, 5, 6, 7, 1, 0, 4, 1, 3 };
	vector<int> test4 = { 9, 8, 5, 6, 7, 1, 0, 4, 1, 3 };

	// Single Linked List Test
	cout << "Single Linked List Tests" << endl;
	cout << "Initialization and print: " << endl;
	SingleLinkedList slist(test);
	slist.print_list();
	cout << "Push front 0 and print: " << endl;
	slist.push_front(0);
	slist.print_list();
	cout << "Insert at head 1 and print: " << endl;
	slist.insert_elem(1, 1);
	slist.print_list();
	cout << "Push back 10 and print: " << endl;
	slist.push_back(10);
	slist.print_list();
	cout << "Insert at tail 10 and print: " << endl;
	slist.insert_elem(10,slist.size());
	slist.print_list();
	cout << "Pop front and print: " << endl;
	slist.pop_front();
	slist.print_list();
	cout << "Delete at head and print: " << endl;
	slist.delete_elem(1);
	slist.print_list();
	cout << "Pop back and print: " << endl;
	slist.pop_back();
	slist.print_list();
	cout << "Delete at tail and print: " << endl;
	slist.delete_elem(slist.size());
	slist.print_list();
	cout << "Delete all and print: " << endl;
	slist.delete_list();
	slist.print_list();
	cout << "Delete an one element list and print: " << endl;
	SingleLinkedList slist1(1);
	slist1.print_list();
	slist1.delete_elem();
	slist1.print_list();
	cout << "Delete an empty list: " << endl;
	slist1.delete_elem();

	cout << endl;

	// Double Linked List Test
	cout << "Double Linked List Tests" << endl;
	cout << "Initialization and print: " << endl;
	DoubleLinkedList dlist(test);
	dlist.print_list();
	cout << "Push front 0 and print: " << endl;
	dlist.push_front(0);
	dlist.print_list();
	cout << "Insert at head 1 and print: " << endl;
	dlist.insert_elem(1, 1);
	dlist.print_list();
	cout << "Push back 10 and print: " << endl;
	dlist.push_back(10);
	dlist.print_list();
	cout << "Insert at tail 10 and print: " << endl;
	dlist.insert_elem(10, dlist.size());
	dlist.print_list();
	cout << "Pop front and print: " << endl;
	dlist.pop_front();
	dlist.print_list();
	cout << "Delete at head and print: " << endl;
	dlist.delete_elem(1);
	dlist.print_list();
	cout << "Pop back and print: " << endl;
	dlist.pop_back();
	dlist.print_list();
	cout << "Delete at tail and print: " << endl;
	dlist.delete_elem(dlist.size());
	dlist.print_list();
	cout << "Delete all and print: " << endl;
	dlist.delete_list();
	dlist.print_list();
	cout << "Delete an one element list and print: " << endl;
	DoubleLinkedList dlist1(1);
	dlist1.print_list();
	dlist1.delete_elem();
	dlist1.print_list();
	cout << "Delete an empty list: " << endl;
	dlist1.delete_elem();

	cout << endl;

	// Heap Test
	cout << "Heap Tests" << endl;
	cout << "Initialization and print: " << endl;
	Heap heap3(test3);
	heap3.print_heap();
	cout << "Insert 10 and print: " << endl;
	heap3.insert(10);
	heap3.print_heap();
	cout << "Initialization and print: " << endl;
	Heap heap4(test4);
	heap4.print_heap();
	cout << "Pop max and print: " << endl;
	int heap4max = heap4.pop_max();
	heap4.print_heap();
	cout << "max: " << heap4max << endl;
	cout << "Heapsort and print: " << endl;
	heap4.sort();
	heap4.print_heap();
	cout << endl;

	// Sorting Test
	cout << "Sorting Tests" << endl;
	//heapsort(vec2);
	//heapsort_desc(test);
	//heapsort_desc(test2);


	return 0;
}