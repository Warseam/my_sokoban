/*
** utils2.c for  in /home/WASSEX/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Fri May 12 01:46:31 2017 Wassim Alkayar
** Last update Sun May 14 12:40:03 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include <ncurses.h>
#include "struct.h"
#include "my.h"

void	put_map(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      mvprintw(j, 0, tab[i]);
      i = i + 1;
      j = j + 1;
    }
  refresh();
}

void	put_mapo(char **tabo, char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tabo[i])
    {
      j = 0;
      while (tabo[i][j])
	{
	  if (tabo[i][j] == 'O')
	    {
	      if (tab[i][j] != 'X')
		mvaddch(i, j, 'O');
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  refresh();
}

void	check_bad_file(char *map)
{
  int	i;

  i = 0;
  while (map[i + 1] != '\0')
    {
      if (map[i] != 'P' && map[i] != 'X' && map[i] != 'O' && map[i] != ' ' &&
	  map[i] != '\n' && map[i] != '#')
	{
	  my_putstr(FILE_CHAR_ERR);
	  exit(84);
	}
      i += 1;
    }
}
