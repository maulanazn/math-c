folderc = some_c_thing/you_know.c

foldersrc = some_c_thing/src/*.c

output = build/c_thing/cthing

all:
	gcc -g -O -o $(output) $(folderc) $(foldersrc)

remove_all:
	rm -rf $(output)

run:
	./$(output)
