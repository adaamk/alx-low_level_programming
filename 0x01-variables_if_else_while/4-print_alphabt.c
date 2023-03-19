#include<stdio.h>
/**
 * main - alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
     char ch = 'a';
     while (ch <= 'z')
     {
     if (ch != 'e' && ch != 'q')
     {
     putchar(ch);
     }
     ch++;
 }
 return (0);
 }
