# Libft_ft_comentadas

## 📌 Descripción
Este proyecto es una implementación propia de la biblioteca estándar de C, realizada como parte del currículo de **42**. La particularidad de esta versión es que el código fuente incluye comentarios detallados que explican la lógica detrás de cada función, ideal para el aprendizaje y la revisión de conceptos.

El objetivo es profundizar en el funcionamiento interno de las funciones de C, la gestión de memoria y la manipulación de estructuras de datos básicas.

## 🛠️ Contenido

El repositorio incluye las siguientes categorías de funciones:

### Funciones de la Libft (Reimplementaciones)
- **Memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **Strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- **Conversión y Tipos:** `ft_atoi`, `ft_toupper`, `ft_tolower`.

### Funciones Adicionales
Funciones que están en la librería estándar que se presentan de forma distinta:
- `ft_substr`: Extrae una sección de un string.
- `ft_strjoin`: Concatena dos strings en uno nuevo.
- `ft_strtrim`: Limpia caracteres específicos al inicio y final.
- `ft_split`: Divide un string en un array usando un delimitador.
- `ft_itoa`: Convierte un entero a string.
- `ft_strmapi` / `ft_striteri`: Aplican funciones a cada carácter de un string.

### Salida de Datos (File Descriptors)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

## ⚙️ Compilación y Uso

El proyecto incluye un `Makefile` para automatizar el proceso de compilación y generar la librería estática `libft.a`.

### Comandos disponibles:

- `make` o `make all`: Compila todos los archivos `.c` y genera la librería `libft.a`.
- `make clean`: Elimina los archivos objeto (`.o`) generados durante la compilación, dejando solo el código fuente y la librería.
- `make fclean`: Ejecuta `clean` y además elimina la librería compilada (`libft.a`) y los ejecutables de test.
- `make re`: Ejecuta `fclean` seguido de `make`, recompilando todo el proyecto desde cero.

### Cómo usar la librería en tus proyectos:

1. Clona este repositorio o copia los archivos.
2. Ejecuta `make` para generar `libft.a`.
3. Incluye el header en tus archivos C: `#include "libft.h"`
4. Compila tus archivos junto con la librería:
   ```bash
   gcc tu_programa.c -L. -lft -o tu_programa
---
