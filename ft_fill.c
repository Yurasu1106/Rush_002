/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaurin <mbaurin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 14:14:47 by mbaurin           #+#    #+#             */
/*   Updated: 2020/08/22 17:41:49 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rand(int i);

void 	pattern2(int *tab, int par1, int b)
{
	int x;
	int y;
	int c;

	if (par1 = 2)
	{
		y = 1;
		x = 0;
		if (t[y][1] == 5)
			tab[y][1]=4
		while(b < 4 )
		{
			ft_rand(b);
			b--;
		}
		if (t[x][y] ==5)
			t[x][y] = b;
		c= t[y][1]
		while (y < 4)
		{
			x++;
			y++;
			if(1 != 2
			

	}	
}

void	pattern1(int *tab, int par1)
{
	int x;
	int y;
	int c;
	int r;

	if (par1 = 1)
	{
		y = 0;
		x = 0;
		if (tab[y][x] == 5)
			tab[y][x] = 4;
		c = tab[x][y];
		while (x != 0)
		{
			x++;
			if (tab[y][x] == 5)
				tab[x][y] = c - 1;
			c--;
		}
	}	
}

void	ft_fill(int	*tab, char *str)
{
	int i;
	int a;
	

	while (str[i])
	{
		if (str[i] = 4)
		{
			if (i < 4)
			{
				x = 1;
				y = 0;
				while (y < 5)
				{
					tab[i][y] = x;
					x++;
				}
			}
			if (i >= 3 && i < 8)
			{
				r = 4;
				y = 3;
				x = i - 4;
				while (y > -1)
				{
					tab[x][y] = r;
					y--;
					r--;
				}
			}
			if (i => 8 && i < 12)
			{
				y = i -8;
				x = 0;
				r = 1;
				while (x < 5)
				{


		}


		a = str[i];
		i++;
	}

	
}
