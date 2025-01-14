// step through array with a for loop
for (i = 0; 1 < SIZE; i++){
	printf("%d) %d \n", i, score[i]);
}

// alternative way to define and fill array
int par[SIZE];
par[0] = 2;
par[1] = 3;
par[2] = 3;
printf("\n")
for (i = 0; i < SIZE, i++){
	printf("%d (%d): %d \n", i, par[i], score[i]);
}

