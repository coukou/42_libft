NAME = libft.a
CC = gcc
INC = -I includes

ODIR = objs
SDIR = srcs

CFLAGS = -Wall -Wextra -Werror

OFILES += $(addprefix cb/, \
	ft_cb_new.o ft_cb_read.o ft_cb_write.o \
)

OFILES += $(addprefix char/, \
	ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
	ft_isprint.o ft_isspace.o ft_tolower.o ft_toupper.o \
)

OFILES += $(addprefix conversion/, \
	ft_atoi_base.o ft_atoi.o ft_itoa.o ft_lltoa.o \
	ft_ulltoa.o \
)

OFILES += $(addprefix list/, \
	ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o \
	ft_lstmap.o ft_lstnew.o \
)

OFILES += $(addprefix math/, \
)

OFILES += $(addprefix memory/, \
	ft_bzero.o ft_memalloc.o ft_memccpy.o ft_memchr.o \
	ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o \
	ft_memset.o \
)

OFILES += $(addprefix output/, \
	ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o \
	ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o \
)

OFILES += $(addprefix string/, \
	ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o \
	ft_strcpy.o ft_strdel.o ft_strdup.o ft_strdupc.o \
	ft_strequ.o ft_strfind.o ft_striter.o ft_striteri.o \
	ft_strjoin.o ft_strjoin_free.o ft_strlcat.o ft_strlen.o \
	ft_strlenc.o ft_strmap.o ft_strmapi.o ft_strncat.o \
	ft_strncmp.o ft_strncpy.o ft_strndup.o ft_strnequ.o \
	ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strrev.o \
	ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o \
	ft_strtolower.o ft_strtoupper.o \
)

OFILES += $(addprefix utils/, \
	ft_nbrlen.o \
)

OBJS = $(addprefix $(ODIR)/, $(OFILES))

$(ODIR)/%.o: $(SDIR)/%.c
	@mkdir -p $(@D)
	$(CC) -c $(INC) -o $@ $< $(CFLAGS)

$(NAME): $(OBJS)
	ar rvs $(NAME) $^

all: $(NAME)

clean:
	rm -rf objs/*

fclean: clean
	rm -f libft.a

re: fclean all
