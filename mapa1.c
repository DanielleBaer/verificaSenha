#include <stdio.h>
#include <string.h>
int main (void)
{
  char senha[6] = "02461";
  char input[6];
  int correto;
  int i;
  scanf("%s", input);
  if (strlen(input) > strlen(senha))
  {
  	printf("Senha incorreta. Acesso negado!");
  }
  else if (strlen(input) < strlen(senha))
  {
  	printf("Senha incorreta. Acesso negado!");
  }
  else
  {
  	for (i = 1; i < strlen(senha); i++)
  	{
  		if (input[i] == senha[i])
  		{
  			correto = 0;
		}
		else
		{
			correto = 1;
			break;
		}
	}
	if (correto == 0)
	{
		printf("Acesso liberado!");
	}
	else
	{
		printf("Senha incorreta. Acesso negado!");
	}
  }
  return 0;
}
