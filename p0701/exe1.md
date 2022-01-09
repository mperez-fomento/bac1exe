# 1

Explica cuáles son las ventajas de utilizar funciones.


# 2

Haz un esquema de la sintaxis de la definición de una función, marcando los elementos que la forman en el siguiente ejemplo:

```cpp
std::string ejemplo(std::string texto)
{
    return "Esto es un ejemplo de función: " + texto;
}
```


# 3

Escribe la definición de un procedimiento que muestre en el terminal el mensaje `Hello, world!`. El procedimiento debe llamarse `saludar`. Escribe una llamada a dicho procedimiento.


# 4

Escribe la definición de una función que devuelva el texto `Hello, world!`. La función debe llamarse `saludo`.

Escribe una llamada a dicha función, y utiliza el valor devuelto para mostrar en el terminal dicho valor.


# 5

Escribe la definición de una función que calcule y devuelva la distancia entre dos puntos de un plano dadas sus coordenadas cartesianas. La función debe llamarse `distancia`. Debe tener cuatro parámetros, que son las coordenadas de los dos puntos: los dos primeros, las de un punto, y los dos últimos las del otro punto. Utiliza `double` tanto para los parámetros como para el valor devuelto.

Para hallar la raíz cuadrada de un número `n`, utiliza `std::sqrt(n)`.

Escribe una llamada a dicha función para calcular la distancia entre los puntos (1, 2) y (4, 6).


# 6

Escribe la definición de una función que convierta grados sexagesimales a radianes. La función debe llarmarse `radianes`. Utiliza `double` para todos los datos numéricos.

Escribe llamadas a dicha función que calculen los radianes correspondientes a 30°, 45°, 90° y 180°.


# 7

Escribe la definición de una función que convierta radianes en grados sexagesimales. La función debe llamarse `grados`. Utiliza `double` para todos los datos numéricos.

Escribe llamadas a dicha función que calculen los grados sexagesimales correspondientes a $\pi/2$, $\pi$, $3\pi/2$ y $2\pi$ radianes.


# 8

Corrige los errores sintácticos de las siguientes definiciones de funciones:

```cpp
iniciales(std::string texto)
{
    std::istringstream iss{texto};
    std::string resultado {};
    std::string palabra;
    while (iss >> palabra) {
        resultado += palabra[0];
    }
    return resultado;
}

std::string ordenado_por_palabras(texto)
{
    std::istringstream iss{texto};
    std::vector<std::string> palabras {};
    std::string palabra;
    while (iss >> palabra) {
        palabras.push_back(palabra);
    }
    palabras.sort(palabras.begin(), palabras.end());
    std::string resultado {};
    for (const auto& p : palabras) {
        resultado += p + " ";
    }
    resultado.pop_back();
    return resultado;
}

int cuenta_palabras{std::string texto}
{
    std::istringstream iss{texto};
    std::string palabra;
    int resultado {0};
    while (iss >> palabra) {
        resultado++;
    }
    return resultado;
}
```

Nota: dentro del cuerpo de las funciones no hay errores sintáticos. No es necesario que entiendas dicho cuerpo. Los errores están sólo en la sintaxis de la definición.


# 9

Dada la siguiente definición,

```cpp
// Calcula el área de un triángulo de lados a, b, c
double area_triangulo(double a, double b, double c)
{
    double angulo = acos((a*a + b*b - c*c)/(2*a*b));
    double altura = a*sin(angulo);
    double base = b;
    return base*altura/2;
}
```

escribe los valores de las siguientes expresiones:

-   `area_triangulo(3, 4, 5)`
-   `area_triangulo(5, 12, 13)`


# 10

Dada la siguiente definición,

```cpp
// Calcula el punto de corte con el eje OX de la recta y = mx + n
// Debe ser m distinto de cero
double corte_OX(double m, double n)
{
    return -n/m;
}
```

escribe los valores de las siguientes expresiones:

-   `corteOX(1, 2)`
-   `corteOX(2, 1)`


# 11

Dadas las siguientes definiciones,

```cpp
double doble(double x)
{
    return 2*x;
}

double cuadrado(double x)
{
    return x*x;
}

double siguiente(double x)
{
    return x + 1;
}
```

escribe los valores de las siguientes expresiones:

