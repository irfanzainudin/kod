all:
	make main building_prerequisites

main:
	gcc kod.c -o kod

building_prerequisites:
	echo "Building prerequisites"

clean:
	rm kod