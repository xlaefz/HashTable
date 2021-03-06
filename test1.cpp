#include "HashMap.h"
#include "DummyStruct.h"
int main(int argc, char* argv[])
{
	//test one insert	
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct dummy(5);
	bool test = mTable.set("popo", dummy);
	std::cout << "added status: " << test << std::endl;
	*/

	//test inserts over size
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct dummy0(0); DummyStruct dummy1(1);
	DummyStruct dummy2(2); DummyStruct dummy3(3);
	DummyStruct dummy4(4); DummyStruct dummy5(4);

	bool test = mTable.set("dodo", dummy0);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("fofo", dummy1);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("lolo", dummy2);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("toto", dummy3);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("moto", dummy4);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("momo", dummy5);
	std::cout << "added status (should fail because map full): " << test << std::endl;
	std::cout<< "load factor: " << mTable.load() << std::endl;
	*/

	//test get
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct dummy5(5);
	bool test = mTable.set("dodo", dummy5); 
	DummyStruct test1 = mTable.get("dodo");
	std::cout << "Should be 5: " << test1.data << std::endl;
	std::cout << "Should be true: " << test << std::endl;
	std::cout << "Load Factor: " << mTable.load() << std::endl;
	*/

	//test delete when mSize is 0
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct test1 = mTable.deleteitem("hello"); 
	std::cout << test1.data << std::endl; 
	*/

	//test get when mSize is 0
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct test1 = mTable.get("hello"); 
	std::cout << test1.data << std::endl; 
	*/

	//test delete reg
	/*
	HashTable<DummyStruct> mTable(5);
	DummyStruct dummy5(5);
	bool test = mTable.set("dodo", dummy5);
	std::cout << "added status: " << test << std::endl;
	std::cout << "Load Factor should be .2: " << mTable.load() << std::endl;
	DummyStruct temp = mTable.deleteitem("dodo");
	std::cout << "Load factor should be 0: " << mTable.load() << std::endl;
	std::cout << "this should be 5: " << temp.data << std::endl;
	*/
}











