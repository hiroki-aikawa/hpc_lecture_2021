mpicxx cashblock_ad.cpp -fopenmp -march=native -O3
mpirun -np 1 ./a.out
