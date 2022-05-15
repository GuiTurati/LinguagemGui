#include <LinguagemGui.h>


void setup() {
  iniciarSerial(velPadrao);
  
  //Explicasao da Biblioteca
  mandarSerialLN(F("                                   Auxiliares                                        "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("ligado   //Para o Comando 'modoPorta' (para programadores 'HIGH') "));
  mandarSerialLN(F("desligado   //Para o Comando 'modoPorta' (para programadores 'LOW') "));
  mandarSerialLN(F("verdadeiro   //Para o Comando 'modoPorta' (para programadores 'true') "));
  mandarSerialLN(F("falso   //(para programadores 'false') "));
  mandarSerialLN(F("saida   //Para o Comando 'modoPorta' (para programadores 'OUTPUT') "));
  mandarSerialLN(F("entrada   //Para o Comando 'modoPorta' (para programadores 'INPUT') "));
  mandarSerialLN(F("entradaBt   //Para o Comando 'modoPorta' (para programadores 'INPUT_PULLUP') "));
  mandarSerialLN(F("velPadrao   //Para o Comando 'iniciarSerial' (para programadores velocidade '9600') "));
  mandarSerialLN(F("nada   //Para criar funcoes que não retornao parametros (para programadores 'void') "));
  mandarSerialLN(F("flutuante   //Para variaveis flutuante {Obs: não cria variaveis} (para programadores 'float') "));
  mandarSerialLN(F("inteira   //Para variaveis inteira {Obs: não cria variaveis} (para programadores 'int') "));
  mandarSerialLN(F("logico   //Para variaveis logico {Obs: não cria variaveis} (para programadores 'boolean') "));
  mandarSerialLN(F("caracter   //Para variaveis caracter {Obs: não cria variaveis} (para programadores 'char') "));
  mandarSerialLN(F("texto   //Para variaveis texto {Obs: não cria variaveis} (para programadores 'String') "));
  mandarSerialLN(F("inteira   //Para criar funcoes que retornao inteiro (para programadores 'int') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                    Arduino                                          "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("darReset   //Para dar reset no arduino (para programadores ' void (*funcReset)() = 0 ') "));
  mandarSerialLN(F("mapear(valor, deMenor,deMaior, paraMenor,paraMaior)    //valor: o número a ser mapeado | deMenor: o menor limite do valor | deMaior: o maior limite do valor | paraMenor: o menor limite da conversao | paraMaior: o maior limite da conversao  (para programadores ' map ') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                   Variaveis                                         "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("criarVarInteira(nome)   //Para criar variavel inteira (para programadores 'int nome') "));
  mandarSerialLN(F("criarVarFlutuante(nome)   //Para criar variavel flutuante (para programadores 'float nome') "));
  mandarSerialLN(F("criarVarLogico(nome)   //Para criar variavel logico (para programadores 'bool nome') "));
  mandarSerialLN(F("criarVarCaracter(nome)   //Para criar variavel caracter (para programadores 'unsigned char nome') "));
  mandarSerialLN(F("criarVarTexto(nome)   //Para criar variavel texto (para programadores 'String nome') "));
  mandarSerialLN(F("mudarVar(nome, conteudo)   //Para mudar o valor da variavel (para programadores 'nome = conteudo' ) "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                     Tempo                                           "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("espera(tempo)   //Uma espera no arduino {Obs: Tempo em segundos} (para programadores ' delay(tempo * 1000) ') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                     Portas                                          "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("modoPorta(porta, modo)   //O modo da porta (para programadores 'pinMode(porta, modo)' ) "));
  mandarSerialLN(F("ligarPorta(porta)   //Liga a porta (para programadores 'digitalWrite(porta, HIGH)' ) "));
  mandarSerialLN(F("desligarPorta(porta)   //Desliga a porta (para programadores 'digitalWrite(porta, LOW)' ) "));
  mandarSerialLN(F("lerPortaD(porta)   //Le a porta (para programadores 'digitalRead(porta)') "));
  mandarSerialLN(F("lerPortaA(porta)   //Le a porta {Obs: retorna a tensao} (para programadores 'analogReadT(porta)' ) "));
  mandarSerialLN(F("pwm(porta, valor)   //Manda pwm para a porta {Obs: valor de 0 a 100} (para programadores ' analogWrite(porta, map(valor, 0,100, 0,255)) ')"));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                Se, Senão, SenãoSe                                   "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("Se(condicao)   //Avaliacao Se (para programadores 'if (condicao)') "));
  mandarSerialLN(F("Senao   //Avaliacao Senao (para programadores 'else') "));
  mandarSerialLN(F("SenaoSe(condicao)   //Avaliacao Senao Se (para programadores 'else if (condicao)') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                      Laços                                          "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("repetir(vezes)   //Repetir vezes (para programadores  'for (int x = 1; x <= vezes; x++) ') "));
  mandarSerialLN(F("enquanto(condicao)   //enquanto for verdadeiro (para programadores 'while (condicao)') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                     Funcoes                                         "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("criarFuncao(tipo, nome)   //Criar funcao (para programadores 'tipo nome') "));
  mandarSerialLN(F("retornar(valor)   //Para retornar valor na funcao (para programadores 'return valor') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                      Serial                                         "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("iniciarSerial(vel)   //Iniciar comunicação Serial (para programadores 'Serial.begin(vel)') "));
  mandarSerialLN(F("mandarSerial(texto)   //Manda uma informacao sem quebra de linha (para programadores 'Serial.print(texto)') "));
  mandarSerialLN(F("mandarSerialLN(texto)   //Manda uma informacao com quebra de linha (para programadores 'Serial.println(texto)') "));
  mandarSerialLN(F("temInfoSerial   //Se tem informacao recebida no serial (para programadores 'Serial.available()') "));
  mandarSerialLN(F("lerSerial   //Ler uma informacao caracter (para programadores 'Serial.read()') "));
  mandarSerialLN(F("lerSerialTexto   //Ler uma informacao texto (para programadores 'Serial.readString()') "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("                                   Observações                                       "));
  mandarSerialLN(F("_____________________________________________________________________________________"));
  mandarSerialLN(F("Texto SEMPRE entre ASPAS DUPLAS"));
  mandarSerialLN(F("Caracter SEMPRE entre ASPAS SIMPLES"));
  mandarSerialLN(F("Logico é LIGADO ou DESLIGADO"));
}
void loop() {
}
