#include <bits/stdc++.h>
using namespace std;
#define PB push_back
vector<int> v;

string solve(string str, char x, char y){ // input 
  string str_word;
  for(int i = 0; i < str.size()-2; i++) {
    if(str[i] == x) str[i] = y;
  }

  for(int i = 0; i < str.size()-2; i++) str_word.push_back(str[i]);

  return str_word;
}

string convertString(){
  string s, a;
  getline(cin, s);

  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z') a.push_back(s[i]);
  }

  return a;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string z, sw;  

  z = convertString();
  sw = solve(z, z[z.size()-2], z[z.size()-1]);

  for(int i = 0; i < sw.size(); i++) cout << sw[i];
}


// void convertInt(){
//   getline(cin, s);

//   int num = 0;
//   for (char c : s) {
//     if (c >= '0' && c <= '9') {
//       num *= 10;
//       num += c - '0';
//     } else {
//       v.PB(num);
//       num = 0;
//     }
//   }
// }






============================================================================================================================


problema 2:

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);

    vector<string> palavras;
    stringstream ss(input);
    string palavra;

    while (ss >> palavra) palavras.push_back(palavra);

    for (int i = palavras.size() - 1; i >= 0; --i) {
        cout << palavras[i];
        if (i != 0) cout << ".";
    }
	
    cout << endl;
    return 0;
}


============================================================================================================================

problema 3:

#include <bits/stdc++.h>
using namespace std;

int convertInt(){
  string s;
  getline(cin, s);

  int num = 0;
  for (char c : s) {
    if (c >= '0' && c <= '9') {
      num *= 10;
      num += c - '0';
    } else break;
  }

    return num;  
}   

int main(){

    int n;
    
		while(n = convertInt()){
            if(n == 1) cout << "ouro\n";
			else if(n == 2) cout << "prata\n";
			else if(n == 3) cout << "bronze\n";
			else if(n == 4 || n == 5) cout << "nao recebeu\n";
			else cout << "posicao invalida\n";
    }
    
    return 0;
}





============================================================================================================================

Problema 5:

#include <bits/stdc++.h>
using namespace std;

int trio(vector<int>& arr, int k) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); 

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int soma = arr[i] + arr[left] + arr[right];

            if (soma == k)
                return 1;
            else if (soma < k)
                left++;
            else
                right--;
        }
    }

    return 0;
}

int convertInt(){
    string s;
    getline(cin, s);

    int num = 0;
    for (char c : s) {
      if (c >= '0' && c <= '9') {
        num *= 10;
        num += c - '0';
      } else break;
    }

    return num;  
}

vector<int> convertArr(vector<int>& arr, string s){

    int num = 0;
    for (char c : s) {
      if (c >= '0' && c <= '9') {
        num *= 10;
        num += c - '0';
      } else {
        arr.push_back(num);
        num = 0;
      }
    }

    return arr;
}

int main() {
    int n = convertInt(), k;
    string s;
    vector<int> arr;

    getline(cin, s);
    arr = convertArr(arr, s);

    k = convertInt();

    cout << trio(arr, k) << endl;
    return 0;
}







Problema 6:


#include <bits/stdc++.h>
using namespace std;


vector<int> splitToInt(const string& s, char delimiter) {
    vector<int> result;
    stringstream ss(s);
    string token;

    while (getline(ss, token, delimiter)) {
        result.push_back(stoi(token));
    }

    return result;
}

int main() {
    string entrada1, entrada2;

    getline(cin, entrada1);
    getline(cin, entrada2);

    vector<int> arr1 = splitToInt(entrada1, ',');
    vector<int> arr2 = splitToInt(entrada2, ',');

    unordered_set<int> set_arr2(arr2.begin(), arr2.end());
    unordered_set<int> usados; 

    int soma = 0;
    for (int num : arr1) {
        if (set_arr2.count(num) && !usados.count(num)) {
            soma += num;
            usados.insert(num);
        }
    }

    cout << soma << endl;

    return 0;
}










Problema 7:

#include <bits/stdc++.h>
using namespace std;

int convertInt(){
  string s;
  getline(cin, s);

  int num = 0;
  for (char c : s) {
    if (c >= '0' && c <= '9') {
      num *= 10;
      num += c - '0';
    } else break;
  }

    return num;  
}

int main() {
    vector<int> v;
    int s1 = 0, s2 = 0;

    int i = 2;

    while(i--){
        v.push_back(convertInt());
    }

    s1 = v[0];
    s2 = v[1];
   
    if (s1 > s2) swap(s1, s2);

    int count = 0;
    int p1 = 89, p2 = 119;

    while (true) {
        if (p1 > s2 && p2 > s2) break;

        if (p1 <= s2) {
            if (p1 >= s1) count++;
            p1 += 8;
        }

        if (p2 <= s2) {
            if (p2 >= s1) count++;
            p2 += 9;
        }
    }

    cout << count << endl;
    return 0;
}







Problema 8:




#include <bits/stdc++.h>
using namespace std;

vector<int> rotacionarArrayDireita(int n, vector<int>& arr, int k) {
    k = k % n; 
    vector<int> resultado(n);

    for (int i = 0; i < n; ++i) {
        resultado[(i + k) % n] = arr[i];
    }

    return resultado;
}

int main() {
    string entrada1, entrada2, entrada3;
    getline(cin, entrada1); 
    getline(cin, entrada2); 
    getline(cin, entrada3);

    int n = stoi(entrada1);
    int k = stoi(entrada3);

    vector<int> arr;
    stringstream ss(entrada2);
    string token;

    while (getline(ss, token, ',')) {
        arr.push_back(stoi(token));
    }

    vector<int> rotacionado = rotacionarArrayDireita(n, arr, k);

    for (int i = 0; i < rotacionado.size(); ++i) {
        cout << rotacionado[i];
        if (i != rotacionado.size() - 1)
            cout << ",";
    }
    cout << endl;

    return 0;
}







Problema 9:




#include <bits/stdc++.h>
using namespace std;

int main() {
    string linha;
    getline(cin, linha);

    stringstream ss(linha);
    string token;
    int index = 0;

    while (ss >> token) {
        if (token == "0") {
            cout << index << endl;
            return 0;
        }
        index++;
    }
	
    cout << -1 << endl;
    return 0;
}






problema 10:






#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(s);

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    string tamanho_str, elementos_str, indices_str;

    getline(cin, tamanho_str); 
    getline(cin, elementos_str);
    getline(cin, indices_str);  

    vector<string> elementos = split(elementos_str, ',');
    vector<string> indices = split(indices_str, ',');

    for (size_t i = 0; i + 1 < indices.size(); i += 2) {
        int a = stoi(indices[i]);
        int b = stoi(indices[i + 1]);
        swap(elementos[a], elementos[b]);
    }

    for (size_t i = 0; i < elementos.size(); ++i) {
        cout << elementos[i];
        if (i != elementos.size() - 1) cout << ",";
    }
    cout << endl;

    return 0;
}
