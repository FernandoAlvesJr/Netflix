#include <iostream>
#include <string>

using std::string;

class Filme{
	public:
		Filme(int = 0, const string & = "Filme default", float = 0.0, int = 0, int = 0);
		Filme(const Filme &);
		int verificaCensura(int);
		int verificaDuracao(int);
		
	private:
		int idFilme;
		string nomeFilme;
		float valorFilme;
		int censura;
		int duracao;
};
