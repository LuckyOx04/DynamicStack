#include <iostream>
#include <string>
#include "DynamicStack.h"

using namespace std;

int main(){
	DynamicStack<string>* stack = new DynamicStack<string>();
	stack -> push("hungry.");
	stack -> push("am");
	stack -> push("I");
	stack -> push("up?");
	stack -> push("What's");

	int count = stack -> getCount();

	for(int i = 0; i < count; i++){
		cout<<stack -> pop()<<" ";
	}
	cout<<"\n";

	stack -> clear();
	delete stack;
	return 0;
}
