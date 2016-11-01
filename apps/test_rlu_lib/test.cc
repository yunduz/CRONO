#include <cstdio>
#include <cstdlib>
#include <pthread.h>
#include <time.h>
#include <sys/timeb.h>
#include <string.h>

extern "C" {
    #include "rlu.h"
}

int main(int argc, char** argv)
{
	RLU_INIT(RLU_TYPE_FINE_GRAINED, 1);
	
	return 0;
}