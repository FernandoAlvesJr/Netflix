#include <string>

using std::string

class Netflix{
	private:
		int cnpj;
		float vel_max;
		string login;
		string senha;
		string nome;
		string apelido;
		string filmeAtual;
		const int MAXFILMESMES;
		static int gateway;
		const static int ACESSOSSIMULTANEOS=1;
		int acessos;
		int numFilmesMes;
	public:
		Netflix(String &);
		int verificaSenha(const string &);
		int verificaLogin(const string &);
		int numFilmesMes();
		void verificaAcessos();
		void boasVindas();
}