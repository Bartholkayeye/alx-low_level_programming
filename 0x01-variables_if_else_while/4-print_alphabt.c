#inclure <stdio.h>

/**
 * main - Imprime l’alphabet en minuscules, à l’exception de q et e.
 *
 * Retour: Toujours 0.
 */
int main(void)
{
	lettre char;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
			putchar(lettre);
	}

	putchar('\n');

	retour (0);
}
