CXX = g++

TRGS = pagerank

LIBS += -lpthread -lrt -lrlu

# CXXFLAGS += -g --std=c++0x -O3
CXXFLAGS += -g -O3
CXXFLAGS += -Wall -Werror
#CXXFLAGS += -DRLU_RELAXED 

all: $(TRGS)

pagerank.o: pagerank.cc
	$(CXX) $(CXXFLAGS) -I/cs/systems/home/yra3/repos/scalable-sync/rlu_relaxed_extension/lib -c -o $@ $<

pagerank: pagerank.o
	$(CXX) -L/cs/systems/home/yra3/repos/scalable-sync/rlu_relaxed_extension/lib -o $@.out $^ $(LIBS)

clean:
	rm -f $(TRGS) *.o *.dot
	rm -f file.txt

# %: %.cc ;
# 	$(CXX) $(CXXFLAGS) $< -o $@ $(LIBS)

#-I/cs/systems/home/yra3/repos/scalable-sync/rlu_relaxed_extension/lib 
