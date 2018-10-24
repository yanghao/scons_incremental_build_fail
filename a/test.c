#include <test.h>

extern int xyz(int, char**);
int main(int argc, char **argv)
{
	return xyz(argc, argv);
}
