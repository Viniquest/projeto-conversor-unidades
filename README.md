# projeto-conversor-unidades
Projeto final para a diciplina Linguagem de Programação, a proposta era realizar um programa em C que realizasse conversões de unidades, aplicando todos os conhecimentos adiquiridos durante a disciplina.

# Integrantes do Grupo
Fernando Brandão
Fernando Gimenes
Filício David
Rafael Francisco
Vinícius Cunha

# Clonando e rodando o programa
* Clone o repositório para seu ambiente local:
* https://github.com/Viniquest/projeto-conversor-unidades.git
* Abra o projeto na sua IDE de preferência (Foi programado utilizando o Clion)
* Siga o guia do usuário fornecido nesse repositório

<!-- GILGAMESH-DOC-START -->
## 📄 Documentação Automática

Este trecho foi gerado automaticamente com base nos arquivos Java do repositório.

### Conversor de Unidades/cmake-build-debug/CMakeFiles/3.28.1/CompilerIdC/CMakeCCompilerId.c
Resumo:

Classe: Conversor de Unidades
Responsabilidades:
- Identificar o compilador utilizado e suas versões.
- Identificar a plataforma e arquitetura utilizadas.
- Gerar informações sobre o padrão de linguagem padrão e extensões.
- Implementar um main() que realiza a identificação das informações acima.

### Conversor de Unidades/conversoes.c
A classe é responsável por fornecer métodos para a conversão de diferentes unidades de temperatura, comprimento e peso. 

- Para as temperaturas, a classe oferece métodos para converter entre Celsius (°C), Kelvin (K) e Fahrenheit (°F).
- Para as medidas de comprimento, há métodos para converter entre quilômetros (km), metros (m), centímetros (cm), milímetros (mm), polegadas (pol), pés (pes) e milhas (mi).
- Para as unidades de peso, existem funções para converter entre quilogramas (kg), gramas (g), toneladas (ton), onças (oz) e libras (lb).

Além disso, a classe também fornece métodos para converter entre as diferentes unidades dentro de cada categoria (ex: de kg para g, de km para mm, etc.) e vice-versa.

### Conversor de Unidades/conversoes.h
Resumo da classe e seus métodos:

Classe: Conversoes
Responsabilidades:
- Definir uma estrutura Unidade para representar uma unidade de medida e sua função de conversão associada.
- Fornecer funções para conversão de unidades de temperatura, comprimento, massa e toneladas.

Métodos de conversão de temperatura:
- CparaK: Converte temperatura de Celsius para Kelvin.
- KparaC: Converte temperatura de Kelvin para Celsius.
- CparaF: Converte temperatura de Celsius para Fahrenheit.
- FparaC: Converte temperatura de Fahrenheit para Celsius.
- FparaK: Converte temperatura de Fahrenheit para Kelvin.
- KparaF: Converte temperatura de Kelvin para Fahrenheit.

Métodos de conversão de comprimento:
- KmparaM: Converte comprimento de Quilômetros para Metros.
- KmparaCm: Converte comprimento de Quilômetros para Centímetros.
- KmparaMm: Converte comprimento de Quilômetros para Milímetros.
- KmparaPol: Converte comprimento de Quilômetros para Polegadas.
- KmparaPes: Converte comprimento de Quilômetros para Pés.
- KmparaMi: Converte comprimento de Quilômetros para Milhas.
- MparaKm: Converte comprimento de Metros para Quilômetros.
- MparaCm: Converte comprimento de Metros para Centímetros.
- MparaMm: Converte comprimento de Metros para Milímetros.
- MparaPol: Converte comprimento de Metros para Polegadas.
- MparaPes: Converte comprimento de Metros para Pés.
- MparaMi: Converte comprimento de Metros para Milhas.

Métodos de conversão de massa:
- kg_para_g: Converte massa de Quilogramas para Gramas.
- kg_para_tol: Converte massa de Quilogramas para Toneladas Longas.
- kg_para_oz: Converte massa de Quilogramas para Onças.
- kg_para_lb: Converte massa de Quilogramas para Libras.
- g_para_kg: Converte massa de Gramas para Quilogramas.
- tol_para_kg: Converte massa de Toneladas Longas para Quilogramas.
- oz_para_kg: Converte massa de Onças para Quilogramas.
- lb_para_kg: Converte massa de Libras para Quilogramas.

Métodos de conversão de toneladas:
- ton_para_kg: Converte massa de Toneladas para Quilogramas.
- ton_para_oz: Converte massa de Toneladas para Onças.
- ton_para_lb: Converte massa de Toneladas para Libras.
- kg_para_ton: Converte massa de Quilogramas para Toneladas.
- oz_para_ton: Converte massa de Onças para Toneladas.
- lb_para_ton: Converte massa de Libras para Toneladas.

### Conversor de Unidades/main.c
Resumo:
A classe é responsável por criar um Conversor de Unidades, que permite a conversão de temperaturas, comprimentos, massas e toneladas. Os métodos da classe incluem exibirMenu(), menuTemperatura(), menuComprimento(), menuMassa(), menuTonelada(), salvarResultado(), mostrarHistorico(), obterOpcaoValida(), obterValorFloat() e o método main(). O programa apresenta menus para cada tipo de conversão, permitindo ao usuário escolher a opção desejada e realizar as conversões. Os resultados são salvos em um arquivo de histórico e podem ser consultados posteriormente.

### Conversor de Unidades/validacao.c
Resumo:
A classe Validacao possui dois métodos responsáveis por verificar e obter valores válidos a partir da entrada do usuário. O método obterOpcaoValida é responsável por obter uma opção válida dentro de um intervalo definido, enquanto o método obterValorFloat é responsável por obter um valor numérico do tipo float válido. Ambos os métodos realizam a verificação e tratamento de entrada inválida, limpando o buffer de entrada e solicitando ao usuário novas entradas válidas até que sejam fornecidas.

### Conversor de Unidades/validacao.h
A classe é responsável por validar opções de menu e valores a serem convertidos. 

Métodos:
1. obterOpcaoValida(int min, int max): Valida as opções do menu, garantindo que estejam dentro do intervalo especificado pelos parâmetros min e max. Retorna a validação do valor digitado.

2. obterValorFloat(): Valida o valor a ser convertido, garantindo que seja um número do tipo float. Retorna a validação do valor digitado.

<!-- GILGAMESH-DOC-END -->
