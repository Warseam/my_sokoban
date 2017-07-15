/*
** utilsplayer.c for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Mon May  8 20:21:53 2017 Wassim Alkayar
** Last update Sun May 14 12:41:17 2017 Wassim Alkayar
*/

#include <ncurses.h>
#include "struct.h"

int	find_player_x(char **tab)
{
  int	i;
  int	j;
  int	x;

  x = 0;
  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  if (tab[i][j] == 'P')
	    x = j;
	  j = j + 1;
	}
      i = i + 1;
    }
  return (x);
}

int	find_player_y(char **tab)
{
  int	i;
  int	j;
  int	y;

  y = 0;
  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  if (tab[i][j] == 'P')
	    y = i;
	  j = j + 1;
	}
      i = i + 1;
    }
  return (y);
}

char	get_key(int key)
{
  if (key == KEY_UP)
    return ('U');
  if (key == KEY_DOWN)
    return ('D');
  if (key == KEY_LEFT)
    return ('L');
  if (key == KEY_RIGHT)
    return ('R');
  return (0);
}
