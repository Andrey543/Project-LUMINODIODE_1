/*  
#include <Arduino.h> - Библиотека для работы с микроконтроллерами

int Pin = 2; - Переменная Pin отвечает за само число адрес(пин),
               указывая процессору совершить определенные действия, который определяется при помощи библиотеки pins_arduino.h.
               Приблизительный путь к библиотеке: 
               C:\Users\[Имя Пользователя]\.platformio\packages\framework-arduinoespressif8266\variants\d1_mini

void setup() - Функция подачи питания через OUTPUT(выход) и INPUT(вход). 
               OUTPUT - это напряжение тока; INPUT - это проверка напряжения 0 и 1(0 - выкл, 1 - вкл)
    pinMode(Pin, OUTPUT); - Функция установки режима питания через OUTPUT и INPUT для пина.
}

void loop() - Функция цикла работы самой платы через HIGH(подача напряжения) и LOW(снятие напряжения).
              HIGH при OUTPUT дает напряжение 3.3В или 5В, а при INPUT дает логическую 0.
              LOW при OUTPUT снимает напряжение 0В, а при INPUT дает логическую 1.
              
    digitalWrite(Pin,HIGH); - Функция подачи HIGH значение на пин(INPUT/OUTPUT)

    delay(1000); - Функция отключения кода на ограниченное время(1 секунда = 1000 миллисекунд)

    digitalWrite(Pin,LOW); - Функция подачи LOW значение на пин(INPUT/OUTPUT)

    delay(1000); - Функция отключения кода на ограниченное время(1 секунда = 1000 миллисекунд)
*/


#include <Arduino.h> 

int Pin = 2;  

void setup() { 
                  
    pinMode(Pin, OUTPUT); 
}

void loop() { 

    digitalWrite(Pin,HIGH); 

    delay(1000); 

    digitalWrite(Pin,LOW); 

    delay(1000); 
}

