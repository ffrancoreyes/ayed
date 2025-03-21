[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=B11032&center=true&vCenter=true&width=435&lines=Bienvenidos+todos%2Fas;Algoritmos+y+Estructuras+de+Datos)](https://git.io/typing-svg)

Soy **Fabrizzio Franco Reyes**, estudiante de ingeniería en sistemas y ayudante de cátedra de Algoritmos y Estructuras de Datos en la **Universidad Tecnológica Nacional (UTN)**. Este repositorio ha sido creado como introducción y apoyo en algunos temas de c++ que se verán durante la cursada, **NO abarca todo el contenido de la materia**.

### Links útiles
- - **Drive con archivos complementarios**: [Drive de Algoritmos y Estructuras de Datos](https://drive.google.com/drive/folders/1Yh2mXjgQEVmtCc7QgVWKvTwcUjNNXisb?usp=sharing)

> [!WARNING]
> Nota del editor: Para poder entrar a algunos enlaces debes ser alumno de la UTN.

### Contacto

Si tienes dudas o consultas:

- **Fabrizzio Franco Reyes** - Ayudante de cátedra y Estudiante de Ingeniería en Sistemas.
- **Correo**: [ffrancoreyes@frba.utn.edu.ar](mailto:ffrancoreyes@frba.edu.ar)
- **LinkedIn**: [Perfil de LinkedIn](https://linkedin.com/in/fabrizziofrancoreyes)
- **GitHub**: [Perfil GitHub](https://github.com/ffrancoreyes)

![GitHub Repo stars](https://img.shields.io/github/stars/ffrancoreyes/ayed)


### índice:
- [Introducción: Configurando nuestro entorno de desarrollo](#introducción-configurando-nuestro-entorno-de-desarrollo)
  - [CodeBlocks](#codeblocks)
    - [Instalación y configuración:](#instalación-y-configuración)
  - [Online GDB - C++](#online-gdb---c)
    - [Instalación y configuración:](#instalación-y-configuración-1)
  - [Dev C++](#dev-c)
    - [Instalación y configuración:](#instalación-y-configuración-2)
  - [CLion](#clion)
    - [Instalación y configuración:](#instalación-y-configuración-3)
    - [Obtención gratuita para estudiantes:](#obtención-gratuita-para-estudiantes)
  - [Visual Studio Code (VSCode)](#visual-studio-code-vscode)
    - [Instalación y configuración:](#instalación-y-configuración-4)
- [Capítulo 1: Hola Mundo](#capítulo-1-hola-mundo)
  - [Características clave](#características-clave)
  - [Hola Mundo](#hola-mundo)
  - [Entendiendo el Hola Mundo](#entendiendo-el-hola-mundo)
  - [Atajos y Tips que nos van a servir](#atajos-y-tips-que-nos-van-a-servir)
  - [Ejercicios:](#ejercicios)
- [Capítulo 2: Tipos de variables](#capítulo-2-tipos-de-variables)
  - [Tipos de variables](#tipos-de-variables)
    - [Tipos de datos primitivos](#tipos-de-datos-primitivos)
    - [Tipo de datos compuestos](#tipo-de-datos-compuestos)
  - [Usando lo aprendido de variables](#usando-lo-aprendido-de-variables)
  - [Repaso del capítulo.](#repaso-del-capítulo)
  - [Ejercicios:](#ejercicios-1)
- [Capítulo 3: Condicionales](#capítulo-3-condicionales)
  - [Tipos de operadores](#tipos-de-operadores)
  - [If y Else](#if-y-else)
  - [If anidado y Else If](#if-anidado-y-else-if)
  - [Switch](#switch)
- [Capitulo N: Templates o plantillas de función y tipos de datos dinámicos.](#capitulo-n-templates-o-plantillas-de-función-y-tipos-de-datos-dinámicos)
  - [¿Qué es un template en C++?](#qué-es-un-template-en-c)
  - [¿Cómo declaramos un template y como lo usamos?](#cómo-declaramos-un-template-y-como-lo-usamos)
  - [Tipo de dato dinámico](#tipo-de-dato-dinámico)
  - [Ejercicios](#ejercicios-2)
- [Capítulo N1: Punteros](#capítulo-n1-punteros)
  - [¿Qué es un Puntero?](#qué-es-un-puntero)
- [Capitulo N3: Archivos](#capitulo-n3-archivos)
  - [¿Qué es un archivo?](#qué-es-un-archivo)
  - [**Tipos de Archivos**](#tipos-de-archivos)
    - [Archivos de Texto](#archivos-de-texto)
    - [Archivos Binarios](#archivos-binarios)
  - [**Funciones Básicas**](#funciones-básicas)
  - [**Manejo de Registros**](#manejo-de-registros)
    - [Operaciones comunes](#operaciones-comunes)
  - [**Patrones Algorítmicos**](#patrones-algorítmicos)
    - [Recorrido Secuencial](#recorrido-secuencial)
    - [Apareo](#apareo)
    - [Corte de Control](#corte-de-control)
  - [**Uso de Templates**](#uso-de-templates)
  - [**Ejemplos Prácticos**](#ejemplos-prácticos)


## Introducción: Configurando nuestro entorno de desarrollo

A lo largo de esta cursada veremos **C++**, un lenguaje compilado, lo que significa que necesitaremos un entorno para escribir y compilar nuestro código. Existen varias opciones de IDEs (Entornos de Desarrollo Integrados) que puedes usar, te dejo cuatro opciones, elige el que mejor se ajuste a tus necesidades.

### CodeBlocks

**CodeBlocks** es un IDE ligero y fácil de usar, especialmente diseñado para la programación en C y C++. Es ideal para estudiantes y principiantes.

#### Instalación y configuración:
1. **Descarga**: Ve a la página oficial de [CodeBlocks](https://www.codeblocks.org/downloads/) y selecciona la opción "Download the binary release". Elige el archivo que incluye "mingw-setup.exe" para asegurarte de que incluye el compilador MinGW.
2. **Instalación**: Ejecuta el archivo descargado y sigue las instrucciones de instalación. Asegúrate de que la opción de instalar MinGW esté seleccionada.
3. **Configuración**:
   - Una vez instalado, abre CodeBlocks.
   - Ve a **Settings > Compiler**.
   - Asegúrate de que el compilador MinGW esté seleccionado y bien configurado.
   - Crea un nuevo proyecto en C++ desde **File > New > Project** y selecciona "Console Application".

---

### Online GDB - C++

**Online GBD** es un compilador en línea para distintos lenguajes de programación, esta es una alternativa en caso de que no querramos instalar un compilador en nuestra computadora, ya sea por preferencia personal o porque nuestra computadora no puede mover un compilador.

#### Instalación y configuración:
1. **En Google Chrome**: ingresar el siguiente link [Compilador de C++ en línea](https://onlinegdb.com/AjJFgeF8V)

---

### Dev C++

**Dev C++** es otro IDE popular para aprender C y C++. Es muy simple y fácil de configurar, lo que lo convierte en una opción práctica para empezar a programar sin complicaciones.

#### Instalación y configuración:
1. **Descarga**: Descarga Dev C++ desde su sitio oficial: [Dev C++](https://sourceforge.net/projects/orwelldevcpp/).
2. **Instalación**: Ejecuta el archivo descargado y sigue los pasos del instalador.
3. **Configuración**:
   - Abre Dev C++.
   - Ve a **Tools > Compiler Options**.
   - Verifica que MinGW esté seleccionado como compilador.
   - Puedes crear un nuevo proyecto desde **File > New > Project** y seleccionar "Console Application".

---

### CLion

**CLion** es un IDE profesional desarrollado por JetBrains, diseñado para facilitar el desarrollo en C y C++ con herramientas avanzadas como depuración integrada, autocompletado inteligente y navegación de código eficiente. Es una excelente opción para quienes buscan una experiencia más completa y productiva en su desarrollo en C++.

#### Instalación y configuración:
1. **Descarga**: Visita la página oficial de JetBrains [CLion](https://www.jetbrains.com/clion/download/) y descarga la versión para tu sistema operativo.
2. **Instalación**: Ejecuta el instalador y sigue los pasos indicados.
3. **Configuración**:
   - Al abrir CLion por primera vez, selecciona el compilador y el entorno de desarrollo.
   - Puedes utilizar MinGW, Cygwin, o WSL (para Windows) o directamente GCC/Clang en sistemas Linux/macOS.
   - Crea un nuevo proyecto desde **File > New Project** y selecciona "C++ Executable".

#### Obtención gratuita para estudiantes:
JetBrains ofrece una licencia gratuita para estudiantes a través de su programa de educación. Para obtener CLion sin costo:
1. **Accede a la página de licencias educativas**: [JetBrains para estudiantes](https://www.jetbrains.com/community/education/#students).
2. **Regístrate con SheerID**: Deberás presentar una constancia de alumno regular para validar tu estatus estudiantil.
3. **Descarga y activa la licencia**: Una vez aprobado, recibirás una licencia gratuita por un año, renovable mientras sigas siendo estudiante.



---

### Visual Studio Code (VSCode)

**Visual Studio Code** es un editor de código ligero, pero muy potente, que se puede usar para programar en muchos lenguajes, incluyendo C++. Es muy flexible gracias a sus extensiones y ofrece una experiencia de desarrollo moderna.

> [!WARNING]
> Nota del editor: Si ya tenés instalado otro IDE de C++ (como Dev c++ o CodeBlocks) debes hacer algunos pasos extra para que pueda funcionar VsCode correctamente. Se recomienda desinstalar otros IDEs en caso de querer usar solo VSCode

#### Instalación y configuración:
1. **Descarga**: Descarga VSCode desde su página oficial: [VSCode](https://code.visualstudio.com/).
2. **Instalación**: Ejecuta el instalador y sigue los pasos.
3. **Instalar el compilador**:
   - Instala el compilador **MinGW** desde [MinGW-w64](https://sourceforge.net/projects/mingw/) (solo damos, siguiente > siguiente > siguiente).
   - Una vez instalado, lo ejecutamos y nos va a salir algo como esto:
    ![visual inicial del MinGW](/img/imagenes-readMe/imagen1.PNG)
   - Como nosotros necesitamos usar solo el compilador de c++, vamos a marcar los siguientes elementos
     - mingw32-base
     - mingw32-gcc-g++
     - ![Imagen donde marcamos ambos elementos para la instalación](/img/imagenes-readMe/imagen2.PNG)
   - Todo entonces nos debe quedar así
    ![todos los elementos marcados para la instalación](/img/imagenes-readMe/imagen3.PNG)
   - Ahora, para instalar todo vamos a **Installation > Apply changes > Apply**
    ![imagen de aplicar cambios para instalar todo](/img/imagenes-readMe/imagen4.PNG)
   - Una vez terminado, le damos al botón **Close**
   - ![imagen dandole click al botón close](/img/imagenes-readMe/imagen5.PNG)
   - Ahora nos toca verificar si todo está correctamente instalado. para ello nos vamos a ir a escriptorio y en algún lugar donde no haya nada hacemos **Shift + Click Derecho**, nos va a aparecer algo así
   - ![abrir con windows PowerShell](/img/imagenes-readMe/imagen6.PNG)
   - Damos click a abrir con Windos PowerShell y escribimos en la consola **gcc --version** y **Enter**. Si nos sale de la siguiente forma, significa que se instaló correctamente. 
    ![Comprobando si el gcc está instalado en PowerShell](/img/imagenes-readMe/imagen7.PNG)
   - Ahora, en caso que nos haya salido lo siguiente
   ![Error de instalación de gcc en PowerShell](/img/imagenes-readMe/imagen8.PNG)  
   - Asegúrate de agregar la ruta del compilador a las variables de entorno del sistema. Esto se hace de la siguiente forma.
     1. Vamos a ir a donde instalamos gcc o g++ en mi caso es **C:\MinGW\bin**, luego de encontrar la ubicación de **g++.exe** copiamos la ruta, de nuevo, en mi caso es **C:\MinGW\bin**
     2. En el buscador de Widows buscamos **"variables de entorno"** y entramos en **Editar variables de entorno del sistema**
     - ![Variables de entorno](/img/imagenes-readMe/imagen10.PNG)   
     3. Entramos en **variables de entorno**
     - ![imagen de variables de entorno](/img/imagenes-readMe/imagen11.PNG)
     4. Se va a ver algo como lo siguiente
     - ![Variables de entorno existentes en windows](/img/imagenes-readMe/imagen12.PNG)
     5. Damos Click a **Path > Editar**
     - ![Editar Path en variables de entorno](/img/imagenes-readMe/imagen13.PNG)
     6. Damos click a **Nueva > (pegar dirección de tu g++)**. Luego de esto solo nos queda dar **Ok > Ok > Ok**
     7. Terminamos el proceso verificando en el Windows PowerShell si quedó instalado escribiendo **gcc --version**.
     ![Comprobando si el gcc está instalado en PowerShell](/img/imagenes-readMe/imagen7.PNG)  
         
4. **Configurar VSCode para C++**:
  Genial, ya configuramos todo para poder usar c++ en vscode. Entonces, vamos a abrirlo y a crear una carpeta donde vamos a guardar nuestros proyectos

  > [!TIP]
  > Si quieres tener algunas extensiones que te ayuden con tu desarrollo y que te faciliten un poco la tarea de programar, yo te recomiendo los siguientes

  **Extensiones para VsCode que te van a hacer la vida mas fácil**
   - Abre VSCode y ve a **Extensiones** (ícono de cuadrado en la barra lateral)
   - [`C/C++ Extension Pack`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack): La misma es de Microsoft, entonces que mas podés pedir?
   - [`Error Lens`](https://marketplace.visualstudio.com/items?itemName=usernamehw.errorlens): te muestra los errores del código en la misma línea en la que hay conflicto.
   - [`C/C++ Compile Run`](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run): nos va a facilitar la ejecución del código.
   - [`vscode-pets`](https://marketplace.visualstudio.com/items?itemName=tonybaloney.vscode-pets): Esta es un extra, pero si no te quieres sentir deprimido porque los ejercicios no te salen, puedes tener una mascota en vscode.

Con todo esto, ya vas a estar listo para poder codear con c++ en VsCode, CodeBlocks o Dev C++, eso nos da pie al siguiente Eje **"Hola Mundo"**

## Capítulo 1: Hola Mundo

C++ es un lenguaje de programación de propósito general que se destaca por ser eficiente y flexible. Desarrollado por Bjarne Stroustrup en 1983, es una extensión del lenguaje C con características orientadas a objetos, lo que lo hace adecuado para el desarrollo de sistemas operativos, software embebido, videojuegos, y aplicaciones que requieren alto rendimiento.

### Características clave
- **Eficiencia**: C++ ofrece control sobre la gestión de memoria y recursos, lo que lo hace ideal para aplicaciones donde el rendimiento es crítico.
- **Orientación a objetos**: C++ soporta conceptos como clases, herencia y polimorfismo.
- **Compatibilidad con C**: La mayoría del código en C puede ser usado en C++, lo que facilita la migración y compatibilidad con proyectos existentes.

> [!NOTE]
> Dato Random: GTA V fue desarrollado en gran parte con C++, utilizando el motor RAGE de Rockstar. C++ permitió optimizar el rendimiento y gestionar la memoria, cruciales para un juego de mundo abierto tan grande.

Entonces, C++ gracias a sus librerías puede llegar a ser muy potente a parte de ser un muy buen lenguaje para comenzar con Algoritmos y Estructuras de Datos.

### Hola Mundo
Ya podemos empezar a codear, vamos a abrir VsCode o el IDE de tu preferencia y vamos a crear un nuevo proyecto. En el caso de VsCode, creamos una carpeta y dentro de la misma creamos el archivo: `holaMundo.cpp`

- Vamos a tener algo así
![Entorno de Vscode](/img/00%20-%20Hola%20Mundo/imagen1.PNG). 
Vamos a escribir nuestro primer "Hola Mundo" por lo que vamos a escribir el siguiente codigo

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hola Mundo" << endl;
    return 0;
}
```
- Nuestro código va a quedar así
- ![Código de c++ en VsCode](/img/00%20-%20Hola%20Mundo/imagen3.PNG) 
- Luego con **F8** compilamos y ejecutamos nuestro programa y nos va a ejecutar un archivo **.exe**
![Hola Mundo compilado y ejecutado](/img/00%20-%20Hola%20Mundo/imagen2.PNG) 


### Entendiendo el Hola Mundo
Todo bien hasta acá, pero **¿Para que sirve cada cosa?** Vamos a desglosar el código línea por línea y explicar qué hace cada elemento

```cpp
#include <iostream>
```
- **`#include <iostream>`**: Esta línea es una directiva de preprocesador que incluye la biblioteca estándar de entrada/salida (I/O) de C++. La biblioteca `iostream` permite usar objetos como `cin` (para la entrada de datos) y `cout` (para la salida de datos). Sin esta línea, no podrías usar `cout` para imprimir mensajes en la consola.

```cpp
using namespace std;
```
- **`using namespace std;`**: Esta línea permite que el programa use todos los elementos del espacio de nombres `std` sin tener que escribir `std::` cada vez. Por ejemplo, podrías escribir `cout` en lugar de `std::cout`. El espacio de nombres `std` contiene las definiciones de las funciones y objetos de la biblioteca estándar.

```cpp
int main() {}
```
- **`int main()`**: Esta es la declaración de la función principal del programa. `main` es donde comienza la ejecución del programa. La palabra clave `int` indica que esta función devuelve un valor entero al sistema operativo al finalizar.

```cpp
    cout << "Hola Mundo" << endl;
```
- **`cout << "Hola Mundo" << endl;`**: Esta línea utiliza `cout` para enviar el texto `"Hola Mundo"` a la consola. 
    - **`<<`**: Este es el operador de inserción, que se usa para enviar datos al flujo de salida (en este caso, a la consola).
    - **`"Hola Mundo"`**: Este es el mensaje que se imprimirá en la consola.
    - **`<< endl;`**: `endl` es un manipulador que genera un salto de línea y también vacía el búfer de salida. Esto significa que el siguiente mensaje que se imprima comenzará en una nueva línea.

```cpp
    return 0;
```
- **`return 0;`**: Esta línea indica que la función `main` ha terminado y devuelve `0` al sistema operativo. En C++, devolver `0` generalmente significa que el programa se ejecutó correctamente.

### Atajos y Tips que nos van a servir

1. Nostros a lo largo del código podemos ir dejando comentarios para que nosotros mismos u otra persona que vea nuestro código, entienda lo que estamos haciendo.

```cpp
// este es un comentario simple

/*
Este es un comentario multilínea.
A este lo usamos cuando necesitamos dejar escrita mas de una línea de comentario en nuestro programa.
* /
```
2. Escribir código es un gran poder que conlleva una gran responsabilidad. Por lo que debemos seguir reglas son:

  - **camelCase**: Es el más utilizado para **nombres de variables** y **nombres de funciones**. En este estilo, la primera palabra empieza con minúscula y cada palabra siguiente comienza con mayúscula, sin espacios ni guiones. Ejemplo:
     ```cpp
     int cantidadDeItems;
     void ordenarElementos();
     ```

- **PascalCase**: Este estilo es similar a camelCase, pero la primera letra también es mayúscula. Se usa a menudo para **nombres de clases**. Ejemplo:
     ```cpp
     class GrabarAudio;
     ```

- **snake_case**: Se utiliza a veces para **nombres de constantes** o **macros**. En este estilo, las palabras están en minúscula y separadas por guiones bajos (`_`). Ejemplo:
     ```cpp
     const int VALOR_MAX = 100;
     ```

> [!CAUTION]
> El **kebab-case**, No se usa en C++ porque los guiones (`-`) no son válidos en los nombres de variables o funciones. Los guiones son interpretados como operadores de resta, por lo que no se pueden usar en nombres.

  En resúmen: 
  - Para variables y funciones: **camelCase**
  - Para clases: **PascalCase**.
  - Para constantes y macros: **snake_case**.
  - **NUNCA** debemos usar: **kebab-case**

### Ejercicios:
1. Escriba un programa que devuelva el texto `Hola me llamo <nombre>, como estás?`


## Capítulo 2: Tipos de variables

En todos los lenguajes de programación que vayamos a tocar, tenemos variables. Pero que es una variable?

Una **variable** es un espacio en la memoria de un programa donde se almacena un valor que puede cambiar durante la ejecución del mismo. Se utilizan para almacenar datos y referencias que pueden ser manipulados por el programa.

Al crear una variable, se le asigna un **nombre** (identificador) y un tipo de dato, que determina el tipo de valor que la variable puede contener, así como las operaciones que se pueden realizar sobre ella.

A ver, ya entendimos que es una variable. Pero,  ¿cómo es su estructura?

```cpp
tipo nombreVariable;
```
Algunos ejemplos de variables pueden ser las siguientes:

```cpp
int edad = 21;
float altura = 1.70;
char inicial = 'F';
```

### Tipos de variables

Existen varios tipos de variables en C++, que corresponden a los distintos tipos de datos que puede manejar el lenguaje. Estos se dividen principalmente en dos categorías: **tipos de datos primitivos** y **tipos de datos compuestos**.

#### Tipos de datos primitivos

Son los tipos básicos que proporciona el lenguaje de forma nativa. Entre los más comunes se encuentran:

1. **Tipo Entero**: El tipo `int` se utiliza para almacenar números enteros, tanto positivos como negativos, sin decimales.

```cpp
int edad = 25;  // ejemplo de variable de tipo entero
```
2. **Tipo Caracter (`char`)**: El tipo char almacena un solo carácter (como una letra, número o símbolo), y se representa entre comillas simples (').

```cpp
char sexo = 'M'; //ejemplo de variable de tipo caracter
```
3. **Tipo Flotante**: Estos tipos se utilizan para almacenar números con punto decimal.

   - `float` almacena números de precisión simple (menor precisión).
   - `double` almacena números de precisión doble (mayor precisión).

```cpp
float altura = 1.70;   // Un número flotante de precisión simple
double peso = 70.12345; // Un número flotante de precisión doble
```

4. **Tipo Booleano**: El tipo bool puede almacenar uno de dos valores: `true` o `false`. Es utilizado para condiciones lógicas.

```cpp
bool mayorEdad = true; //ejemplo de variable de tipo booleana
```

#### Tipo de datos compuestos

> [!WARNING]
> Si bien voy a explicar que son los tipos de datos compuestos, como recien estamos empezando con c++, nosotros nos vamos a centrar en los tipos de datos primitivos.

Además de los tipos primitivos, C++ también tiene tipos de datos más complejos que permiten almacenar colecciones o estructuras de datos más elaboradas. Ellos son:

1. **Tipo Cadenas de texto (string)**: Aunque el tipo char permite almacenar un solo carácter, si deseas almacenar un conjunto de caracteres (una cadena), se utiliza el tipo `string`.

```cpp
#include <string> //librería que nos va a permitir usar string
string nombre = "Fabrizzio"; //ejemplo de variable de tipo cadena
```

2. **Arreglos (array)**: Un arreglo es una colección de elementos del mismo tipo, almacenados en posiciones contiguas de memoria.

```cpp
int numeros [5] = {1,2,3,4,5}; // ejemplo de variable tipo array
```

3.  **Tipo Estructuras (struct)**: Las estructuras permiten agrupar varios tipos de datos en una sola entidad. Se utiliza para definir un tipo personalizado.

```cpp
struct persona{
  string nombre;
  int edad;
  int dni;
  char sexo;
}
```

4. **Tipo Punteros (pointer)**: Un puntero es una variable que almacena la dirección de memoria de otra variable.

```cpp
int numero = 10;
int* punteroNumero = &numero;  // Puntero a la dirección de memoria de 'numero'
```

> [!CAUTION]
> Es bueno aclarar que c++ es key sensitive, pero que quiero decir con esto? Cuando vayamos a declarar una variable tengamos en cuenta no usar espacios (` `) o si vamos a usar alguna mayúscula, recordar que esa variable tiene esa mayúscula, porque no es lo mismo `variable` que `Variable`

Pero bien, ya sabemos casi la mayoría de cosas básicas que nos van a servir a lo largo de toda la materia, ahora nos toca empezar a programar un poco.

### Usando lo aprendido de variables
No nos sirve de nada solo ver un texto aburrido sin poner en práctica todo lo que vamos aprendiendo, por lo que ahora vamos a hacer un programa en el que podamos pedir datos al usuario, guardarlos en una variable.

> [!TIP]
> Para poder capturar lo que el usuario nos ingresa tenemos dos formas, en caso de ser un string, usamos `getline(cin,variable);` y en caso de ser una variable primitiva, ya sea int, float, double, etc. Usamos `cin >> variable`, incluso podemos guardar variables múltiples con el `cin`, por ejemplo: `cin >> edad >> altura;`

En el siguiente ejercicio vamos a declarar 3 variables
- Nombre (String)
- Edad (Int)
- Altura (Float)
Con esas 3 variables vamos a devolver un solo texto con todos los datos que ingresó el usuario, por lo que nuestro programa se vería así.

```cpp
#include <iostream>
#include <string> //para poder usar strings
using namespace std;

int main(){
    //declaración de variables que vamos a usar
    int edad;
    float altura;
    string nombre;
    // pedimos al usuario que ingrese sus datos
    cout << "Ingrese su nombre: ";
    getline(cin,nombre); // con el getline(cin,variable) capturamos lo que el usuario ingresó
    cout << "Ingrese su edad: "; cin >> edad;
    cout << "Ingrese su altura: "; cin >> altura;

    //mostramos lo que el usuario ingresó
    cout << "Hola " << nombre << ", tienes " << edad << " años y mides: " << altura <<  endl;

    return 0;
}
```
### Repaso del capítulo.
Tenemos varios tipos de variables, **Tipo de dato primitivo** y **Tipo de dato compuesto**. Este cuadro te va a ayudar a memorizar todos los tipos de datos y sus rangos


| **Tipo de Dato**          | **Tamaño (bytes)** | **Rango de Valores**                                    | **Descripción**                               |
|---------------------------|-------------------|--------------------------------------------------------|-----------------------------------------------|
| `char`                    | 1                 | -128 .. 127                                             | Carácter con signo, sigue el estándar ASCII.  |
| `unsigned char`           | 1                 | 0 .. 255                                                | Carácter sin signo, sigue el ASCII extendido. |
| `short`                   | 2                 | -32,768 .. 32,767                                       | Entero corto con signo.                      |
| `unsigned short`          | 2                 | 0 .. 65,535                                             | Entero corto sin signo.                      |
| `int`                     | 4                 | -2,147,483,648 .. 2,147,483,647                         | Entero con signo, tamaño estándar.           |
| `unsigned int`            | 4                 | 0 .. 4,294,967,295                                      | Entero sin signo.                            |
| `long`                    | 4                 | -2,147,483,648 .. 2,147,483,647                         | Entero largo con signo (igual a `int` en sistemas de 32 bits). |
| `unsigned long`           | 4                 | 0 .. 4,294,967,295                                      | Entero largo sin signo.                      |
| `long long`               | 8                 | -9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807 | Entero largo extendido con signo (64 bits).  |
| `unsigned long long`      | 8                 | 0 .. 18,446,744,073,709,551,615                         | Entero largo extendido sin signo (64 bits).  |
| `float`                   | 4                 | 3.4 x 10⁻³⁸ .. 3.4 x 10³⁸                               | Número en punto flotante de precisión simple (7 dígitos de precisión). |
| `double`                  | 8                 | 1.7 x 10⁻³⁰⁸ .. 1.7 x 10³⁰⁸                            | Número en punto flotante de precisión doble (15 dígitos de precisión). |
| `long double`             | 8 o más           | Depende de la implementación, mayor que `double`.       | Número en punto flotante de precisión extendida. |
| `enum`                    | Igual a `int`     | Mismo que el tipo `int`.                                | Definido por el usuario, asigna valores enteros. |




Ya tenemos mas conocimientos y un panorama general sobre lo que son los **tipos de datos** y también sabemos cómo hacer un programa de entrada y salida de datos en c++. Pero que te parece si subimos un poco la dificultad y hacemos algunos ejercicios.

### Ejercicios:

Podrás encontrar ejercicios en la guía de **Algoritmos y Estructuras de Datos**. 
   
## Capítulo 3: Condicionales
En nuestra vida diaria nosotros solemos tomar decisiones de diferentes tipos, un ejemplo puede ser, `Llegué a mi casa de cursar algoritmos, hay comida en casa? Si hay comida almuerzo. Si no hay comida, me preparo de cocinar`. La lógica en c++ funciona de la misma manera. Los **condicionales** permiten que un programa tome decisiones y ejecute diferentes bloques de código según ciertas condiciones. Es decir, controlan el **flujo de ejecución** del programa dependiendo de si una condición es verdadera o falsa. Las principales estructuras condicionales que veremos son:

- **`if`**: La estructura condicional básica que evalúa si una expresión es verdadera o falsa.
- **`else`**: Se usa junto con el `if` para ejecutar una alternativa cuando la condición es falsa.
- **`else if`**: Permite agregar múltiples condiciones a la estructura `if`.
- **`switch`**: Se utiliza cuando se necesita evaluar una expresión y ejecutar diferentes bloques de código según el valor de esa expresión.

### Tipos de operadores
Antes de seguir con condicionales debemos entender algo importante para poder realizar los ejercicios, los tipos de operadores. Ellos nos van a permitir realizar compraraciónes, cuentas aritméticas, etc. Ellos son:


| **Tipo de Operadores**                               | **Operador**                          | **Descripción**                                                |
|------------------------------------------------------|---------------------------------------|----------------------------------------------------------------|
| Operadores de acceso                                 | `()`                                  | Invocación a función                                           |
|                                                      | `[]`                                  | Subíndice de arreglo                                           |
|                                                      | `.`                                   | Acceso a `struct` y `union`                                    |
|                                                      | `->`                                  | Acceso a `struct` y `union` a través de puntero                |
| Operadores unarios                                   | `+` / `-`                             | Signos positivo y negativo                                     |
|                                                      | `~`                                   | Complemento por bit                                            |
|                                                      | `!`                                   | NOT lógico                                                     |
|                                                      | `&`                                   | Dirección de variable                                          |
|                                                      | `*`                                   | "Indirección" (puntero)                                        |
|                                                      | `++`                                  | Pre-incremento                                                 |
|                                                      | `--`                                  | Pre-decremento                                                 |
|                                                      | `sizeof`                              | Tamaño de                                                      |
|                                                      | `(tipo)`                              | Conversión explícita                                           |
| Operadores multiplicativos                           | `*`                                   | Multiplicación                                                 |
|                                                      | `/`                                   | División                                                       |
|                                                      | `%`                                   | Módulo o resto                                                 |
| Operadores aditivos                                  | `+`                                   | Suma                                                          |
|                                                      | `-`                                   | Resta                                                         |
| Operadores de desplazamiento                         | `<<`                                  | Desplazamiento de bits a la izquierda                          |
|                                                      | `>>`                                  | Desplazamiento de bits a la derecha                            |
| Operadores relacionales                              | `<`, `>`                              | Menor que, Mayor que                                           |
|                                                      | `<=`, `>=`                            | Menor o igual, Mayor o igual                                   |
| Operadores de igualdad                               | `==`, `!=`                            | Igual a, Distinto de                                           |
| Operadores binarios por bit                          | `&`                                   | AND por bit                                                    |
|                                                      | `^`                                   | OR exclusivo (XOR)                                             |
|                                                      | `I`                                   | OR por bit                                                     |
| Operadores binarios lógicos                          | `&&`                                  | AND lógico                                                     |
|                                                      | `II`                                  | OR lógico                                                      |
| Operador condicional                                 | `?:`                                  | Operador ternario                                              |
| Operadores de asignación                             | `=`                                   | Asignación                                                     |
|                                                      | `*=`, `/=`, `%=`, `+=`, `-=`          | Asignación con multiplicación, división, módulo, suma, resta   |
|                                                      | `<<=`, `>>=`, `&=`, `^=`, `I=`        | Asignación con desplazamiento, AND, XOR, OR                    |
| Operador de concatenación de expresiones             | `,`                                   | Coma (concatenación de expresiones)                            |

>[!WARNING]
> En el cuadro anterior, usé la Letra I (i latina mayúscula) para representar "||" debido a que a la hora de armar el cuadro, el cuadro se rompía


> [!NOTE]
> Los operadores `&&`, `||` y la **coma** `,` garantizan que los operandos sean evaluados de izquierda a derecha.
> El operador condicional `(?:)` evalúa solo uno de los dos últimos operandos, dependiendo de la condición.


### If y Else
Ahora, pongamos en código el ejemplo de la comida que planteamos líneas más arriba.
nuestra lógica va a ser la siguiente

```cpp
if(hayComida){
  como;
} else{
  mePreparoDeComer;
}
```
por lo que nuestro código en c++ quedaría así:

```cpp
#include <iostream>
using namespace std;

int main(){
    //para este ejemplo, vamos a suponer que no hay comida
    bool comida = false;

    //si hay comida, como
    if(comida){
        cout << "Si hay comida :)" << endl;
        cout << "Voy a comer porque tengo hambre" << endl;
    }else{ //si no hay comida, me cocino
        cout << "No hay comida :(" << endl;
        cout << "Voy a cocinarme para luego poder comer" << endl;
    }

    return 0;
}
```

### If anidado y Else If

Ahora, como no todo en la vida es fácil, vamos a complicarnos un poco. A lo que hicimos recién vamos a agregarle un poco de complejidad y vamos a incluir un factor importante que es si tengo comida para cocinar. Y vamos a ver un el concepto de **if anidado** y el concepto de **else if**. El if anidado no es más que un if dentro de otro if y el else if nos permite agregar un condicional a la respuesta negativa de nuestro if. La lógica de nuestro programa quedaría así

```cpp
if(hayComida){
  como;
} else if(tengoParaCocinar){
    mePreparoDeComer;
  { 
  }else{
    if(tengoDinero){
      voyAlSuper;
    }else{
      meQuedoConHambre;
    }  
  }
}
```

Nuestro programa hecho en código va a quedar de la siguiente forma:

```cpp
#include <iostream>
using namespace std;

int main(){
    //para este ejemplo, vamos a suponer que no hay comida pero que si me alcanza para comprarme
    bool comida = false;
    bool tengoParaCocinar = false;
    float dinero = 40.5;

    /*
    Me pregunto si hay comida, en caso de que haya comida voy a comer. 
    Si no hay comida pero si tengo para preparar, me preparo comida. 
    Ahora, si no tengo para preparar me pregunto si tengo dinero, 
    necesito mínimo 39 dolares para poder comprarme algo de comer, si tengo mas que 39 dólares, voy al super. 
    Caso contrario, no me preparo nada de comer y no como.
    */
    if(comida){
        cout << "Si hay comida :)" << endl;
        cout << "Voy a comer porque tengo hambre" << endl;
    }else if(tengoParaCocinar){ 
        cout << "No hay comida :(" << endl;
        cout << "Voy a cocinarme para luego poder comer" << endl;
    }else{
        if(dinero > 39){
            cout << "Voy al super a comprarme de comer" << endl;
        }else{
            cout << "Hoy no voy a poder comer :c" << endl;
        }
    }
    
    return 0;
}
```

### Switch
Supongamos ahora que nos encontramos en la situación donde no encontramos comida, tampoco tenemos para preparar en casa, pero si tenemos dinero para ir a comprar, por lo que fuimos al super y tenemos varias opciones para elegir
- pollo al curry
- fideos con tuco
- milanesa napolitana
- pizza

si bien podemos hacer un if gigante con todas las opciones

```cpp
if (compra == "pollo al curry"){
  comoPolloAlCurry;
}else if (compra == "fideos con tuco"){
  comoFideosConTuco;
}else if (compra == "milanesa napolitana"){
  comoMilanesaNapolitana;
}else if (compra == "pizza"){
  comoPizza;
}else{
  noComoNada;
}
```

Si bien esto es válido, no es correcto, al contrario, es horriblemente malo. Hay una forma de hacerlo más fácil el Switch. su estructura es la siguiente

```cpp
switch (compra){
  case "pollo al curry":
    comoPolloAlCurry;
    break;
  case "fideos con tuco":
    comoFideosConTuco;
    break;
  case "milanesa napolitana":
    comoMilanesaNapolitana;
    break;
  case "pizza":
    comoPizza;
    break;
  default:
    cout << "no me decido por nada, entonces hoy no voy a comer" << endl;
}
```

## Capitulo N: Templates o plantillas de función y tipos de datos dinámicos.

### ¿Qué es un template en C++?
Un **template** es una forma de definir funciones o clases en C++ que pueden trabajar con cualquier tipo de dato (como `int`, `float`, `double`, `char`, etc.), sin tener que especificar de antemano el tipo exacto de dato. Esto te permite escribir código más genérico y reutilizable.

La traducción sería, una función que podemos usar muchas veces con distintos tipos de datos sin tener crear una para cada tipo de dato.

### ¿Cómo declaramos un template y como lo usamos?
Para poder usar los templates podemos hacerlo de la siguiente forma:
```cpp
  template <class nombreDato> //en nombre dato va a ir el nombre que querramos
  void funcion(nombreDato nombreVariable);
```

También tenemos otra forma de definirlo que es igual de correcta y funciona de la misma forma que el class

```cpp
  template <typename nombreDato>
  void funcion(nombreDato nombreVariable);
```

Ahora ¿Cómo aplicamos esto en el código? Vamos a hacer un ejercicio para pasar un número de negativo a positivo. **OJO**, si leiste bien dije un número, no especifiqué que tipo de dato vamos a usar, por lo que vamos a usar el template para ingresar el tipo de dato que querramos.

```cpp
  //Sacar el valor absoluto de un número sin conocer el tipo de dato que vamos a usar.
  #include <iostream>
  using namespace std;

  template <class datoGenerico>
  void mostrarABS(datoGenerico numero);

  int main(){
      int numA = 19;
      float numB = -19.6;
      double numC = 19.0603;
      mostrarABS(numA);
      mostrarABS(numB);
      mostrarABS(numC);
      return 0;
  }

  template <class datoGenerico>
  void mostrarABS(datoGenerico numero){
      if (numero<0){
          numero *= -1;
      }
      cout << "el valor absoluto del número es: " << numero << endl;
  }
```

el programa lo que haces es que recibe cualquier tipo de dato, en nuestro caso ingresamos 3 números con tipos de datos diferentes:

```cpp
  numA = 19; //int
  numB = -19.6; //float
  numC = 19.0603; //double
``` 
ahora bien, así como podemos pasarle valores genéricos, podemos usar ese valor genérico como función también.

```cpp
#include <iostream>
using namespace std;

//usamos el tipo genérico.
template <class T>
T sumar(T numA, T numB){
  return numA + numB;
}
```

### Tipo de dato dinámico

En esta parte vamos a hablar de un tipo de dato dinámico o más que dinámico, flexible. Este tipo de dato es el **Auto**, el mismo puede adaptarse a lo que nosotros le digamos o lo que le asignemos, por ejemplo

```cpp
  //normalmente declaramos una variable así
  int numA;
```

Esto es correcto, pero la limitante es que solo le podemos pasar un tipo de dato, en caso de que querramos pasarle cualquier tipo de dato, podemos hacerlo de la siguiente forma.

```cpp
#include <iostream>
using namespace std; 

int main(){
    auto numA = 100;
    cout << "numA x 10: " << numA*10;


    return 0;
}
```

Trabajar con auto también tiene ciertas limitantes, no es tan libre por lo que vamos a tener que saber como usarla y en que momentos usarla.


Ya sabemos cómo se usan las funciones y tipos de datos genéricos, ahora nos toca a nosotros hacer ejercicios.

### Ejercicios
1. Crea una función template que compare dos valores de cualquier tipo y devuelva el mayor.
2. Escribe una función template que acepte dos valores de cualquier tipo y devuelva su suma.

## Capítulo N1: Punteros

Nosotros venimos usando variables a lo largo de la materia y sabemos que estas se almacenan en un lugar de la memoria, pero... ¿cómo accedemos nosotros a esa dirección de memoria?
Acá es donde entran los punteros.

### ¿Qué es un Puntero?
Un **puntero** es una variable que **almacena la dirección de memoria de otra variable**. No almacena un valor como un entero o un carácter, sino que guarda la ubicación de ese valor en la memoria. Esto permite un control más directo sobre cómo se manipulan y gestionan los datos en tu programa. ¿Cómo podemos usar los punteros para conocer las direcciónes de memoria? 
Podemos usar este apunte para saber que significa cada cosa y como lo podemos usar:

```cpp
  &n = la dirección de n
  *n = la variable cuya dirección está almacenada en n

```

entonces, supongamos que declaro una variable A y quiero saber la dirección de memoria donde está guardada. Lo podemos hacer de la siguiente forma

## Capitulo N3: Archivos

### ¿Qué es un archivo?

Los archivos en `C++` permiten la persistencia de datos, permitiendo que un programa guarde información más allá de su ejecución. Se utilizan ampliamente para manejar grandes volúmenes de datos y facilitar el procesamiento estructurado.



### **Tipos de Archivos**
#### Archivos de Texto
- **Definición**: Contienen datos legibles por humanos, organizados en líneas o cadenas.
- **Modos de apertura**:
  - `"r"`: Leer.
  - `"w"`: Escribir (sobrescribe contenido existente).
  - `"a"`: Añadir al final.

#### Archivos Binarios
- **Definición**: Almacenan datos en formato binario, más eficiente y compacto.
- **Modos de apertura**:
  - `"rb"`: Leer.
  - `"wb"`: Escribir.
  - `"ab"`: Añadir.

| **Modos de Apertura** | **Texto**                                                    | **Binario**                                                        |
|------------------------|-------------------------------------------------------------|--------------------------------------------------------------------|
| `r`                   | Abre un archivo para lectura (debe existir).                | `rb`: Abre un archivo en modo binario para lectura.               |
| `w`                   | Abre un archivo para escritura, sobrescribiendo el contenido si ya existe. | `wb`: Abre un archivo en modo binario para escritura, sobrescribiéndolo si existe. |
| `a`                   | Abre un archivo para agregar (escribir al final sin sobrescribir). | `ab`: Abre un archivo en modo binario para agregar al final o lo crea si no existe. |
| `r+`                  | Abre un archivo para lectura y escritura (debe existir).    | `r+b`: Abre un archivo en modo binario para lectura y escritura.  |
| `w+`                  | Abre un archivo para lectura y escritura, sobrescribiéndolo si ya existe. | `w+b`: Abre un archivo en modo binario para lectura y escritura, sobrescribiéndolo. |
| `a+`                  | Abre un archivo para lectura y escritura, pero solo agrega al final. | `a+b`: Abre un archivo en modo binario para lectura y escritura, permitiendo agregar al final. |



### **Funciones Básicas**
Las funciones estándar de la biblioteca `<stdio.h>` son fundamentales para el manejo de archivos:
- **`fopen`**: Abre un archivo.
  ```cpp
  FILE* f = fopen("archivo.dat", "rb");
  ```
- **`fclose`**: Cierra un archivo.
  ```cpp
  fclose(f);
  ```
- **`fread` y `fwrite`**: Permiten leer y escribir bloques de datos.
  ```cpp
  fread(&variable, sizeof(tipo), 1, f);
  fwrite(&variable, sizeof(tipo), 1, f);
  ```
- **`fseek` y `ftell`**: Controlan la posición del puntero en el archivo.
  ```cpp
  fseek(f, 0, SEEK_SET); // Ir al inicio del archivo
  ftell(f);             // Obtener posición actual
  ```
- **`feof`**: Verifica si se alcanzó el final del archivo.

---

### **Manejo de Registros**
El uso de estructuras permite manejar registros en archivos binarios:
```cpp
struct Alumno {
    int dni;
    char nombre[25];
};
```
#### Operaciones comunes
1. **Escritura de registros**:
   ```cpp
   Alumno a = {12345, "Juan"};
   fwrite(&a, sizeof(Alumno), 1, f);
   ```
2. **Lectura de registros**:
   ```cpp
   Alumno a;
   fread(&a, sizeof(Alumno), 1, f);
   ```
3. **Acceso directo**:
   - Acceder al registro en la posición *N*:
     ```cpp
     fseek(f, (N-1) * sizeof(Alumno), SEEK_SET);
     fread(&a, sizeof(Alumno), 1, f);
     ```

---

### **Patrones Algorítmicos**
#### Recorrido Secuencial
Dos enfoques:
1. **Lectura anticipada**:
   ```cpp
   while (fread(&a, sizeof(Alumno), 1, f)) {
       // Procesar registro
   }
   ```
2. **Control simultáneo**:
   ```cpp
   Alumno a;
   fread(&a, sizeof(Alumno), 1, f);
   while (!feof(f)) {
       // Procesar registro
       fread(&a, sizeof(Alumno), 1, f);
   }
   ```

#### Apareo
Combina registros de múltiples archivos o estructuras.
```cpp
while (!feof(f1) && !feof(f2)) {
    if (r1.clave < r2.clave) {
        // Procesar r1
        fread(&r1, sizeof(r1), 1, f1);
    } else {
        // Procesar r2
        fread(&r2, sizeof(r2), 1, f2);
    }
}
```

#### Corte de Control
Agrupa datos por campos comunes para presentar información ordenada.
```cpp
while (fread(&a, sizeof(Alumno), 1, f)) {
    if (a.grupo != grupoActual) {
        // Procesar nuevo grupo
        grupoActual = a.grupo;
    }
    // Procesar registro actual
}
```

---

### **Uso de Templates**
Facilita el manejo de estructuras de datos genéricas:
- **Template de lectura**:
  ```cpp
  template <typename T>
  T leer(FILE* f) {
      T r;
      fread(&r, sizeof(T), 1, f);
      return r;
  }
  ```
- **Template de escritura**:
  ```cpp
  template <typename T>
  void grabar(FILE* f, T r) {
      fwrite(&r, sizeof(T), 1, f);
  }
  ```

---

### **Ejemplos Prácticos**
1. **Crear y escribir en un archivo**:
   ```cpp
   FILE* f = fopen("data.dat", "wb+");
   Alumno a = {12345, "Fabrizzio"};
   fwrite(&a, sizeof(Alumno), 1, f);
   fclose(f);
   ```

2. **Leer un archivo secuencialmente**:
   ```cpp
   FILE* f = fopen("data.dat", "rb");
   Alumno a;
   while (fread(&a, sizeof(Alumno), 1, f)) {
       cout << a.dni << ", " << a.nombre << endl;
   }
   fclose(f);
   ```

3. **Acceder al último registro**:
   ```cpp
   fseek(f, -sizeof(Alumno), SEEK_END);
   fread(&a, sizeof(Alumno), 1, f);
   ```
