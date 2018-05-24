#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Store
{
private:
	std::ofstream *os;
public:
	Store(std::ofstream & fout) : os(&fout) {}
	void operator()(const std::string & s)
	{
		size_t len = s.length();
		os->write((char*)&len, sizeof(std::size_t));  // store length
		os->write(s.data(), len);                     // store characters
	}
};

void ShowStr(const std::string & s);
void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr);

int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	// acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	// store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	// recover file contents
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}

void ShowStr(const std::string & s)
{
	std::cout << s << std::endl;
}

void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr)
{
	std::string s;
	size_t len;
	char *temp;
	int i;
	while (fin.read((char*)&len, sizeof(std::size_t)))
	{
		temp = new char[len];
		s.clear();
		fin.read(temp, len);
		s.append(temp, temp + len);
		vistr.push_back(s);
		delete [] temp;
	}
}
