

// Write a program to  Implement Stack using a Deque (Double Ended Queue):. 





#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
	deque<int> my_deque;

public:
	void push(int item)
	{
		my_deque.push_back(item);
	}

	int pop()
	{
		int item = my_deque.back();
		my_deque.pop_back();
		return item;
	}

	int size()
	{
		return my_deque.size();
	}

	bool is_empty()
	{
		return my_deque.empty();
	}

	int top()
	{
		if (is_empty()) {
			return -1;
		}
		else {
			return my_deque.back();
		}
	}
};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << "current size: " << st.size() << endl;
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	cout << "current size: " << st.size() << endl;
	return 0;
}

