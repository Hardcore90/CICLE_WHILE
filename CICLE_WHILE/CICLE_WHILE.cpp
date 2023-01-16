#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
    // 1. Создать программу, которая с помощью цикла выводит слово «Hello» 9 раз.
    int i = 1;
	while (i<10)
	{
		printf("Hello\n");
		i++;
	}
	printf("\n");

	// 2.Создать программу, которая выводит числа от 0, 
	//   увеличивая число с каждым циклом на 1, с 15 итерациями цикла.
	int j = 0;
	while (j < 15)
	{
		printf("%i ", j);
		j++;
	}
	printf("\n");
	printf("\n");

	// 3. Затем вывести на экран только нечетные числа.
	int k = 1;
	while (k < 15)
	{
		printf("%i ", k);
		k = k + 2;
	}
	printf("\n");
	printf("\n");

	// ЗАДАНИЕ 2.Составьте программу, 
	//			выводящую на экран сумму чисел от 5 до 15 включительно, используя цикл.
	int sum, count;
	sum = 0;
	count = 5;
	while (count < 15)
	{
		printf("%i+", count);
		sum = sum + count;
		count++;
	}
	printf("%i\n", count);
	sum = count + sum;
	printf("Сумма чисел в диапазоне от 5 до 15 включительно: %i", sum);
	printf("\n");
	printf("\n");
}
