/*
** check_loose.c for  in /home/WASSEX/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sun May 14 01:10:32 2017 Wassim Alkayar
** Last update Sat Jul 15 22:06:33 2017 Wassim Alkayar
*/

#include <ncurses.h>
#include <stdlib.h>
#include "struct.h"

int	check_loose_X(char **tab, int y, int x)
{
  if ((tab[y][x - 1] == '#' && tab[y + 1][x] == '#') ||
      (tab[y][x + 1] == '#' && tab[y + 1][x] == '#') ||
      (tab[y - 1][x] == '#' && tab[y][x + 1] == '#') ||
      (tab[y - 1][x] == '#' && tab[y][x - 1] == '#'))
    return (1);
  return (0);
}

void	check_loose(char **tab)
{
  int	i;
  int	j;
  int	a;

  a = 0;
  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == 'X')
	    {
	      a = check_loose_X(tab, i, j);
	      if (a != 1)
		return ;
	    }
	  j += 1;
	}
      i += 1;
    }
  endwin();
  exit(1);
}
