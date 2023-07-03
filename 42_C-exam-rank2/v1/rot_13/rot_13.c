
#include <unistd.h>

int main(int c, char *v[])

{
	if (c != 2)
		write(1, "\n", 1);
	else
	{
		int i = 0;
		while (v[1][i])
		{
			if (v[1][i] >= 'a' && v[1][i] < 'z')
			{
				v[1][i] -= 13;
				if (v[1][i] < 97)
					v[1][i]+= 26;
				write(1, &v[1][i], 1);
			}
			else if (v[1][i] >= 'A' && v[1][i] < 'Z')
			{
				v[1][i] -= 13;
				if (v[1][i] < 65)
					v[1][i]+= 26;
				write(1, &v[1][i], 1);
			}
			else
				write(1, &v[1][i], 1);

			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
