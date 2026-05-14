# Documentação do Projeto: Conversor de Unidades

## Visão Geral
O projeto **Conversor de Unidades** é uma aplicação desenvolvida em C, cujo objetivo é permitir a conversão entre diferentes unidades de medida, como temperatura, comprimento e massa. Este projeto foi realizado como parte da disciplina de Linguagem de Programação e reúne os conhecimentos adquiridos ao longo do curso.

## Integrantes do Grupo
- Fernando Brandão
- Fernando Gimenes
- Filício David
- Rafael Francisco
- Vinícius Cunha

## Estrutura do Projeto
O repositório contém os seguintes arquivos principais:

- `README.md`: Documentação do projeto.
- `main.c`: Código principal da aplicação.
- `validacao.h` e `validacao.c`: Funções para validação de entradas do usuário.
- `conversoes.h` e `conversoes.c`: Funções para realizar as conversões de unidades.
- `cmake-build-debug/`: Diretório gerado pelo CMake para construção do projeto.

## Funcionalidades
O programa oferece um menu interativo que permite ao usuário escolher o tipo de conversão desejada:

1. **Conversões de Temperatura**
   - Celsius para Kelvin
   - Kelvin para Celsius
   - Celsius para Fahrenheit
   - Fahrenheit para Celsius
   - Fahrenheit para Kelvin
   - Kelvin para Fahrenheit

2. **Conversões de Comprimento**
   - Quilômetros para Metros
   - Quilômetros para Centímetros
   - Quilômetros para Milímetros
   - Quilômetros para Polegadas
   - Quilômetros para Pés
   - Quilômetros para Milhas
   - Metros para Quilômetros
   - Metros para Centímetros
   - Metros para Milímetros
   - Metros para Polegadas
   - Metros para Pés
   - Metros para Milhas

3. **Conversões de Massa**
   - Quilogramas para Gramas
   - Quilogramas para Toneladas Longas
   - Quilogramas para Onças
   - Quilogramas para Libras
   - Gramas para Quilogramas
   - Toneladas Longas para Quilogramas
   - Onças para Quilogramas
   - Libras para Quilogramas

4. **Conversões de Toneladas**
   - Toneladas para Quilogramas
   - Toneladas para Onças
   - Toneladas para Libras
   - Quilogramas para Toneladas
   - Onças para Toneladas
   - Libras para Toneladas

5. **Histórico de Conversões**
   - O usuário pode visualizar um histórico das conversões realizadas, que é salvo em um arquivo de texto.

## Como Clonar e Executar o Projeto
Para clonar e executar o projeto, siga os passos abaixo:

1. Clone o repositório para seu ambiente local:
   ```bash
   git clone https://github.com/Viniquest/projeto-conversor-unidades.git
   ```

2. Abra o projeto na sua IDE de preferência (o projeto foi desenvolvido utilizando o CLion).

3. Compile e execute o programa conforme as instruções da IDE.

## Análise da Arquitetura do Código

### Padrões de Design
- **Modularização**: O código está dividido em módulos (arquivos `.c` e `.h`) que separam as funcionalidades de validação e conversão, facilitando a manutenção e a legibilidade.
- **Uso de Funções**: As operações de conversão são implementadas como funções separadas, o que promove a reutilização de código.

### Dependências
- O projeto não possui dependências externas além do compilador C padrão.

### Potenciais Melhorias
1. **Interface Gráfica**: Implementar uma interface gráfica para melhorar a experiência do usuário.
2. **Tratamento de Erros**: Melhorar o tratamento de erros e validações para entradas inválidas.
3. **Testes Automatizados**: Adicionar testes automatizados para garantir a precisão das conversões.
4. **Suporte a Mais Unidades**: Expandir o número de unidades suportadas para conversão, incluindo unidades menos comuns.

## Conclusão
O projeto **Conversor de Unidades** é uma aplicação simples, mas eficaz, que demonstra a aplicação de conceitos de programação em C. Com a modularização e a validação de entradas, o código é fácil de entender e manter. Melhorias futuras podem ampliar suas funcionalidades e usabilidade.
