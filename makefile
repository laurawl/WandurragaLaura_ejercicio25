x.dat : WandurragaLaura_ejercicio25.x
	./WandurragaLaura_ejercicio25.x 

WandurragaLaura_ejercicio25.x : WandurragaLaura_ejercicio25.cpp
	c++ WandurragaLaura_ejercicio25.cpp -o WandurragaLaura_ejercicio25.x

clean :
	rm WandurragaLaura_ejercicio25.x 