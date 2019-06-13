#include<stdio.h>
#include<string.h>
void fun1()
{
		int i = 0;
		char *p = "ssstttlll";
		double d = 3.14;
		i++;
		i++;
}
//复制函数
char *my_strcpy(char *s1, const char *s2)
{
	fun1();
	char *s = s1;
	for (; (*s++ = *s2++) != '\0';);
	return s1;
}
char *my_strncpy(char *s1, const char *s2, size_t n)
{
	char *s = s1;
	for (; n > 0 && *s2 != '\0'; --n) //		*s++ = *s2++;
	for (; n > 0; --n)
		*s++ = '\0';
	return s1;
}

int main()
{
	char p[20] = "abcdg";
	char *p2 = "abdgjjjj";
	my_strcpy(p,p2);
	printf("%s\n", p);
	system("pause");
	return 0;
}
