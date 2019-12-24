#include <iostream>
#include "DMVQueue.h"


Queue::Queue() {
	line = 0;
}

void Queue::add(int i) {
	line += i;
}

void Queue::remove(int i) {
	line -= i;
}

int Queue::get_line() {
	return line;
}

int main()
{
    Queue q = Queue();
	q.add(5);
	q.remove(4);
	std::cout << "The line has " << q.get_line() << " people." << std::endl;

}