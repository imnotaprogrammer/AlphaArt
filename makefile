fp: cppfp.o
	g++ cppfp.o -o fp
cppfp.o: cppfp.cpp
	g++ -c cppfp.cpp
clean:
	rm *.o fp
