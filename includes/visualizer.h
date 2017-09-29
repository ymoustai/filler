/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerSDL.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:03:58 by mdubus            #+#    #+#             */
/*   Updated: 2017/09/29 18:54:17 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERSDL_H
#define HEADERSDL_H

#include <OpenGL/gl3.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL.h>
#include <SDL_video.h>
#include <stdbool.h>
#include <SDL_ttf.h>

typedef struct	s_visu
{
	SDL_Window	*window;
	SDL_Surface	*surf;
//	SDL_Surface	*texte;
	TTF_Font	*police;
	TTF_Font	*title;
	SDL_Color	white;
	SDL_Color	purple;
	SDL_Color	pink;
	SDL_Rect	rect;
	bool		loop;
	int			width_w;
	int			height_w;
	int			nb_x;
	int			nb_y;
	char		*p1;
	char		*p2;
}				t_visu;


void		init_struct_visu(t_visu *v);
void		init_SDL(t_visu *v);
SDL_Color	init_color(int r, int g, int b, int a);

#endif
