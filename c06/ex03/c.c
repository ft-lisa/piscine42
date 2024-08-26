#include <unistd.h>
/*char    condition(char *tab[], int j, int i)
{
        int     c;

        while (tab[j][i] != '\0')
        {
                                if (tab[j][i] > tab[j+1][i] || tab[j+1][i] == '\0')
                                {
                                        c = tab[j][i];
                                        tab[j][i] = tab[j+1][i];
                                        tab[j+1][i] = c;
                                }
                                i++;
                                return(tab);
                        }
}
char    ft_sort_int_tab(char *tab[])
{
        int     q;
        int     i;
        int     j,c;
        char    **k;

        q = 1;
        i = c =0;
        j = 1;
        while (q != 0)
        {
                q = 0;
                while (tab[j][i] != '\0')
                {
                        i = 0;

        while (tab[j][i] != '\0')
        {
                                if (tab[j][i] > tab[j+1][i] || tab[j+1][i] == '\0')
                                {
                                        c = tab[j][i];
                                        tab[j][i] = tab[j+1][i];
                                        tab[j+1][i] = c;
                                }
                                i++;
                        }

                        j++;
                        q = 1;
                }
        }
}*/

int     main(int  argc, char* argv[])
{
        char    t;
        char    q;
	char	*c;
        int     i;
        int     j;
	int bomb;
	
        i = 0;
        j = q = 1;
        while (q != 0)
        {
                q = 0;
                while (i  < argc-1)
                {
                        i = 0;
			bomb = 0;
        		while (argv[j][i] != '\0' && bomb == 0)
        		{
                                if (argv[j][i] > argv[j+1][i] || argv[j+1][i] != '\0')
                                {
                                        c = argv[j];
                                        argv[j] = argv[j+1];
                                        argv[j+1] = c;
					bomb = 1;
					q = 1;
                                }
                                i++;
                        }

                        j++;
                        q = 1;
                }
        }
	i = 0;
	j = 0;
        while (i < argc-1)
        {
		i=  0;
                while (argv[j][i] != '\0')
                {
                        t = argv[j][i];
                        write(1, &t, 1 );
                        i++;
                }
                write(1, "\n", 1);
                j++;
        }
        return (0);
}

