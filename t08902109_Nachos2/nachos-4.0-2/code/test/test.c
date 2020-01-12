#include "syscall.h"
main() {
	int i;
	for (i=0; i < 10; i++) {
		//5s Sleep
		Sleep(5000000);
		PrintInt(5);
	}
	return 0;
}