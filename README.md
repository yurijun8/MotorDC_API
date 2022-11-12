## MotorDC - API

Esta API foi desenvolvida como trabalho da disciplina de Programação de Sistemas Embarcados da UFMG –Prof. Ricardo de Oliveira Duarte –Departamento de Engenharia Eletrônica.

Autores: Luiz Otávio Antunes Gonçalves  ; Yuri Junior da Silva Adriano

---

### Requisitos de Hardware e Software

Essa API foi desenvolvida para realizar o controle de um Motor DC, utilizando pelo microcontrolador STM32F410RB6. 

![](https://images.tcdn.com.br/img/img_prod/751846/motor_dc_775_12v_10_000_rpm_4113_1_b7a89ca9edc98ddc4b2647792ec60299.jpg)
![](http://www.bosontreinamentos.com.br/wp-content/uploads/2017/07/L293D-pinagem-420x374.jpg)


O L293D é um circuito integrado que contém duas pontes H completas (ou quatro half H-bridges). Com ele, é possível controlar dois motores DC bidirecionalmente, quatro solenóides ou um motor de passo. A versão com a letra “D” vem com diodos internos de proteção.
Mais detalhes sobre esse CI podem ser encontrados no [datasheet](https://www.ti.com/lit/ds/symlink/l293d.pdf?ts=1668284903413&ref_url=https%253A%252F%252Fwww.ti.com%252Fproduct%252FL293D)

As imagens abaixo representam o microcontrolador utilizado para desenvolver a API, e o esquema de ligação entre os componentes.

![](https://res.cloudinary.com/rsc/image/upload/b_auto,c_pad,dpr_1.0,f_auto,h_303,q_auto,w_540/c_pad,h_303,w_540/R9173766-01?pgw=1)


### Funções disponíveis

#### DC_MOTOR_Start
Inicializa os pinos GPIO necessários para a lógica de controle de direção (DIR1 e DIR2)e para o Timer associado ao canal PWM selecionado. E define a resolução e a frequência do PWM conforme configurado pelo usuário no arquivo de configuração.

#### DC_MOTOR_Init
Define a direção do motor e a velocidade de partida do mesmo.

#### DC_MOTOR_Set_Speed
Ajusta a velocidade do motor ajustando o ciclo de trabalho PWM.

#### DC_MOTOR_Set_Dir
Define o sentido de rotação do motor.

#### DC_MOTOR_Stop
Para o motor.

---
#### Referências

* https://2020.robotix.in/tutorial/auto/motor_driver/#:~:text=The%20L293D%20IC%20receives%20signals,apply%20voltage%20to%20the%20motors.

