
clear

if [ -e day01_hello.cpp ]; then
	g++ day01_hello.cpp

	if [ -e a.out ]; then
		./a.out
		echo $? # display system state
	else
		echo "a.out not exist"
	fi
fi