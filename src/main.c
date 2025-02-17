#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseWords(char *str) {
		char *words[100];
		int count = 0;

		// Разделяем строку на слова
		char *token = strtok(str, " ,");
		while (token) {
				words[count++] = token;
				token = strtok(NULL, " ,");
		}

		// Печатаем слова в обратном порядке
		for (int i = count - 1; i >= 0; i--) {
				printf("%s", words[i]);
				if (i != 0) {
						printf(" ");
				}
		}
		printf("\n");
}

int main() {
		char str[256];

		printf("Введите строку: ");
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = 0; // Удаляем символ новой строки

		reverseWords(str);
		return 0;
}