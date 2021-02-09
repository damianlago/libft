# **libft**
This project is a remake of a few functions of the C standard library as well as some other utility functions. 

---

## Getting started
Command **make** will produce **libft.a** file, which you can link to your project.
```c
$ git clone https://github.com/damianlago/libft.git
$ cd libft
$ make 

$ make fclean
// This will remove all created files after using the library.
$ make re
// This will execute make after fclean.
```
---

## Functions included
* [Mem](#mem-functions) 
* [Str](#str-functions) 
* [Lst](#lst-functions) 
* [Is...?](#is...-functions) 
* [Fd](#fd-functions) 
* [Others](#other-functions)
### Mem functions
```c
/* memset function writes len bytes of value c (converted to an unsigned char) 
	to the string b. */
void				*ft_memset(void *str, int c, size_t n);

/* The memcpy() function copies n bytes from memory area src to memory area dst.  
	If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead. */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/*  The memcpy() function returns the original value of dst. */
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

/* The memmove() function copies len bytes from string src to string dst.  
The two strings may overlap; 
the copy is always done in a non-destructive manner. */
void				*ft_memmove(void *dst, const void *src, size_t len);

/* The memchr function locates the first occurrence of c 
(converted to an unsigned char) in string s. */ 
void				*ft_memchr(const void *s, in c, size_t n);

/* The memcmp() function compares byte string s1 against byte string s2.  
Both strings are assumed to be n bytes long */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/* The bzero() function writes n zeroed bytes to the string s.  
	If n is zero, bzero() does nothing. */
void				ft_bzero(void *s, size_t n);
```
### Str functions
```c
/* strlcat() appends string src to the end of dst.  It will append at 
most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is
     incorrect or that dst is not a proper string). */ 
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

/* The strlen() function computes the length of the string s.  The strnlen() 
function attempts to compute the length of s, but never scans beyond the first 
maxlen bytes of s. */
size_t				ft_strlen(const char *s);

/* The strlcpy() and function copy and concatenate strings. strlcpy()
 copies up to dstsize - 1 characters from the string src to dst, NUL-terminating
 the result if dstsize is not 0.  */
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack,
   where not more than len characters are searched.  Characters that appear after a `\0' character are not
   searched */
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* The strcmp() and strncmp() functions lexicographically compare the 
null-terminated strings s1 and s2. The strncmp() function compares not more 
than n characters. */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/* The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.
     The terminating null character is considered to be part of the string; therefore if c is `\0', the functions
     locate the terminating `\0'. */
char				*ft_strchr(const char *s, int c);

/* The strrchr() function is identical to strchr(), except it locates the 
last occurrence of c. */
char				*ft_strrchr(const char *s, int c);

/* Applies the function ’f’ to each character of the string ’s’ to create a 
new string (with malloc(3)) resulting from successive applications of ’f’.*/
char				*ft_strmapi(char *s, char (*f)(unsigned int, char))

/* The calloc() function contiguously allocates enough space for count objects 
that are size bytes of memory each and returns a pointer to the allocated memory. 
The allocated memory is filled with bytes of value zero. */ 
void				*ft_calloc(size_t count, size_t size);

/* The strdup() function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it.  The pointer may subsequently be used
as an argument to the function free(3). */
char				*ft_strdup(const char *s1);

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’ */
char				*ft_substr(char const *s, unsigned int start, size_t len);

/* Allocates (with malloc(3)) and returns a new string, which is the result 
of the concatenation of ’s1’ and ’s2’. */
char				*ft_strjoin(char const *s1, char const *s2);

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string. */
char				*ft_strtrim(char const *s1, char const *set);

/* Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter. 
The array must be ended by a NULL pointer. */
char				**ft_split(char const *s, char c);
```
### Lst functions
```c
/* Allocates (with malloc(3)) and returns a new element. The variable ’content’ 
is initialized with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL. */
t_list				*ft_lstnew(void *content);

/* Adds the element ’new’ at the beginning of the list. */
void				ft_lstadd_front(t_list **lst, t_list *new);

/* Counts the number of elements in a list. */
int					ft_lstsize(t_list *lst);

/* Returns the last element of the list.*/
t_list				*ft_lstlast(t_list *lst);

/* Adds the element ’new’ at the end of the list. */
void				ft_lstadd_back(t_list **lst, t_list *new);

/* Takes as a parameter an element and frees the memory of the element’s content
using the function ’del’ given as a parameter. 
The memory of ’next’ must not be freed.*/
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/* Deletes and frees the given element and every successor of that element, 
using the function ’del’ and free(3). 
Finally, the pointer to the list must be set to NULL. */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/* Iterates the list ’lst’ and applies the function ’f’ to the content of each 
element.*/
void				ft_lstiter(t_list *lst, void (*f)(void *));

/* Iterates the list ’lst’ and applies the function ’f’ to the content of each 
element. Creates a new list resulting of the successive applications of the 
function ’f’. The ’del’ function is used to delete the content of an element 
if needed.*/
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
### Is...? functions
```c
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_atoi(const char *str);
char					*ft_itoa(int n);
````
### Fd functions
```c
/* Outputs the character ’c’ to the given file descriptor. */
void				ft_putchar_fd(char c, int fd);

/* Outputs the string ’s’ to the given file descriptor. */
void				ft_putstr_fd(char *s, int fd);

/* Outputs the integer ’n’ to the given file descriptor. */
void				ft_putnbr_fd(int n, int fd);

/* Outputs the string ’s’ to the given file descriptor, followed by a newline. */
void				ft_putendl_fd(char *s, int fd);
```
### Other functions
```c
char				*ft_strcpy(char *dest, char *src);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strcapitalize(char *str);
char				*ft_strcat(char *dest, char *src);
char				*ft_strncat(char *dest, char *src, unsigned int nb);
char				*ft_strstr(char *str, char *to_find);
```
