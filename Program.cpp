#include <iostream>
#include <string>
#include "DynamicStack.h"

using namespace std;

int main(){
	DynamicStack<string>* stack = new DynamicStack<string>();
	stack -> push("R");
	stack -> push("A");
	stack -> push("C");
	stack -> push("E");
	stack -> push("C");
	stack -> push("A");
	stack -> push("R");

	int count = stack -> getCount();

	for(int i = 0; i < count; i++){
		cout<<stack -> pop()<<" ";
	}
	cout<<"\n";

	stack -> clear();
	delete stack;
	return 0;
}
