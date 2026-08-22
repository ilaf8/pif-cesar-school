#include <stdio.h>
#include <stdlib.h>; // Não utiliza-se ; após uma importação de biblioteca dentro do projeto = erro de compilação.



// ↓↓↓↓↓ CODIGO ERRADO ↓↓↓↓↓

int Main{} // O erro está na palavra "Main" que deveria ser escrida com a letra inical 'm' minúscula, 
// e também na falta de parênteses após a palavra "Main" que são necessários para indicar que é uma função.

(
printf( Existem %d semanas no ano.,52); // O erro está na falta de aspas duplas em torno da string "Existem %d semanas no ano.", que são necessárias para indicar que é uma string. 
// Além disso, a função printf deve ser chamada com parênteses e não com chaves.


cout << endl; // '<<' é utilizado em C++ e não é utilizado em C. Para imprimir 
// uma nova linha em C, deve-se utilizar '\n' dentro da string ou a função printf com "\n".

system("PAUSE"); // Pausa o programa.
return 0; // Retorna o valor 0 para indicar que foi finalizado com êxito.
)

// ↑↑↑↑↑ CÓDIGO ERRADO ↑↑↑↑↑


// ===============================================================================================


// ↓↓↓↓↓ CÓDIGO CORRIGIDO ↓↓↓↓↓

int main() {
	printf("Existem %d semanas no ano.\n", 52); // Printf indicando a quantidade de semanas no ano
	getchar(); // Pausa para o usuário pressionar uma tecla antes de encerrar o programa
	return 0; // Programa concluído com sucesso
}

// ↑↑↑↑↑ CÓDIGO CORRIGIDO ↑↑↑↑↑