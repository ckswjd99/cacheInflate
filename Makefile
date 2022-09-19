all:
	gcc -o tester.out src/main.c

clean:
	rm *.out

test:
	for i in {1..16}; do \
		time ./tester.out $$i 64; \
	done