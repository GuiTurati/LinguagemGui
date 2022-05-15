//Auxiliares
#define ligado HIGH
#define desligado LOW
#define verdadeiro true
#define falso false
#define saida OUTPUT
#define entrada INPUT
#define entradaBt INPUT_PULLUP
#define velPadrao 9600
#define nada void
#define inteira int
#define flutuante float
#define logico bool
#define caracter unsigned char
#define texto String
float analogReadT(int pino);
void (*funcReset)() = 0;




//Arduino
#define darReset funcReset()

//Variaveis
#define criarVarInteira(nome) int nome
#define criarVarFlutuante(nome) float nome
#define criarVarLogico(nome) bool nome
#define criarVarCaracter(nome) unsigned char nome
#define criarVarTexto(nome) String nome
#define mudarVar(nome, conteudo) nome = conteudo


//Tempo
#define espera(tempo) delay(tempo * 1000)

//Portas
#define modoPorta(porta, modo) pinMode(porta, modo)
#define ligarPorta(porta) digitalWrite(porta, HIGH)
#define desligarPorta(porta) digitalWrite(porta, LOW)
#define lerPortaD(porta) digitalRead(porta)
#define lerPortaA(porta) analogReadT(porta)
#define pwm(porta, valor) analogWrite(porta, map(valor, 0,100, 0,255))

//Se, Senão, SenãoSe
#define Se(condicao) if (condicao)
#define Senao else
#define SenaoSe(condicao) else if (condicao)

//Laços
#define repetir(vezes) for (int x = 1; x <= vezes; x++)
#define enquanto(condicao) while (condicao)
	
//Funcoes
#define criarFuncao(tipo, nome) tipo nome
#define retornar(valor) return valor

//Serial
#define iniciarSerial(vel) Serial.begin(vel)
#define mandarSerial(texto) Serial.print(texto)
#define mandarSerialLN(texto) Serial.println(texto)
#define temInfoSerial Serial.available()
#define lerSerial Serial.read()
#define lerSerialTexto Serial.readString()







float analogReadT(int pino) {
  float tensao = (float(analogRead(pino)) / float(1023) * 5);
  return tensao;
}