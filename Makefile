target = prime

source = $(target).c
executable = $(target)

$(target): $(source)
	clang -Wall -Werror -Wextra -o $(executable) $(source)

clean:
	rm -fv a.out $(executable)

vi:
	vi $(source)

test: $(executable)
	-./$(executable)
	@./$(executable) 1
	@./$(executable) 2
	@./$(executable) 3
	@./$(executable) 4
	@./$(executable) 5
	@./$(executable) 54557
	@./$(executable) 12345
	@./$(executable) 123456789
	@./$(executable) 2971215073
	@./$(executable) 99194853094755497

