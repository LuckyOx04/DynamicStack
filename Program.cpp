#include <iostream>
#include "DynamicStack.h"

using namespace std;

int main(){
	DynamicStack* stack = new DynamicStack();
	stack -> push(3);
	stack -> push(4);
	stack -> push(6);
	stack -> push(13);
	stack -> push(1);

	cout<<stack -> pop()<<" "<<stack -> pop()<<"\n";

	delete stack;
	return 0;
}
