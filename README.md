## Gerador de Sinais com ESP32
<img src="https://github.com/lfs676/ESP32-Gerador-de-Sinais/blob/main/Images/WaveForms.jpg?raw=true">

<div>
  <div align="justify">
    
## Introdução
Este projeto visa desenvolver um gerador de funções utilizando o microcontrolador ESP32. O ESP32 é uma plataforma de baixo custo e baixo consumo de energia que possui recursos avançados de conectividade, como Wi-Fi e Bluetooth. Com este gerador de funções, será possível gerar diferentes formas de onda, como senoidal, quadrada, triangular e dente de serra, utilizando o ESP32 e seus periféricos. Além disso, será possível controlar a frequência, a amplitude e o offset das ondas geradas através de uma interface de potenciômetros e botões. Este projeto tem como objetivo fornecer uma solução econômica e fácil de usar para geração de sinais para aplicações educacionais e de laboratório.

### Material Necessário
- 1 ESP32
- 4 Potenciômetros 10k
- 2 Resistores 50k
- 2 Resistores 10k
- 4 Capacitores 22nF
- 1 Amplificador NE5532 (Substituível Pelo LM358)
- 1 Push Button
- 1 Barra de Pinos Fêmea
- 1 Conector KRE 3 Vias
- Biblioteca [esp32dacFast](https://github.com/tuliomoreira77/esp32dacFast)

### Especificações do Projeto
Este Projeto funciona com alimentação de -15V a +15V, necessários para gerar o offset na saída do amplificador, as frequências de ajuste variam de acordo com a forma de onda escolhida e sendo controlada de maneira simples através dos potenciômetros. O ESP32 possui 2 saídas DAC em seu corpo, sendo assim fornecendo 2 canais de geração que podem ser facilmente adaptados no projeto.
Obs: No layout do Projeto foi adicionado um conector para adicionar um display OLED para mostrar as informações da saída, porém não foi incluido no código esta funcionalidade.

#
#
<img src="https://github.com/lfs676/ESP32-Gerador-de-Sinais/blob/main/Images/Schematic.jpg?raw=true">

#
#
<img src="https://github.com/lfs676/ESP32-Gerador-de-Sinais/blob/main/Images/Layout.png?raw=true">

#
#
<img src="https://github.com/lfs676/ESP32-Gerador-de-Sinais/blob/main/Images/Project.jpg?raw=true">

