# Ejercicio

## Atributos de instancia vs variables locales

**Objetivo**
Utilizar las variables locales y las variables de instancia para resolver problemas simples

1. Cree un método "alimentar" en la clase Perro que tenga una variable local de tipo float que represente la cantidad de
   alimento en kilogramos que se le está dando al perro. Al llamar el método "alimentar", este método debe calcular la
   cantidad de alimento necesaria para alimentar al perro en función de su tamaño y edad (un perro grande se alimenta con 1 kilogramo por cada año de vida, un perro mediano con 0.5 kilos por cada año de vida y un perro pequeño con 0.25 kilos por cada año de vida). El método debe luego mostrar en pantalla cuánto alimento se le está dando al perro. Pruebe el método llamándolo con el objeto "Firulais"
2. 

## Modificadores de acceso

**Objetivo**
Comprender y aplicar los modificadores de acceso en programación orientada a objetos (C++), demostrando la imposibilidad
de cambiar atributos privados a través de una clase Perro con atributos nombre, raza, tamaño, color y edad

**PARTE 1:**
1. Recodifique para que queden los atributos "nombre" y "raza" como públicos y los atributos "tamaño", "color" y "edad" como privados.
2. Cree un método público llamado "mostrarInformación" que imprima los valores de los atributos "nombre", "raza", "
   tamaño", "color" y "edad".
3. Cree métodos públicos "establecerTamaño", "establecerColor" y "establecerEdad" que permitan establecer los valores de
   los atributos "tamaño", "color" y "edad", respectivamente.
4. Cree un objeto de la clase "Perro" y establezca valores para los atributos "nombre", "raza", "tamaño", "color" y "
   edad".
5. Llame al método "mostrarInformación" en el objeto "Perro" para verificar que los valores establecidos se impriman
   correctamente.
6. Pruebe establecer valores para los atributos "tamaño", "color" y "edad" mediante los métodos "establecerTamaño", "
   establecerColor" y "establecerEdad", respectivamente, y verifique que los valores se hayan establecido correctamente
   llamando al método "mostrarInformación".
7. Intente establecer valores directamente para los atributos "tamaño", "color" y "edad" desde fuera de la clase, y
   verifique que ocurra un error o advertencia debido a que estos atributos son privados y no se pueden acceder desde
   fuera de la clase.

**PARTE 2:**
1. Adicione un nuevo atributo a la clase Perro de tipo privada y entera "cantDientes" para registrar la cantidad de dientes que tiene el perro.
2. Establezca los métodos para modificar y consultar el atributo "cantDientes".
3. Cree un método público llamado "valorarDientes" que se encargue de decir: **1)** "_nombrePerro_ se encuentra Sano" si tiene más de 1 años y entre 40 y 42 dientes, o **2)** "Prestar atención a _nombrePerro_" si tiene más de 1 años y tiene menos de 40 dientes. No se tendrán en cuenta casos con menos de 1 año ya que puede estar mudando dientes.
