# 📚 libft

## school 21 (42) libft project

My first project at School 21.

Цель проекта - реализация функций стандартной библиотеки Си.
Описание функций представлено по следующей ссылке:
https://microelectronics.dev/eboris/libft/wiki/Описание-функций?lang=ru-RU

#### Для компиляции основной части проекта необходимо запустить команду <br>
#### ```make all```  <br> 

#### Для компиляции бонусной части проекта необходимо запустить команду <br>
#### ```make bonus```  <br>

## 0️⃣ Libc functions

В этой первой части вы должны перекодировать набор функций libc, как определено в их man.
Ваши функции должны будут представлять тот же прототип и поведение, что и исходные.
Имена ваших функций должны иметь префикс ft_. 

* [ft_memset](/libft/ft_memset.c)
* [ft_bzero](/libft/ft_bzero.c)
* [ft_memcpy](/libft/ft_memcpy.c)
* [ft_memccpy](/libft/ft_memccpy.c)
* [ft_memmove](/libft/ft_memmove.c)
* [ft_memchr](/libft/ft_memchr.c)
* [ft_memcmp](/libft/ft_memcmp.c)
* [ft_strlen](/libft/ft_strlen.c)
* [ft_strdup](/libft/ft_strdup.c)
* [ft_strlcpy](/libft/ft_strlcpy.c)
* [ft_strlcat](/libft/ft_strlcat.c)
* [ft_strchr](/libft/ft_strchr.c)
* [ft_strrchr](/libft/ft_strrchr.c)
* [ft_strnstr](/libft/ft_strnstr.c)
* [ft_strncmp](/libft/ft_strncmp.c)
* [ft_atoi](/libft/ft_atoi.c)
* [ft_isalpha](/libft/ft_isalpha.c)
* [ft_isdigit](/libft/ft_isdigit.c)
* [ft_isalnum](/libft/ft_isalnum.c)
* [ft_isascii](/libft/ft_isascii.c)
* [ft_isprint](/libft/ft_isprint.c)
* [ft_toupper](/libft/ft_toupper.c)
* [ft_tolower](/libft/ft_tolower.c)
* [ft_calloc](/libft/ft_calloc.c)
* [ft_strdup](/libft/ft_strdup.c)

## 1️⃣ Additional functions
Во второй части вы должны закодировать набор функций, которые либо не включены в `libc`, либо включены в другую форму.
Подробнее [en.subject.pdf](/en.subject.pdf)

* [ft_substr](/libft/ft_substr.c)
* [ft_strjoin](/libft/ft_strjoin.c)
* [ft_strtrim](/libft/ft_strtrim.c)
* [ft_split](/libft/ft_split.c)
* [ft_itoa](/libft/ft_itoa.c)
* [ft_strmapi](/libft/ft_strmapi.c)
* [ft_putchar_fd](/libft/ft_putchar_fd.c)
* [ft_putstr_fd](/libft/ft_putstr_fd.c)
* [ft_putendl_fd](/libft/ft_putendl_fd.c)
* [ft_putnbr_fd](/libft/ft_putnbr_fd.c)

## 2️⃣ List functions (bonus part)

### Функции для работы с односвязным списком

Вы будете использовать следующую структуру для представления элементов вашего списка.

```
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;
```

Вот описание полей структуры `t_list`:

- `content`: содержит адрес данных. `void *` позволяет хранить адреса любых данных.
- `next`: содержит адрес следующего элемента списка связаных между собой структур или `NULL`, если это последний элемент.</br>
  </br>
* [ft_lstnew](/libft/ft_lstnew.c)
* [ft_lstdelone](/libft/ft_lstdelone.c)
* [ft_lstaddback](/libft/ft_lstadd_back.c)
* [ft_lstaddfront](/libft/ft_lstadd_front.c)
* [ft_lstclear](/libft/ft_lstclear.c)
* [ft_lstlast](/libft/ft_lstlast.c)
* [ft_lstsize](/libft/ft_lstsize.c)
* [ft_lstiter](/libft/ft_lstiter.c)
* [ft_lstmap](/libft/ft_lstmap.c)
