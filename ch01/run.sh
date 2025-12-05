
clear

if [ -e $1 ]; then
	g++ $1

	if [ -e a.out ]; then
		./a.out
		echo "system state: $?" # display system state
	else
		echo "a.out not exist"
	fi
fi