#include <iostream>
using namespace std;

template <class T>
class DynamicStack{
	class Node{
		T element;
		Node* next;

		public:
		T getElement(){
			return element;
		}

		Node* getNext(){
			return next;
		}

		void setElement(T element){
			this->element = element;
		}

		void setNext(Node* next){
			this->next = next;
		}

		Node(T item){
			element = item;
			next = NULL;
		}

		Node(T item, Node* next){
			element = item;
			this->next = next;
		}
	};

	int count;
	Node* top;

	public:
	DynamicStack(){
		count = 0;
		top = NULL;
	}

	void push(T item){
		if(count == 0){
			top = new Node(item);
		}
		else{
			Node* newNode = new Node(item, top);
			top = newNode;
		}
		count++;
	}

	void clear(){
		if (count == 0) return;
		for(int i = 0; i < count - 1; i++){
			Node* removeTop = top;
			top = top -> getNext();
			delete removeTop;
		}
		delete top;
		top = NULL;
		count = 0;
	}

	T pop(){
		if (count == 0) throw invalid_argument("Stack is empty!");
		T result = top -> getElement();
		Node* removeTop = top;
		top = top -> getNext();
		delete removeTop;
		count--;
		return result;
	}

	int getCount(){
		return count;
	}

	T peek(){
		if (count == 0) throw invalid_argument("Stack is empty!");
		return top -> getElement();
	}
};
