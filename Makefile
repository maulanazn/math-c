folderc = some_c_thing/you_know.c

folderinclude = some_c_thing/include/*.h
foldersrc = some_c_thing/src/*.c

output = build/c_thing/cthing

all:
	gcc -g -O -o $(output) $(folderc) $(foldersrc) $(folderinclude)

remove_all:
	rm -rf $(output)

run:
	./$(output)
