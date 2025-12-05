#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <locale.h>

typedef struct
{
	char** authors;
	int count;
	int cap;
} Authors;

typedef struct
{
	char name[50];
	int year;
	Authors authors;
} Book;

void init_authors(Authors* au)
{
	au->count = 0;
	au->cap = 5;
	au->authors = (char**)malloc(au->cap * sizeof(char*));
}

void add_au(Authors* au, const char* author_n)
{
	if (au->count >= au->cap)
	{
		au->cap *= 2;
		au->authors = (char**)realloc(au->authors, au->cap * sizeof(char));
	}
	au->authors[au->count] = (char*)malloc((strlen(author_n) + 1) * sizeof(char));
	strcpy(au->authors[au->count], author_n);
	au->count++;
}

Book* maxau(Book* books, int n)
{
	if (n <= 0) return NULL;

	Book* max = &books[0];
	int maxx = books[0].authors.count;


	for (int i = 1; i < n; ++i)
	{
		if (books[i].authors.count > maxx)
		{
			max = &books[i];
			maxx = books[i].authors.count;
		}
	}
	return max;
}

void author_free(Authors* au)
{
	for (int i = 0; i < au->count; ++i)
	{
		free(au->authors[i]);
	}
	free(au->authors);
	au->authors = NULL;
	au->count = 0;
	au->cap = 0;
}

Book* create_books(int n)
{
	Book* books = (Book*)malloc(n * sizeof(Book));
	for (int i = 0; i < n; ++i)
	{
		init_authors(&books[i].authors);
	}
	return books;
}

void print_book(const Book* book)
{
	printf("Книга: %s, год издания: %d\n", book->name, book->year);
	printf("Авторы: ");
	for (int i = 0; i < book->authors.count; ++i)
	{
		printf("%s", book->authors.authors[i]);
		if (i < book->authors.count - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

void free_books(Book* books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		author_free(&books[i].authors);
	}
	free(books);
}

void clear_input_buffer()
{
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str)
{
	if (str != NULL)
	{
		char* newline = strchr(str, '\n');
		if (newline != NULL)
		{
			*newline = '\0';
		}
	}
}
	
int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;
	printf("Введите количество книг:  ");
	scanf_s("%d", &n);
	clear_input_buffer();
		
	Book* books = create_books(n);

	for (int i = 0; i < n; i++)
	{
	printf("\nКнига %d:\n", i + 1);
	printf("Название:  ");
	fgets(books[i].name, sizeof(books[i].name), stdin);
	clear_last_linebreak(books[i].name);
	printf("Год издания:  ");
	scanf_s("%d", &books[i].year);
	clear_input_buffer();

	int aucount = 0;
	printf("Количество авторов:  ");
	scanf_s("%d", &aucount);
	clear_input_buffer();
			
	printf("Введите %d авторов:  ", aucount);
        for (int j = 0; j < aucount; ++j)
	    {
		    char author_n[100];
		    printf("Автор %d:  ", j + 1);
		    fgets(author_n, sizeof(author_n), stdin);
		    clear_last_linebreak(author_n);
		    add_au(&books[i].authors, author_n);
	    }
	}
	printf("\nВсе книги:\n");
		for (int i = 0; i < n; ++i)
		{
			printf("\n%d.  ", i + 1);
			print_book(&books[i]);
		}
	Book* max = maxau(books, n);
	if (max != NULL)
	{
		printf("\nКнига с наибольшим количеством авторов:\n");
		print_book(max);
	}

	free_books(books, n);
	return 0;
	}