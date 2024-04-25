# mercap-challenge

```
Implementar en el lenguaje orientado a objetos que más te guste el siguiente ejercicio.
Realizar un sistema de facturación de llamadas telefónicas teniendo en cuenta los siguientes
requerimientos:
1) La facturación se realiza de manera mensual
2) La facturación está compuesta por:
a. Un abono mensual básico
b. Consumo por llamadas Locales
c. Consumo por llamadas Nacionales e Internacionales
3) Las llamadas locales tienen distintos valores según la franja horaria en la que se
realizan y el día. Para los días hábiles, de 8 a 20 hrs. el costo es de 0,20 centavos el
minuto, mientras en el resto de las horas es de 0,10 centavos el minuto. Los sábados
y domingos cuesta 0,10 centavos el minuto
4) Las llamadas Internacionales tienen un costo distinto según el país al que se llame
5) Las llamadas Nacionales tienen un costo distinto según la localidad a la que se
llame
Consideraciones adicionales:
1) No es necesario realizar una interfaz de usuario visual.
2) No es necesario realizar persistencia de los datos (o sea, conexión a base de datos,
archivos, etc.). Alcanza con simular los datos creándolos en memoria
3) Como salida alcanza ver por pantalla como sería una factura (sin preocuparse por
darle un formato especial)
```
<br>
<br>

![UML](https://github.com/Sando-dev/mercap-challenge/blob/main/UML.png)

<br>
<br>

Decidí encarar este ejercicio con el lenguaje C++ porque, aunque es un lenguaje medio duro, lo utilizo para las materias que estoy cursando actualmente. Aunque C++ soporta OOP, me di cuenta que para este ejercicio tenía ciertas limitaciones. Me parece que si tuviera los conocimientos de SmallTalk más frescos podría haber hecho un mejor trabajo en la parte de objetos, con las abstracciones correspondientes y sin repetir código.  
  
Creé una clase Monthly Bill que tiene el nombre del mes y dos vectores de llamadas, uno con las Locales y otro con las Nacionales e Internacionales. Inicialmente había pensado hacer solo un vector de llamadas pero vi que a la hora de describir la facturación se hacía una diferenciación entre llamadas Locales y las Nacionales/Internacionales.

Pensé en hacer tres o dos clases más, hijas de LocalCall para solucionar el switch que trata el tipo de llamada local pero me parecieron demasiadas clases para este ejercicio corto. Igualmente no estoy del todo contento con la solución que me quedó para ese problema, en SmallTalk creo que se podría hacer algo mejor.  
También al momento de cargar las llamadas al MonthlyBill tuve que crear dos funciones diferentes para que se vayan agregando al respectivo vector (Outer o Local), esto me pareció incómodo y traté de unificar estas dos funciones en una sola que cargue la llamada al vector que corresponda según el tipo de llamada. Pero esto no lo podía lograrlo sin el uso de muchos switchs y bastante código que parecía redundante. En este caso creo que el lenguaje C++ también me limitó.  
Traté de priorizar la escabilidad sin hardcodear mucho pero al momento de poner los costos por minuto no me quedó otra que poner etiquetas. Mismo caso con los países y áreas donde tenía que ingresar el cpm en el constructor a la hora de crearlos.
