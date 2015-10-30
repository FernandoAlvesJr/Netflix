#include <iostream>
#include <string>

using std::string;

class Serie{
	public:
		Serie (int = 0 , const string & = "Serie default", const string & = "genero defaul", int = 99);
		Serie (const Serie &);
		int verificaGenero(const string &);
		int verificaTemporada(int);
	
	private:
		int idSerie;
		string nomeSerie;
		string genero;
		int temporada;
};
