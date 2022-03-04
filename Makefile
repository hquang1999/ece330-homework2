all: resultStatic resultDynamic

resultStatic: matrix_static.o test_static.o matrix_transpose_static.o
	gcc -o resultStatic matrix_static.o test_static.o matrix_transpose_static.o

matrix_static.o: matrix_static.c
	gcc -c matrix_static.c

matrix_transpose_static.o: matrix_transpose_static.c
	gcc -c matrix_transpose_static.c

test_static.o: test_static.c
	gcc -c test_static.c

resultDynamic: matrix_dynamic.o test_dynamic.o matrix_transpose_dynamic.o
	gcc -o resultDynamic matrix_dynamic.o test_dynamic.o matrix_transpose_dynamic.o

matrix_dynamic.o: matrix_dynamic.c
	gcc -c matrix_dynamic.c

matrix_transpose_dynamic.o: matrix_transpose_dynamic.c
	gcc -c matrix_transpose_dynamic.c

test_dynamic.o: test_dynamic.c
	gcc -c test_dynamic.c

clean:
	-rm *.o resultStatic resultDynamic








