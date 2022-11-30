folderc = some_c_thing/you_know.c

output = build/c_thing/cthing

all:
	gcc -g -O -o $(output) $(folderc)

remove_all:
	rm -rf $(output)

run:
	./$(output)
