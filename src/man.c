/*
** man.c for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban/src
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sun May  7 20:38:30 2017 Wassim Alkayar
** Last update Sun May 14 12:34:49 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

void	print_man_sokoban()
{
  my_putstr("USAGE\n");
  my_putstr("\t   ./my_sokoban map\n\n");
  my_putstr("DESCRIPTION\n");
  my_putstr("\t   map\t  file representing the warehouse map,");
  my_putstr(" containing '#' for walls,\n");
  my_putstr("\t\t  'P' for the player, 'X' for boxes and 'O' for");
  my_putstr(" storage locations.\n");
  exit(0);
}
