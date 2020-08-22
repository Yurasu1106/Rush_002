/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaurin <mbaurin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 08:27:39 by mbaurin           #+#    #+#             */
/*   Updated: 2020/08/22 20:07:43 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv )
{	
	int		i;
	int		par;
	char 	*chaine_parametre;
	char	tab[4][4];
	struct case j = {"1234",1 , 2, 3, 4};

	chaine_parametre = argv[1];
	par = 0;
	i = 0;
	while (i < 31)
	{
		if (chaine_parametre[i] >= 49 && chaine_parametre[i] <= 52)
		{
			ft_putchar(chaine_parametre[i]);
			par++;	
		}
		i++;
	}

	if (par < 16)
		ft_putstr("ERROR");
	else if (par > 16)
		ft_putstr("ERROR");
}
