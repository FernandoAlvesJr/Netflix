#include <iostream>
#include <string>
#include "Netflix.h"


using std::string;

int Netflix::gateway=66;

Netflix::Netflix()
:maxFilmesMes(0)
{
	
	this->nome="Visitante";
	this->filmeAtual="Ghost";
}

Netflix::Netflix(string p)
:maxFilmesMes(0)
{
	this->cnpj=99999;
	this->vel_max=99;
	this->login="";
	this->senha="";
	this->nome=p;
	this->apelido="";
	this->filmeAtual="";
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

void Netflix::setLogin(const string &log){
	this->login=log;
}


