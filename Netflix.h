#include <iostream>
#include <string>
//#include "Data.h"

using namespace std;

class Netflix{
	public:
		Netflix(); //Construtor
		Netflix(string); //Construtor
		Netflix(const Netflix &); //Construtor de C�pia
		void setCnpj(int);
		int getCnpj();
		void setVelMax(float);
		float getVelMax();
		void setLogin(const string &);
		string getLogin();
		void setSenha(const string &);
		string getSenha();
		void setNome(const string &);
		string getNome();
		void setApelido(const string &);
		string getApelido();
		void setFilmeAtual(const string &);
		string getFilmeAtual();
		int verificaSenha(const string &);
		void benvindo(const string &) const;
	
	private:
		int cnpj;
		float vel_max;
		string login;
		string senha;
		string nome;
		string apelido;
		string filmeAtual;
		const int maxFilmesMes;
		static int gateway;
		const static int acessosSimultaneos=1;
		//const Data ultimoAcesso;
	
};
