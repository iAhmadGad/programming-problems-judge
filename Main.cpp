#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <regex>
#include <fstream>
#include <streambuf>
#include "Solution.h"

using namespace std;

int main()
{
	string input = "Write input here", answer = "Write correct answer here";

	streambuf* standardCoutBuf = cout.rdbuf();

	stringstream inputStream;
	cout.rdbuf(inputStream.rdbuf());
	cout << input;

	cin.rdbuf(inputStream.rdbuf());

	stringstream outputStream;
	cout.rdbuf(outputStream.rdbuf());

	MAIN();

	string output(istreambuf_iterator<char>(outputStream), {});

	cout.rdbuf(standardCoutBuf);

	if(answer == output) cout << "Accepted";
	else cout << "Wrong Answer";

	return 0;
}
