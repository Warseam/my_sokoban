/*
** get_map_size.c for  in /home/WASSEX/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sat May 13 12:47:46 2017 Wassim Alkayar
** Last update Sun May 14 12:33:47 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int		get_map_size(char *map)
{
  FILE		*fp;
  char		*line;
  size_t	len;
  ssize_t	read;
  int		i;

  i = 0;
  len = 0;
  line = NULL;
  fp = fopen(map, "r");
  if (fp == NULL)
    file_opening_error();
  while ((read = getline(&line, &len, fp)) != -1)
    i += my_strlen(line);
  if (line)
    free(line);
  return (i);
}
