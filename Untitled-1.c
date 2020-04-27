
no *criarNo(int _valor) {
	no *novo;
	novo = (no *) malloc(sizeof(no));
	novo->valor = _valor;
	novo->anterior = NULL;
	novo->proximo = NULL;
	return novo;
}

int main (){



}