/// Devuelve el resultado de una tirada por texto de la forma XdY+Z+...
int tiradaUnica (char tirada[]);

/// Devuelve el resultado de una componenete de una tirada de texto como XdY o Z
int resolverComponente (char componenete[]);

/// Devuelve TRUE si expresion en una tirada y FALSE en caso contrario
bool esTirada(char expresion[]);

/// Devuelve el tipo de dado de una expresion
int obtenerTipo(char expresion[]);

/// Devuelve la cantidad de dados a tirar de una expresion
int obtenerCantidad(char expresion[]);

/// Devuleve el valor del número pasado como texto
int textoAInt (char numero[]);

/// Devuelve el numero que representa un caracter
int digitoAInt (char num);

/// Devuelve el resultado de elevar x a la y potencia
int potenciaEntera (int x, int y);
