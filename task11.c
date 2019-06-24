#include<stdio.h>
//defining structure
struct book{
	char title[20];
	char author[10];
	char genre[10];
};
//function prototype
display(struct book b1);
main()
{
	struct book b1;
	printf("enter the title of a book:");
	scanf("%s",&b1.title);
	printf("\nenter the name of the author:");
	scanf("%s",&b1.author);
	printf("enter the genre of the book:");
	scanf("%s",&b1.genre);
	//function call
	display(b1);
}
//function with parameters but without return type
//function defination
display(struct book b1)
{
	printf("\nTitle: %s",b1.title);
	printf("\nAuthor:%s",b1.author);
	printf("\nGenre:%s",b1.genre);
}