-   `cuadrado(doble(3))`
-   `doble(cuadrado(3))`
-   `cuadrado(doble(siguiente(3)))`
-   `siguiente(doble(cuadrado(3)))`
-   `cuadrado(doble(3) + siguiente(1))`
-   `doble(siguiente(cuadrado(3)) + siguiente(2*doble(2)))`


# 12

Observa el código siguiente:

```cpp
void introduce()
{
    console.log("Hello, this is John.");
}
```

Reescribe la definición de la función, añadiendo un parámetro, de modo que el nombre que aparece en el saludo sea el valor de dicho parámetro.

Por ejemplo, la llamada: `introduce("Peter")`, produciría en la consola el mensaje, `Hello, this is Peter.`.


# 13

Observa el código siguiente:

```cpp
std::string introduction()
{
    return "Hello, this is John.";
}
```

Reescribe la definición de la función, añadiendo un parámetro, de modo que el nombre que aparece en el saludo sea el valor de dicho parámetro.

Por ejemplo, la expresión `introduction("Peter")` valdría `"Hello, this is Peter."`.


# 14

Dadas las siguientes definiciones:

```cpp
double sol1(double a, double b, double c)
{
    return (-b - sqrt(b*b - 4*a*c))/(2*a);
}

double sol2(double a, double b, double c)
{
    return (-b + sqrt(b*b - 4*a*c))/(2*a);
}

std::string resuelve(double a, double b, double c)
{
    double s1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    double s2 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    return "Soluciones: " + s1 + "; " + s2;
}

std::string factoriza(double a, double b, double c)
{
    double r1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    double r2 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    return "(x - " + r1 + ")(x - " + r2 + ")";
}
```

observa que en las funciones `resuelve` y `factoriza` aparecen repetidas las expresiones que se utilizan en `sol1` y `sol2`.

Reescribe las funciones `resuelve` y `factoriza`, utilizando llamadas a las funciones `sol1` y `sol2`, para evitar repetir dichas expresiones.


# 15

Se tiene una función `mayus(texto)`, que convierte en mayúsculas las letras de `texto`, y una función `iniciales(texto)`, que forma una palabra con las iniciales de las palabras de `texto`. Utilizando ambas funciones, escribe una tercera función, `sigla(texto)`, que forme una palabra con las iniciales de las palabras de `texto` en letra mayúscula.

Por ejemplo,

```cpp
// Supón que están definidas las funciones mayus e iniciales
std::string m = mayus("Hola"); // m vale "HOLA"
std::string i = iniciales("Esto es un ejemplo"); // i vale "Eeue"
// Define tú la función sigla
std::string s = sigla("Esto es un ejemplo"); // s debe valer "EEUE"
```


# 16

Se tiene una función `mayus(texto)`, que convierte en mayúsculas las letras de `texto`, una función `iniciales(texto)`, que forma una palabra con las iniciales de las palabras de `texto`, y una función `invertir(texto)`, que devuelve un texto con los caracteres en orden inverso a los de `texto`. Utilizando dichas funciones, escribe una cuarta función, `siglaFinal(texto)`, que forme una palabra con la última letra de las palabras de `texto` en letra mayúscula.

Por ejemplo,

```cpp
// Supón que están definidas las funciones mayus, iniciales e invertir
std::string m = mayus("Hola"); // m vale "HOLA"
std::string i = iniciales("Esto es un ejemplo"); // i vale "Eeue"
std::string r = invertir("Esto es un ejemplo"); // r vale "olpmeje nu se otsE"
// Define tú la función siglaFinal
std::string s = siglaFinal("Esto es un ejemplo"); // s debe valer "OSNO"
```


# 17

Se tiene la función `reemplazar(texto, letraAntigua, letraNueva)`, que sustituye en `texto`, todas las apariciones de `letraAntigua` por `letraNueva`, distinguiendo mayúsculas y minúsculas. Por ejemplo:

```cpp
reemplazar("Esto es un ejemplo", 'e', '@') // "Esto @s un @j@mplo"
```

Se tiene una variable llamada `mensaje`, que almacena el texto siguiente: `Este mensaje es un mensaje de alto secreto`.

Escribe, sin utilizar ninguna asignación, las llamadas a la función `reemplazar` necesarias para obtener los siguientes resultados:

-   `Esti minsaji is un minsaji di alto sicrito`
-   `Exte menxaje ex un menxaje de alto xecreto`
-   `Exti minxaji ix un minxaji di alto xicrito`
-   `Etse mentaje et un mentaje de also tecreso`