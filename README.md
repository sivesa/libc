# libc

Foreword
This first project marks the beginning of your training to become de software engineer.
To accompany you during this project, here is a list of oustanding music groups. It’s
highly probable that you won’t like any of those. This will mean that you have poor
music taste. I’m sure that you have some other qualities such as being able to hold your
breath for more than 3 minutes or maybe you know by heart the names of the 206 United
Nations’ signatory states. The groups aren’t listed in any particular order and the list
does not need to be exhaustive. Click on the links to find out more.

• Between The Buried And Me
• Between The Buried And Me, c’est bon, mangez-en
• Tesseract
• Chimp Spanner
• Emancipator
• Cynic
• Kalisia
• O.S.I
• Dream Theater
• Pain Of Salvation
• Crucified Barbara

The libc project builds on the concepts and functions I learned and built i.e. I programmed a library of useful functions that you will be allowed to reuse in most of my C projects. This will save me a lot of precious time. 
C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project makes you to take the time to re-write those functions,
understand them, and learn to use them. This library will help you for all your future C
projects.
Through this project, you might get an opportunity to expand the list of functions
with your own, if you follow. Take the time to expand your libc throughout the years.

Libc functions
re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.

You must re-code the following functions:
• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
• strlen
• strdup
• strcpy
• strncpy
• strcat
• strncat
• strlcat
• strchr
• strrchr
• strstr
• strnstr
• strcmp
• strncmp
• atoi
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower
• ft_memalloc
• ft_memdel
• ft_strnew
• ft_strdel
• ft_strclr
• ft_striter
• ft_striteri
• ft_strmap
• ft_strmapi
• ft_strequ
• ft_strnequ
• ft_strsub
• ft_strjoin
• ft_strtrim
• ft_strsplit
• ft_itoa
• ft_putchar
• ft_putstr
• ft_putendl
• ft_putchar_fd
• ft_putnbr
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd
• ft_lstnew - t_list * ft_lstnew(void const *content, size_t content_size);
• ft_lstdelone - void ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
• ft_lstdel - void ft_lstdel(t_list **alst, void (*del)(void *, size_t)); 
• ft_lstadd - void ft_lstadd(t_list **alst, t_list *new);
• ft_lstiter - void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
• ft_lstmap - t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));
