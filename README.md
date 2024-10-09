[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=B11032&center=true&vCenter=true&width=435&lines=Bienvenidos+todos%2Fas;Algoritmos+y+Estructuras+de+Datos)](https://git.io/typing-svg)

Soy **Fabrizzio Franco Reyes**, estudiante de ingeniería en sistemas y ayudante de cátedra de Algoritmos y Estructuras de Datos en la **Universidad Tecnológica Nacional (UTN)**. Este repositorio ha sido creado como complemento para la cursada. Aquí encontrarás:

- **Explicaciones detalladas** de conceptos clave.
- **Recursos** adicionales (lecturas, referencias, y material de apoyo).
- **Ejercicios prácticos** para afianzar los temas vistos en clase.
- **Ejemplos de código en C++** para facilitar el aprendizaje.

### Contacto

Si tienes dudas o consultas:

- **Fabrizzio Franco Reyes** - Ayudante de cátedra y Estudiante de Ingeniería en Sistemas.
- **Correo**: [ffrancoreyes@frba.utn.edu.ar](mailto:ffrancoreyes@frba.edu.ar)
- **GitHub**: [Perfil GitHub](https://github.com/ffrancoreyes)

### índice:
- [Introducción: Configurando nuestro entorno de desarrollo](#introducción-configurando-nuestro-entorno-de-desarrollo)
  - [CodeBlocks](#codeblocks)
    - [Instalación y configuración:](#instalación-y-configuración)
  - [Dev C++](#dev-c)
    - [Instalación y configuración:](#instalación-y-configuración-1)
  - [Visual Studio Code (VSCode)](#visual-studio-code-vscode)
    - [Instalación y configuración:](#instalación-y-configuración-2)
- [Capitulo 1: Hola Mundo](#capitulo-1-hola-mundo)
  - [Características clave](#características-clave)
  - [Hola Mundo](#hola-mundo)
  - [Entendiendo el Hola Mundo](#entendiendo-el-hola-mundo)
  - [Atajos y Tips que nos van a servir](#atajos-y-tips-que-nos-van-a-servir)
    - [Ejercicios:](#ejercicios)


## Introducción: Configurando nuestro entorno de desarrollo

A lo largo de esta cursada veremos **C++**, un lenguaje compilado, lo que significa que necesitaremos un entorno para escribir y compilar nuestro código. Existen varias opciones de IDEs (Entornos de Desarrollo Integrados) que puedes usar, te dejo tres opciones, elige el que mejor se ajuste a tus necesidades.

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

### Visual Studio Code (VSCode)

**Visual Studio Code** es un editor de código ligero, pero muy potente, que se puede usar para programar en muchos lenguajes, incluyendo C++. Es muy flexible gracias a sus extensiones y ofrece una experiencia de desarrollo moderna.

> [!WARNING]
> Si ya tienes instalado otro compilador de C++ (como Dev c++ o CodeBlocks), esta opción no te va a funcionar, debes desinstalar primero otros compiladores de c++.

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

## Capitulo 1: Hola Mundo

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

  o sea: 
  - Para variables y funciones: **camelCase**
  - Para clases: **PascalCase**.
  - Para constantes y macros: **snake_case**.

#### Ejercicios:
1. Escriba un programa que devuelva el texto `Hola me llamo <nombre>, como estás?`