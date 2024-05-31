
# Monitoramento de Luminosidade Subaquática

> Gustavo do Espírito Santo - RM 559034
<br>
> Heitor Prestes - RM 554823

## Justificativa

O derramamento de petróleo no oceano é um dos maiores desastres ambientais que pode ocorrer, causando impactos devastadores para a vida marinha, ecossistemas costeiros e economias locais. O petróleo cria uma camada na superfície da água que bloqueia a luz solar, essencial para a fotossíntese de plantas aquáticas e corais. Este projeto visa monitorar a luminosidade subaquática como uma forma de detectar e estudar as consequências do derramamento de petróleo, fornecendo dados que podem ajudar na tomada de decisões rápidas e eficientes em situações de emergência ambiental.

## Instruções de Uso

1. **Montagem do Circuito**:
   - Conecte o pino 5V do Arduino à linha positiva da protoboard.
   - Conecte o pino GND do Arduino à linha negativa da protoboard.
   - Conecte o pino AO do sensor LDR ao pino A0 do Arduino.
   - Conecte os pinos VCC e GND do sensor LDR às linhas positivas e negativas da protoboard, respectivamente.
   - Conecte os pinos VCC e GND do display LCD ILI9341 às linhas positivas e negativas da protoboard, respectivamente.
   - Conecte o pino CS do display LCD ao pino 10 do Arduino.
   - Conecte o pino D/C do display LCD ao pino 9 do Arduino.
   - Conecte o pino MOSI do display LCD ao pino 11 do Arduino.
   - Conecte o pino SCK do display LCD ao pino 13 do Arduino.

2. **Upload do Código**:
   - Certifique-se de ter o software Arduino IDE instalado no seu computador.
   - Abra o Arduino IDE e escreva ou copie o código necessário para ler os dados do sensor LDR e exibi-los no display LCD.
   - Selecione a placa correta (Arduino Uno) e a porta de comunicação correspondente.
   - Carregue o código para o Arduino.

3. **Execução**:
   - Após o upload do código, o Arduino começará a ler os dados do sensor LDR.
   - Os dados de luminosidade serão exibidos no display LCD em tempo real.
   - Monitore os valores exibidos para detectar qualquer mudança significativa na luminosidade, que pode indicar a presença de petróleo na água.

## Requisitos

### Hardware
- Arduino Uno
- Protoboard
- Sensor LDR (Fotoresistor)
- Display LCD ILI9341
- Jumpers

### Software
- Arduino IDE (versão mais recente)

### Bibliotecas Necessárias
Para utilizar o display LCD ILI9341 com o Arduino, é necessário instalar as seguintes bibliotecas no Arduino IDE:
- Adafruit GFX 
- Adafruit ILI9341 
- SPI.h

Com todos os componentes corretamente conectados e o código carregado no Arduino, o sistema estará pronto para monitorar a luminosidade subaquática, ajudando a identificar possíveis derramamentos de petróleo e suas consequências.
