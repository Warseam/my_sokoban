/*
** player_mouv.c for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Mon May  8 21:38:19 2017 Wassim Alkayar
** Last update Sun May 14 12:35:40 2017 Wassim Alkayar
*/

#include <ncurses.h>
#include "struct.h"

void	mouvv_top(char **tab, t_p *pos)
{
  if (tab[pos->x - 1][pos->y] == '#')
    return ;
  if (tab[pos->x - 1][pos->y] == 'X')
    {
      if (tab[pos->x - 2][pos->y] == '#' || tab[pos->x - 2][pos->y] == 'X')
	return ;
      tab[pos->x - 1][pos->y] = ' ';
      tab[pos->x - 2][pos->y] = 'X';
      pos->x -= 1;
    }
  else
    pos->x -= 1;
}

void	mouvv_down(char **tab, t_p *pos)
{
  if (tab[pos->x + 1][pos->y] == '#')
    return ;
  if (tab[pos->x + 1][pos->y] == 'X')
    {
      if (tab[pos->x + 2][pos->y] == '#' || tab[pos->x + 2][pos->y] == 'X')
	return ;
      tab[pos->x + 1][pos->y] = ' ';
      tab[pos->x + 2][pos->y] = 'X';
      pos->x += 1;
    }
  else
    pos->x += 1;
}

void	mouvv_right(char **tab, t_p *pos)
{
  if (tab[pos->x][pos->y + 1] == '#')
    return ;
  if (tab[pos->x][pos->y + 1] == 'X')
    {
      if (tab[pos->x][pos->y + 2] == '#' || tab[pos->x][pos->y + 2] == 'X')
	return ;
      tab[pos->x][pos->y + 1] = ' ';
      tab[pos->x][pos->y + 2] = 'X';
      pos->y += 1;
    }
  else
    pos->y += 1;
}

void	mouvv_left(char **tab, t_p *pos)
{
  if (tab[pos->x][pos->y - 1] == '#')
    return ;
  if (tab[pos->x][pos->y - 1] == 'X')
    {
      if (tab[pos->x][pos->y - 2] == '#' || tab[pos->x][pos->y - 2] == 'X')
	return ;
      tab[pos->x][pos->y - 1] = ' ';
      tab[pos->x][pos->y - 2] = 'X';
      pos->y -= 1;
    }
  else
    pos->y -= 1;
}

void	handle_mouvements(char key, char **tab, t_p *pos)
{
  if (key == 'U')
    mouvv_top(tab, pos);
  if (key == 'D')
    mouvv_down(tab, pos);
  if (key == 'R')
    mouvv_right(tab, pos);
  if (key == 'L')
    mouvv_left(tab, pos);
}
