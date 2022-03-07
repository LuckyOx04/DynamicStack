#include <iostream>
using namespace std;

class DynamicStack{
	class Node{
		int element;
		Node* next;

		public:
		int getElement(){
			return element;
		}

		Node* getNext(){
			return next;
		}

		void setElement(int element){
			this->element = element;
		}

		void setNext(Node* next){
			this->next = next;
		}

		Node(int item){
			element = item;
			next = NULL;
		}

		Node(int item, Node* next){
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

	void push(int item){
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
		top = NULL;
		count = 0;
	}

	int pop(){
		int result = top -> getElement();
		Node* removeTop = top;
		top = top -> getNext();
		delete removeTop;
		return result;
	}

	int getCount(){
		return count;
	}

	int peek(){
		return top -> getElement();
	}
};
