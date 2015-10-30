#include <iostream>
#include <string>
#include "Netflix.h"



using std::string;

int Netflix::gateway=66;


Netflix::Netflix(int cnpj, float velMax , const string &login , const string &senha, const string &nome, const string &apelido , const string &filmeAtual)
:maxFilmesMes(0)
{
	cnpj >= 0 ? this->cnpj=cnpj : this->cnpj=99999;
	velMax >= 0 ? this->velMax=velMax : this->velMax=99;
	login != "" ? this->login=login : this->login="default";
	senha != "" ? this->senha=senha : this->senha="1234";
	nome != "" ? this->nome=nome : this->nome="";
	apelido != "" ? this->apelido=apelido : this->apelido="";
	filmeAtual != "" ? this->filmeAtual=filmeAtual : this->filmeAtual="";
	
	usuario = 0;
	numUsuarios = 0;
	
	//series.resize(1);
	
	//series[0] = new Serie(); //cria 'uma' nova posição para cadastrar séries;
	
	//filmes.resize(1);
}

Netflix::Netflix(const Netflix &p)
:maxFilmesMes(0)
{
	this->cnpj=p.cnpj;
	this->velMax=p.velMax;
	this->login=p.login;
	this->senha=p.senha;
	this->nome=p.nome;
	this->apelido=p.apelido;
	this->filmeAtual=p.filmeAtual;
	
	usuario = p.usuario;
	
}


void Netflix::addSerie(int id, const string &nome, const string &gen, int temporada )
{
	series.push_back(0);
	series[series.size()-1] = new Serie(id, nome, gen, temporada); 
	
	//series[1]->
}

void Netflix::addFilme(int id, const string &nome, float valor, int censura, int duracao)
{
	filmes.push_back(0);
	filmes[filmes.size()-1] = new Filme(id, nome, valor, censura, duracao);
}


string Netflix::getSenha(){
	return this->senha;	
}

void Netflix::benvindo(const string &a) const{
	cout<<"Bem vindo"<<a;
}

int Netflix::verificaSenha(const string &a){
	if (a==getSenha()){
		benvindo(a);
		return 1;
	}else
		cout<<"Senha invalida!\n";
		return 0;
}

void Netflix::adicionarUsuario( string nomeNovoUsuario ){
	
	if (this->numUsuarios != 0)
	{
		string *aux = new string [numUsuarios];
		   for (int i = 0; i < numUsuarios; i++)
		       {
		       	aux[i]=usuario[i];
			   }
			   
			   delete [] usuario;
			   
			   numUsuarios++;
			   
			   usuario = new string [numUsuarios];
			   
			   for (int i = 0; i < numUsuarios-1; i++)
			   {
			   	usuario[i]=aux[i];
			   }
			   
			   
			   usuario[numUsuarios-1] = nomeNovoUsuario;
			   
			   delete [] aux;
	}else
	{
		this->numUsuarios++;
		usuario = new string[numUsuarios];
		usuario[0] = nomeNovoUsuario;
	}
	
	    
	
	
	this->numUsuarios++;
}

void Netflix::setLogin(const string &log){
	this->login=log;
}



