all: selection_sort

selection_sort: selection_sort.o
	g++ selection_sort.o -o selection_sort


selection_sort.o: selection_sort.cpp
	g++ -c selection_sort.cpp

clean:
	rm -rf *.o selection_sort