#!/bin/bash

# Diretório alvo
DOC_DIR="$HOME/Documents"
if [ ! -d "$DOC_DIR" ]; then
  DOC_DIR="$HOME/Documentos"
fi

# Verifica se o diretório final existe
if [ ! -d "$DOC_DIR" ]; then
  echo "Nenhum diretório 'Documents' ou 'Documentos' encontrado. Criando '$HOME/Documents'."
  DOC_DIR="$HOME/Documents"
  mkdir -p "$DOC_DIR"
fi

# Clone do repositório
echo "Clonando repositório para $DOC_DIR..."
git clone https://github.com/Gabr002/competitive-programming.git "$DOC_DIR/competitive-programming"

# Criação do alias mcpp no .bashrc
echo "Configurando alias no ~/.bashrc..."
ALIAS_CMD="alias mcpp='cp \"$DOC_DIR/competitive-programming/introductionprogramation/Estrutura de Dados/temp.cpp\" ./'"
if ! grep -Fxq "$ALIAS_CMD" ~/.bashrc; then
  echo "$ALIAS_CMD" >> ~/.bashrc
  echo "Alias adicionado."
else
  echo "Alias já estava presente no .bashrc."
fi

# Recarregar .bashrc
source ~/.bashrc

# Instalação do Vim
echo "Instalando Vim..."
sudo apt update
sudo apt install -y vim

# Configuração padrão do Vim
echo "Configurando Vim padrão..."
cat <<EOF > ~/.vimrc
" Mostrar número das linhas
set number

" Tabulação padrão
set tabstop=4
set shiftwidth=4
set expandtab
set smarttab
set autoindent
set smartindent
EOF

echo "✅ Instalação finalizada com sucesso!"

