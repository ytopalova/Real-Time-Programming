#include <iostream>
using namespace std;

int main(void) {
	puts("Hello World from QNX Neutrino RTOS!!!");

	puts("@author Yuliia Topalova (topa0005@algonquinlive.com)");
	puts("I have a cat");

	printf("\n");
	printf("My PID is: %d\n", getpid());
	printf("My Parents's PID is: %d\n", getppid());
	printf("\n");

	puts("Enter 'q' to quit: ");
	getchar();

	return EXIT_SUCCESS;
}
