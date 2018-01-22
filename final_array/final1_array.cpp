#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	int z;
	cout << "Какая задача?";
	cin >> z;
	switch (z) {
	case 1: {
		//1.Дана последовательность чисел а1, а2, …, аn. Выяснить, сколько чисел и какие входят в последовательность более чем по одному разу
		int a[10], kol=0;
		for (int i = 0; i < 10; i++) {
			a[i] = rand() % 50;
			cout << a[i] << " ";
		}
		for (int i = 0; i < 10; i++) {
			for (int j = i + 1; j < 10; j++) {
				if (a[i] = a[j])
					kol++;
			}
		}
		cout << kol << endl;
		break;
	}
	case 2: {
		//2.Дана последовательность чисел а1, а2, …, аn. Определить число элементов этой последовательности, не превышающих среднего арифметического положительных элементов
		int a[10], sum = 0,kol=0, sr_arif, kol1=0;
		for (int i = 0; i < 10; i++) {
			a[i] = rand() % 100-50;
			cout << a[i] << " ";
		}
		for (int i = 0; i < 10; i++) {
			if (a[i] > 0) {
				sum += a[i];
				kol++;
				sr_arif = sum / kol;
			}
		}
		cout << "kol=" << kol << endl;
		cout << "sr_arif=" << sr_arif << endl;
		for (int i = 0; i < 10; i++) {
			if (a[i] < sr_arif) {
				kol1++;
			}
		}
		cout << "кол-во чисел не превышающих среднего арифметического положительных элементов: " << kol1 << endl;
		break;
		
	}
	case 3: {
		//3.	Дан массив целых чисел {ai} (i=1, 2, …,n). Написать программу, проверки упорядочены ли значения компонентов массива по убыванию.
		const int n = 10;
		int a[n];
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		

		break;
	}
	case 4:
	{
		//4.	Найдите произведение элементов массива с нечетными номерами
		int a[10], pr=1;
		for (int i = 0; i < 10; i++) {
			a[i] = rand() % 30;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 10; i++) {
			if (a[i] % 2 != 0)
				pr *= a[i];
		}
		cout <<"произведение элементов массива с нечетными номерами: "<< pr << endl;
		break;
	}

	case 5: {
		// 5.	Найдите сумму элементов массива между двумя первыми нулями. Если двух нулей нет в массиве, то выведите ноль.
		int a[10], sum = 0, nul1, nul2;
		for (int i = 0; i < 10; i++) {
			a[i] = rand() % 30;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 10; i++) {
			if (a[i] == 0)
				nul1=a[i];
		}
		cout << nul1 << endl;
		break;
	}
	case 6: {
		//6.	Найдите наибольший элемент массива
		int a[10], max = a[0];
		for (int i = 0; i < 10; i++) {
			a[i] = rand() % 100;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 1; i < 10; i++) {
			if (a[i] > max)
				max = a[i];
		}
		cout << "max=" << max<<endl;
		break;
	}
	case 7:
	{
		//7.	Найдите наименьший четный элемент массива. Если такого нет, то выведите первый элемент
		int a[10] = { 5,6,1,8,10,55,3,7,65,12 }, min = a[0];
		for (int i = 0; i < 10; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 1; i < 10; i++) {
			if (a[i] % 2 == 0 && a[i] < min) {
				min = a[i];
			}
			else
			{
				cout << a[0] << endl;
			}
			
		}
		cout << "min=" << min << endl;
		break;
	}
	case 8: {
		//8.	Преобразовать массив так, чтобы сначала шли нулевые элементы, а затем все остальные
		break;
	}
	case 9:
	{
		//9.	Найдите сумму номеров минимального и максимального элементов
		int a[10] = { 5,6,1,8,10,55,3,7,65,12 }, min = a[0], max=a[0], sum=0;
		for (int i = 0; i < 10; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 1; i < 10; i++) {
			if (a[i] < min)
				min = a[i];
			if (a[i] > max)
				max = a[i];
		}
		cout << "min=" << min << " " << "max=" << max << endl;
		sum = min + max;
		cout << sum << endl;
		break;
	}

	}
	system("pause");
}
