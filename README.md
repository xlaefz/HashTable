Compile with clang++ test1.cpp -o test1
Written in C++ on mac

Quick Note: The delete(key) function is renamed deleteitem because delete is a reserved word in C++.

Test the file by using 


Just a note, test case:test delete size 0
When I reinterpret_cast<long>(&test1) it doesn't print 0 because the constructor of my object is taking an int and I didn't use explicit in my struct object. I didn't add explicit because I need to return NULL to fit project requirements.



By: Jason Zheng
