#ifndef LIST_H_
#define LIST_H_
typedef int Item;
class List
{
private:
	enum {LEN = 20};
	int top;
	Item data[LEN];
public:
	List();
	bool add(Item & item);
	bool is_empty() const;
	bool is_full() const;
	void visit(void (*pf)(Item & item));
};
#endif
