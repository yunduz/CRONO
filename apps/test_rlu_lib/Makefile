
TRGS = test

LIBS += -lpthread -lrt -lrlu

CXXFLAGS = -g --std=c++0x -O3
CXXFLAGS += -Wall -Werror

# LD_LIBRARY_PATH=$HOME/repos/scalable-sync/rlu_relaxed_extension/lib

all: $(TRGS)

test: test.cc

clean:
	rm -f $(TRGS) *.o *.dot
	rm -f file.txt

%: %.cc ;
	$(CXX) $(CXXFLAGS) $< -o $@ -I$(HOME)/repos/scalable-sync/rlu_relaxed_extension/lib -L$(HOME)/repos/scalable-sync/rlu_relaxed_extension/lib $(LIBS)