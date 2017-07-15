/*
** basics.c for  in /home/WASSEX/PSU_2016_my_sokoban/src
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sat May 13 12:55:36 2017 Wassim Alkayar
** Last update Sun May 14 12:29:11 2017 Wassim Alkayar
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return ;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i += 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  return (i);
}
