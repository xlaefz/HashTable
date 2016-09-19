#include "HashMap.h"
#include "DummyStruct.h"
int main(int argc, char* argv[])
{
	/*
	HashTable<int> mTable(5);
	bool success = mTable.set("chocolates", 1);
	int x = mTable.get("chocolates");
	std::cout << "x value: " << x << std::endl;
	std::cout << "load " << mTable.load() << std::endl;
	mTable.deleteitem("chocolates");
	std::cout << "load " << mTable.load() << std::endl;
	*/
	HashTable<DummyStruct> mTable(5);
	DummyStruct dummy(5);
	bool test = mTable.set("popo", dummy);
	DummyStruct empty = mTable.deleteitem("popopo");
	
	if(empty.data == NULL)
	{
		std::cout << "ERROR DELETING ITEM" << std::endl;
	}
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("coco", dummy);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("dodo", dummy);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("fofo", dummy);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("lolo", dummy);
	std::cout << "added status: " << test << std::endl;
	test = mTable.set("toto", dummy);
	std::cout << "added status: " << test << std::endl;
	std::cout << mTable.load() << std::endl;
}