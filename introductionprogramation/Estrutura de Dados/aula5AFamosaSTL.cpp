#include <bits/stdc++.h>
using namespace std;

// STL = Standard Template Library

/* 
  CONTAINERS
  ----------
   
   vector<T>
   string
   pair<T1, T2>
   tuple<T1, ..., T infinite>
   queue<T>
   stack<T>
   deque<T>
   iteradores

   ALGORITMOS
   ----------
   min/max
   sort
   erase
   reverse
   lower_bound
   upper_bound

*/
struct pessoa{
	string nome;
	int idade;
	
	pessoa(){}

	pessoa(string s, int x){
		idade = x;
		nome = s;
	}
};

// Retorna se p1 < p2
bool cmp(pessoa p1, pessoa p2){
//	if(p1.idade < p2.idade) return true;
//	else return false 
	
	return p1.idade < p2.idade;
}

int main() { 
	vector<pessoa> vec(3);

	vec[0] = pessoa("Tubone", 23);
	vec[1] = pessoa("Dikson", 12);
	vec[2] = pessoa("Fakhoury", 20);

	sort(vec.begin(), vec.end(), cmp);

	cout << (*lower_bound(vec.begin(), vec.end(), pessoa("Fakhoury", 20), cmp)).nome << endl;
	return 0; 
}

