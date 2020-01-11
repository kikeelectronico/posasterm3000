# Posasterm 3000

Posaterm 3000 es un simple posavasos que indica la temperatura de la bebida encendiendo uno de los LEDs de su anillo.

<img src="https://github.com/kikeelectronico/posasterm3000/raw/master/G%C5%95aficos/Recursos/captura.png"/>

# Materiales

- Arduino Nano, sin headers.
- 12 LEDs de 5 mm.
al- 12 resistencias para los LEDs. Aprende a calcularlas en este tutorial [https://www.rinconingenieril.es/usar-los-led/](https://www.rinconingenieril.es/usar-los-led/)
- Cable para conexiones. Por ejemplo de 0.25 mm².
- NTC.
- Resistencia del mismo valor que la R0 de la NTC.
- Cable USB para Arduino.
- Fuente de alimentación de 5v.
- 2 x Tornillo M3 10mm.
- 2 x Tuerca M3.

# Construcción

1. Imprimir la parte superior y la parte inferior con una impresora 3D.
2. Montar los LEDs con sus respectivas resistencias en la parte superior.
3. Montar la NTC y su circuito de acondicionamiento en la parte superior.
4. Conectar los LEDs y la NTC al Arduino Nano.
5. Cargar el firmware Posaterm300.

Video de construcción: Dispobible en breve.

# Avisos

- Si en el circuito de acondicionamiento de la NTC recibe más o menos de 5v se debe modificar la variable Vcc del firmware. Si es mayor a 5v, ten cuidado de no quemar el ADC de Arduino.
- La NTC sufre autocalentamiento, así que, cuando cada vez que se enciende tardará varios minutos en indicar la temperatura correcta. Puedes aprender a usar una NTC con este tutorial: [https://www.rinconingenieril.es/como-usar-un-termistor-ntc/](https://www.rinconingenieril.es/como-usar-un-termistor-ntc/)
- Debido al autocalentamiento la temperatura indicada puede ser algunos grados mayor a la real. Este error no es significativo en la mayoría de ocasiones para Posaterm 3000.

# Licencia
Creative Commons Atribución-CompartirIgual 4.0 Internacional.
