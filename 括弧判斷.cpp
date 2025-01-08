#include<iostream>
#include<string>
using namespace std;

template <class T>
class Stack {
private:
	T* stack;
	int capacity;
	int top;
public:
	Stack(int stackCapacity = 10);
	bool IsEmpty() const;
	T& Top() const;
	void Push(const T& item);
	void Pop();
};

template <class T>
void ChangeSize1D(T*& a, const int oldSize, const int newSize) {
	if (newSize < 0)
		throw "New length must be >= 0";
	T* temp = new T[newSize];
	int number = min(oldSize, newSize);
	copy(a, a + number, temp);
	delete[] a;
	a = temp;
}

template <class T>
Stack<T>::Stack(int stackCapacity) :capacity(stackCapacity) {
	if (capacity < 1)
		throw "Stack capacity must be > 0";
	stack = new T[capacity];
	top = -1;
}

template <class T>
void Stack<T>::Push(const T& x) {
	if (top == capacity - 1) {
		ChangeSize1D(this->stack, capacity, 2 * capacity);
		capacity *= 2;
	}
	stack[++top] = x;
}

template <class T>
void Stack<T>::Pop() {
	if (IsEmpty())
		throw "Stack is empty. Cannot delete";
	stack[top--].~T();
}

template <class T>
inline T& Stack<T>::Top() const {
	if (IsEmpty())
		throw "Stack is empty.";
	return stack[top];
}

template <class T>
inline bool Stack<T>::IsEmpty() const {
	return top == -1;
}

bool check(const string s) {
	//cout<<s<<s.length()<<endl;
	Stack<char> box;
	for (int i = 0; i < s.length(); i++) {
		char temp = s[i];
		if (temp == '(' || temp == '{' || temp == '[')
			box.Push(temp);
		else if (temp == ')' || temp == ']' || temp == '}') {
			if (box.IsEmpty())
				return false;
			else if (temp == ')' && box.Top() != '(')
				return false;
			else if (temp == ']' && box.Top() != '[')
				return false;
			else if (temp == '}' && box.Top() != '{')
				return false;
			else
				box.Pop();
		}
		else
			return false;
	}
	return box.IsEmpty();
}

int main() {
	string s;
	while (cin >> s) {
		if (check(s))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}