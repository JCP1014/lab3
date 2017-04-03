How to compile the program for question A:
	g++ -o A A.cpp


The empirical results and explanation for question B:

	when size=1000:
		sort():0.000226seconds
		v1/v2 are different.
		insertion_sort():0.016728seconds
		v1/v2 are the same.

	when size=10000:
		sort():0.00294seconds
		v1/v2 are different.
		insertion_sort():1.01662seconds
		v1/v2 are the same.

	when size=100000:
		sort():0.034135seconds
		v1/v2 are different.
		insertion_sort():101.933seconds
		v1/v2 are the same.

	when size=1000000:
		sort():0.374355seconds
		v1/v2 are different.
		insertion_sort():10191.9seconds
		v1/v2 are the same.
