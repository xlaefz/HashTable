#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

template <class V>
class HashTable
{

public:
	HashTable(int size)
	{
		mSize = size;
		mLoadFactor =0;
		mElementsInserted = 0;
		for(unsigned int i =0; i < size; ++i)
		{
			mData.push_back(std::make_pair("", nullptr));
		}
	}

	~HashTable()
	{

	}

	bool set(std::string key, V& value)
	{
		std::hash<std::string> str_hash;
		size_t pos = str_hash(key) % mSize;
		if(mData[pos].first == "")
		{
			++mElementsInserted;
			mData[pos].first = key;
			mData[pos].second = &value;
			mLoadFactor = mElementsInserted/mSize;
			return true;
		}
		else
		{
			bool check = quadProbing(key, pos);
			if(check)
			{
				if(mData[pos].first == key) //if it is the same
				{
					mData[pos].second = &value;
				}
				else // finds empty position
				{
					++mElementsInserted;
					mData[pos].first = key;
					mData[pos].second = &value;
				}
				mLoadFactor = mElementsInserted/mSize;
				return true;
			}
			else
			{
				return false;
			}
			
		}
	}

	V get(std::string key)
	{
		std::hash<std::string> str_hash;
		size_t pos = str_hash(key)%mSize;
		if(mData[pos].first == key)
		{
			return *(mData[pos].second);
		}
		else
		{
			bool check = quadProbing(key, pos);
			if(check)
			{
				if(mData[pos].first == key) //if it is the same
				{
					return *(mData[pos].second);
				}
				else
				{
					return NULL;
				}
			}
			else
			{
				return NULL;
			}
		}
	}

	V deleteitem(std::string key)
	{
		std::hash<std::string> str_hash;
		size_t pos = str_hash(key)%mSize;
		if(mData[pos].first == key)
		{
			V temp = *mData[pos].second;
			mData[pos].first = "";
			mData[pos].second = nullptr;
			--mElementsInserted;
			mLoadFactor = mElementsInserted/mSize;
			return temp;
		}
		else
		{
			bool check = quadProbing(key, pos);
			if(check)
			{
				if(mData[pos].first == key) //if it is the same
				{
					V temp = *(mData[pos].second);
					mData[pos].first = "";
					mData[pos].second = nullptr;
					--mElementsInserted;
					mLoadFactor = mElementsInserted/mSize;
					return temp;
				}
				else
				{
					return NULL;
				}
			}
			else
			{
				return NULL;
			}
		}
	}

	float load()
	{
		return mLoadFactor;
	}

private:
	std::vector<std::pair<std::string, V*> > mData;
	int mSize;
	float mLoadFactor;
	float mElementsInserted;

	bool quadProbing(std::string key, size_t& pos)
	{
		int quad = 1;
		int temp = pos;
		if(mElementsInserted >= mSize)
		{
			return false;
		}
		while(mData[pos].first != key && mData[pos].first != "") //runs until hits matching or empty
		{
			pos = (int)(pow(quad, 2) + temp) % mSize;
			++quad;
		}
		return true;
	}
};





