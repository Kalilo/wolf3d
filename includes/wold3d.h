#ifndef WOLF3D
# define WOLF3D

/*Header Defines*/
# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <math.h>
# include "libft/libft.h"

/*Constants Defines*/
/*window*/
# define WIN_X 640
# define WIN_Y 400
/*start possition*/
# define S_X 70
# define S_Y 70
# define S_A 0
/*player details*/
# define FOV 64
# define TILE_SIZE 64
# define VIEW_HEIGHT 32

/*Key Defines*/
# define ESC 53
# define K_UP 126
# define K_DOWN 125
# define K_LEFT 123
# define K_RIGHT 124

/*Color Defines*/
# define C_WHITE 0x00FFFFFF
# define C_SKY 0x003399ff
# define C_FLOOR 0x00990000

# define C_NORTH 0x009900cc
# define C_SOUTH 0x00FFFFFF
# define C_EAST 0x00ff6600
# define C_WEST 0x00996633

typedef struct	s_win
{
	void		*mlx;
	void		*win;
}				t_win;

typedef struct	s_mapinfo
{
	char		**map;
	long int	lines;
	long int	width;
}				t_mapinfo;

typedef struct	s_point
{
	int			x;
	int			y;
	int			a;
}				t_point;

typedef struct	s_const
{
}				t_const;

typedef struct	s_ray
{
}				t_ray;

typedef struct	s_main
{
	t_win		win;
	t_map_info	map;
	t_ray		ray;
	t_const		consts;
	t_point		player;
}				t_main;

#endif
