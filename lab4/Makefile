test1: test1.c secondLib firstLib
	gcc test1.c -fPIC -ldl -o test1
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./test1

firstLib:
	cd ./libs && gcc -o libfirstLib.so -shared -fPIC ../src/first_functions.c ../src/support_functions.c -lm

secondLib: 
	cd ./libs && gcc -o libsecondLib.so -shared -fPIC ../src/second_functions.c ../src/support_functions.c -lm 


	
