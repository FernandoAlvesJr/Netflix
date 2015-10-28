#include <iostream>
#include <string>
#include "Netflix.h"


using std::string;

int Netflix::gateway=66;


Netflix::Netflix(int cnpj= 0, float velMax = 100.0, const string &login = "", const string &senha = "", const string &nome = "", const string &apelido = "", const string &filmeAtual = "")
:maxFilmesMes(0)
{
	cnpj >= 0 ? this->cnpj=cnpj : this->99999;
	velMax >= 0 ? this->velMax=velMax : this->velMax=99;
	login != "" ? this->login=login : this->login="";
	this->senha="";
	this->nome=p;
	this->apelido="";
	this->filmeAtual="";
	
	usuario = 0;
	numUsuarios = 0;
}

Netflix::Netflix(const Netflix &p)
:maxFilmesMes(0)
{
	this->cnpj=p.cnpj;
	this->vel_max=p.vel_max;
	this->login=p.login;
	this->senha=p.senha;
	this->nome=p.nome;
	this->apelido=p.apelido;
	this->filmeAtual=p.filmeAtual;
	
	usuario = p->usuario;
	
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
	
	if (numUsuario != 0)
	{
		string *aux = new string [numUsuario];
		   for (int i = 0; i < numUsuario; i++)
		       {
		       	aux[i]=usuario[i];
			   }
			   
			   delete [] usuario;
			   
			   numUsuario++;
			   
			   usuario=new string [numUsuario];
			   
			   for (int i = 0; i < numUsuario; i++)
			   {
			   	usuario[i]=aux[i];
			   }
			   
			   
			   usuario[numUsuario] = nomeNovoUsuario;
			   
			   delete [] aux;
	}else
	{
		numUsuario++;
		usuario = new string[numUsuario];
		usuario[0] = nomeNovoUsuario
	}
	
	    
	
	
	this->numUsuarios++;
}

void Netflix::setLogin(const string &log){
	this->login=log;
}



