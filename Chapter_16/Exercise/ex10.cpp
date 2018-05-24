// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

struct Review {
	std::string title;
	int rating;
	double price;
};

enum DisplayOpt
{
	En_OriginalOrder = 0,
	En_AlphaBetOrder = 1,
	En_IncRatingOrder = 2,
	En_DecRatingOrder = 3,
	En_IncPriceOrder = 4,
	En_DecPriceOrder = 5,
	En_Max = 6
};

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool cheaperThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(shared_ptr<Review> & rr);
void ShowReview(const shared_ptr<Review> & rr);
int options();

int main()
{
	using std::cout;
	using std::vector;
	using std::shared_ptr;
	vector<shared_ptr<Review>> books;
	shared_ptr<Review> temp;
	while (FillReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		vector<shared_ptr<Review>> books1(books);
		vector<shared_ptr<Review>> books2(books);
		vector<shared_ptr<Review>> books4(books);
		sort(books1.begin(), books1.end());
		sort(books2.begin(), books2.end(), worseThan);
		sort(books4.begin(), books4.end(), cheaperThan);
		int option;
		while ((option = options()) != En_Max)
		{
			cout << "Rating\tBook\tPrice\n";
			switch (option)
			{
				case En_OriginalOrder:
					for_each(books.begin(), books.end(), ShowReview);
					break;
				case En_AlphaBetOrder:
					for_each(books1.begin(), books1.end(), ShowReview);
					break;
				case En_IncRatingOrder:
					for_each(books2.begin(), books2.end(), ShowReview);
					break;
				case En_DecRatingOrder:
					for_each(books2.rbegin(), books2.rend(), ShowReview);
					break;
				case En_IncPriceOrder:
					for_each(books4.begin(), books4.end(), ShowReview);
					break;
				case En_DecPriceOrder:
					for_each(books4.rbegin(), books4.rend(), ShowReview);
					break;
				default:
					for_each(books.begin(), books.end(), ShowReview);
					break;
			}
		}
	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";

	return 0;
}

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool cheaperThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}

bool FillReview(shared_ptr<Review> & rr)
{
	rr = shared_ptr<Review>(new Review);
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr->title);
	if (rr->title == "quit")
	{
		return false;
	}
	std::cout << "Enter book rating: ";
	std::cin >> rr->rating;
	if (!std::cin)
	{
		return false;
	}
	std::cout << "Enter book price: ";
	std::cin >> rr->price;
	if (!std::cin)
	{
		return false;
	}
	// get rid of rest of input line
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const shared_ptr<Review> & rr)
{
	std::cout << rr->rating << "\t" << rr->title 
		<< "\t($" << rr->price << ")" << std::endl;
}

int options()
{
	int option = En_Max;
	cout << "Please enter option:\n"
		<< "0-Display books in original order,\n"
		<< "1-Display books in alphabetical order,\n"
		<< "2-Display books in increasing rating order,\n"
		<< "3-Display books in decreating rating order,\n"
		<< "4-Display books in increasing price order,\n"
		<< "5-Display books in decreating price order,\n"
		<< "6-quit\n";
	cin >> option;

	return option;
}
